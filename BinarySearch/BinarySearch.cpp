#include <iostream>
#include <limits>
#include <string>
using namespace std;

int BinSearch(int data[], int numElements, int searchKey) {
    int low = 0;
    int high = numElements - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (data[mid] == searchKey) {
            return mid;
        }
        else if (data[mid] < searchKey) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

bool IsInteger(string str) {
    for (char c : str) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    int data[] = { 1, 4, 5, 6, 9, 14, 21, 23, 28, 31, 35, 42, 46, 50, 53, 57, 62, 63, 65, 74, 79, 89, 95 };
    int numElements = size(data);
    int searchKey;
    string input;

    cout << "{";
    for (int i = 0; i < numElements; ++i) {
        if (i != numElements - 1) cout << data[i] << ", ";
        else cout << data[i];
    }
    cout << "}\n";

    cout << "Enter search key (or 'x' to exit): ";
    while (cin >> input && input != "x" && input != "X") {
        if (IsInteger(input)) {
            int searchKey = stoi(input);
            int result = BinSearch(data, numElements, searchKey);
            if (result != -1) {
                cout << searchKey << " is in position " << result << "." << endl;
            }
            else {
                cout << searchKey << " not found." << endl;
            }
        }
        else {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number or 'x' to exit." << endl;
        }
        cout << "Enter search key (or 'x' to exit): ";
    }

    cout << "Exiting..." << endl;
    return 0;
}

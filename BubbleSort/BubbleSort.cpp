#include <iostream>
using namespace std;

void BubbleSort(int data[], int n) {
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }

    }
    
}

int main() {

    int data[10]{};
    int n = 10;
    cout << "Enter ten unsorted integers...\n";
    for (int i = 0; i < n; i++) {
        cout << "[" << i << "] = ";
        cin >> data[i];
    }
    cout << "Unsorted list = ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << ", ";
    }
    cout << "\nSorting...\n";

    BubbleSort(data,n);

    cout << "Sorted list = ";
    for (int i = 0; i < 10; i++) {
        cout << data[i] << ", ";
    }


    return 0;
}

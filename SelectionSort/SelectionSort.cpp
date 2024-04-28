#include <iostream>
using namespace std;

void SelectionSort(int list[], int n) {
    

    // Selection Sort implementation
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Start by assuming the first element is the minimum
        for (int j = i + 1; j < n; j++) {
            if (list[j] < list[minIndex]) {
                minIndex = j; // Find the actual minimum element's index
            }
        }    
            // Swap the found minimum element with the first element
            int temp = list[minIndex];
            list[minIndex] = list[i];
            list[i] = temp;      
    }

    

}

int main() {
    int list[10];
    int n = 10;
    cout << "Enter ten unsorted integers...\n";
    for (int i = 0; i < n; i++) {
        cout << "[" << i << "] = ";
        cin >> list[i];
    }

    cout << "Unsorted List = ";
    for (int i = 0; i < n; i++) {
        cout << list[i] << ", ";
    }
    cout << "\nSorting...\n";
    
    SelectionSort(list, n);

    cout << "Sorted List = ";
    for (int i = 0; i < n; i++) {
        cout << list[i] << ", ";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int list[10];
    cout << "Enter ten unsorted integers...\n";
    for (int i = 0; i < 10; i++) {
        cout << "[" << i << "] = ";
        cin >> list[i];     
    }
    cout << "Unsorted List = ";
    for (int i = 0; i < 10; i++) {
        cout << list[i] << ", ";
    }
    cout << "\nSorting...\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i -1; j++) {
            if (list[j] > list[j + 1]) {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
        
    }
    cout << "Sorted List = ";
    for (int i = 0; i < 10; i++) {
        cout << list[i] << ", ";
    }
   

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int list[17]{ 7, 3, 32, 2, 55, 34, 6, 13, 29, 22, 11, 9, 1, 5, 42, 39, 8 };
    cout << "List = ";
    for (int i = 0; i <= 16; i++) {
        if (i == 16) {
            cout << list[16];
        }
        else {
            cout << list[i] << ", ";
        }
    }

    int n = 0;
    bool found = false; // Bayrak degiskeni ekleniyor.
    cout << "\nEnter an integer in the list to search for: ";
    cin >> n;

    for (int i = 0; i <= 16; i++) {
        if (n == list[i]) {
            cout << "Item found at index [" << i << "]" << endl;
            found = true; // Sayi bulundugu icin bayrak true olacak.
            break;
        }
    }

    if (!found) { // Eger bayrak hala false ise, sayi bulunamamadi demektir.
        cout << "Item not found in the list." << endl;
    }

    return 0;
}

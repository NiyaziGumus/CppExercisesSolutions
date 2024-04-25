#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int fact= 1;
    cout << "Enter a positive integer to compute the factorial of: ";

    while (!(cin >> n) || n < 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cerr << "Invalid input. Please enter an integer greater than 0!\n";
        cout << "Enter a positive integer to compute the factorial of: ";

    }

    if (n == 0) {
        cout << "0! = 1";
    }
    else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << n << "! = " << fact;
    }


    return 0;
}

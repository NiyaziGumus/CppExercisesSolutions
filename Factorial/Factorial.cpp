#include <iostream>
#include <limits>
using namespace std;

int compute(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void factoriel() {
    int n = 0;
    cout << "Enter a positive integer to compute the factorial of: ";

    while (!(cin >> n) || n < 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cerr << "Invalid input. Please enter an integer greater than 0!\n";
        cout << "Enter a positive integer to compute the factorial of: ";
    }

    if (n == 0) {
        cout << "0! = 1" << endl;
    }
    else {
        cout << n << "! = " << compute(n) << endl;
    }

}

int main() {
    while (true) {
        factoriel();
    }


    return 0;
}

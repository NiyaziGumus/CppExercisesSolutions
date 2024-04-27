#include <iostream>
using namespace std;

char ToUpperCase(char input) {
    if (input >= 'a' && input <= 'z')
        return input - 32;
    if (input >= 'A' && input <= 'Z')
        return input;
    else
        return '\0';
}

char ToLowerCase(char input) {
    if (input >= 'A' && input <= 'Z')
        return input + 32;
    if (input >= 'a' && input <= 'z')
        return input;
    else
        return '\0';
}

void upperCase() {
    for (unsigned char i = 65; i <= 90; i++) {
        if (i == 90) {
            cout << i;
        }
        else {
            cout << i << ", ";
        }
    }
}

void lowerCase() {
    for (unsigned char i = 97; i <= 122; i++) {
        if (i == 122) {
            cout << i;
        }
        else {
            cout << i << ", ";
        }
    }
}


int main() {
    char a = 'a';
    char A = 'A';
    cout << "Enter a uppercase letter : ";
    cin >> a;
    cout << "Enter a lowercase letter : ";
    cin >> A;

    cout << "\"" << a << "\" to lower case : " << ToLowerCase(a) << endl;
    cout << "\"" << A << "\" to upper case : " << ToUpperCase(A) << endl;

    cout << "All uppercase letters : \n";
    upperCase();
    cout << "\nAll lowercase letters : \n";
    lowerCase();





    return 0;
}

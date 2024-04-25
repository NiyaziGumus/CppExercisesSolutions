

#include <iostream>

using namespace std;

int main()
{
    float n1;
    float n2;
    cout << "Enter a real number n1: ";
    cin >> n1;
    cout << "Enter a real number n2: ";
    cin >> n2;
    
    float add = n1 + n2;
    float sub = n1 - n2;
    float mul = n1 * n2;
    float div = n1 / n2;

    cout << n1 << " + " << n2 << " = " << add << endl;
    cout << n1 << " - " << n2 << " = " << sub << endl;
    cout << n1 << " * " << n2 << " = " << mul << endl;
    cout << n1 << " / " << n2 << " = " << div << endl;
}


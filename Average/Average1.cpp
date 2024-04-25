#include <iostream>
using namespace std;

int main()
{
    float a0;
    float a1;
    float a2;
    float a3;
    float a4;

    cout << "Enter a0: ";
    cin >> a0;
    cout << "Enter a1: ";
    cin >> a1;
    cout << "Enter a2 : ";
    cin >> a2;
    cout << "Enter a3: ";
    cin >> a3;
    cout << "Enter a4: ";
    cin >> a4;
    
    float avarage = (a0 + a1 + a2 + a3 + a4) / 5;

    cout << "The average of the five inputs a0...a4 = " << avarage;


    return 0;
}



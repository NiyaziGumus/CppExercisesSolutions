

#include <iostream>

using namespace std;

int main()
{
    const float pi = 3.14;
    float r;
    cout << "Enter the radius of a circle: ";
    cin >> r;

    float A = pi * r * r;
    float C = 2 * pi * r;


    cout << "The area A of a circle with radius" << r << " = " << A << endl;
    cout << "The circumference C of a circle with radius" << r << " = " << C;


}


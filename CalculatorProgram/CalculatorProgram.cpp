#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

float ccos(float x) {
    return cos(x);
}

float csin(float x) {
    return sin(x);
}

float ctan(float x) {
    return tan(x);
}

float catan2(float y, float x) {
    return atan2(y, x);
}


float csqrt(float x) {
    return sqrt(x);
}

float cpow(float x, float y) {
    return pow(x, y); // x'in y üssünü hesaplar
}

float cLog(float x) {
    return log(x); // x'in doğal logaritmasını hesaplar
}

float cexp(float x) {
    return exp(x); // e'nin x üssünü hesaplar
}

float cfabs(float x) {
    return fabs(x); // x'in mutlak değerini hesaplar
}

float cfloor(float x) {
    return floor(x); // x'i aşağı yuvarlar (örneğin, 3.9 -> 3)
}

float cceil(float x) {
    return ceil(x); // x'i yukarı yuvarlar (örneğin, 3.1 -> 4)
}


int main()
{
    bool exit = false;
    int enter = 1;
    float x, y;
    while (!exit) {
        cout << "1) cos(x), 2) sin(x), 3) tan(x), 4) atan2(y, x), 5) sqrt(x), 6) x^ y 7) ln(x), 8) e^ x, 9) | x | , 10) floor(x), 11) ceil(x), 12) Exit \n";
        cout << "Your choice :";
        cin >> enter;

        if (enter < 1 || enter> 12 || !cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Please choose a number from the menu! \n";
            continue;
        }
        else if (enter == 4 || enter == 6) {
            cout << "Enter x :";
            cin >> x;
            cout << "Enter y :";
            cin >> y;
        }
        else if (enter == 12) {
            cout << "Exiting...";
        }
        else {
            cout << "Enter x :";
            cin >> x;
        }
        switch (enter) {
        case 1:
            cout << "cos(x) = " << ccos(x) << endl;
            break;
        case 2:
            cout << "sin(x) = " << csin(x) << endl;
            break;
        case 3:
            cout << "tan(x) = " << ctan(x) << endl;
            break;
        case 4:
            cout << "atan2(y, x) = " << catan2(y, x) << endl;
            break;
        case 5:
            cout << "sqrt(x) = " << csqrt(x) << endl;
            break;
        case 6:
            cout << "x^y = " << cpow(x, y) << endl;
            break;
        case 7:
            cout << "ln(x) = " << cLog(x) << endl;
            break;
        case 8:
            cout << "e^x = " << cexp(x) << endl;
            break;
        case 9:
            cout << "|x| = " << cfabs(x) << endl;
            break;
        case 10:
            cout << "floor(x) = " << cfloor(x) << endl;
            break;
        case 11:
            cout << "ceil(x) = " << cceil(x) << endl;
            break;
        case 12:
            exit = true;
            break;
        default:
            cout << "Invalid option selected.\n";
            break;
        }
    }



}


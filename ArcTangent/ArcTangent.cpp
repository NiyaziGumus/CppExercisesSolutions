#include <iostream>
#include <cmath>

using namespace std;

#ifndef M_PI
#define M_PI 3.14
#endif

float MyArcTangent(float y, float x) {
    float result = atanf(y / x) * 180 / M_PI; 

    if (x < 0) {
        result += 180;
    }

    return result;
}

int main() {
    cout << "MyArcTangent(4, 2) = " << MyArcTangent(4, 2) << endl;
    cout << "MyArcTangent(5, -1) = " << MyArcTangent(5, -1) << endl;
    cout << "MyArcTangent(-4, -6) = " << MyArcTangent(-4, -6) << endl;
    cout << "MyArcTangent(-6, 4) = " << MyArcTangent(-6, 4) << endl;

    return 0;
}

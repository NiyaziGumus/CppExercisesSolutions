#include <iostream>
#include <cmath>

using namespace std;

// M_PI kullanımını etkinleştirmek için tanımlama yapabiliriz.
#ifndef M_PI
#define M_PI 3.14
#endif

float MyArcTangent(float y, float x) {
    float result = atanf(y / x) * 180 / M_PI; // atanf sonucunu dereceye çeviriyoruz.

    // x negatif olduğunda, sonuca 180 ekleyerek düzeltilmiş açıyı hesaplıyoruz.
    if (x < 0) {
        result += 180;
    }

    return result;
}

int main() {
    // Test koordinatları ile fonksiyonu çağırıp sonuçları yazdırıyoruz.
    cout << "MyArcTangent(4, 2) = " << MyArcTangent(4, 2) << endl;
    cout << "MyArcTangent(5, -1) = " << MyArcTangent(5, -1) << endl;
    cout << "MyArcTangent(-4, -6) = " << MyArcTangent(-4, -6) << endl;
    cout << "MyArcTangent(-6, 4) = " << MyArcTangent(-6, 4) << endl;

    return 0;
}

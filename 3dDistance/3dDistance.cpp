#include <iostream>
#include <cmath>

using namespace std;

float dist3(float ux, float uy, float uz, float vx, float vy, float vz) {

	float d = sqrt(((vx - ux) * (vx - ux)) + ((vy - uy) * (vy - uy)) + ((vz - uz) * (vz - uz)));

	return d;
}

void distance() {
	float u[3] = {};
	float v[3] = {};
	cout << "Enter the first triple position: \n";
	for (int i = 0; i < 3; ++i) {
		cin >> u[i];
	}
	cout << "Enter the second triple position: \n";
	for (int i = 0; i < 3; ++i) {
		cin >> v[i];
	}

	cout << "Distance between (" << u[0] << ", " << u[1] << ", " << u[2] << ")";
	cout << " and (" << v[0] << ", " << v[1] << ", " << v[2] << ") = ";
	cout << dist3(u[0], u[1], u[2], v[0], v[1], v[2]);
}



int main()
{
	distance();
}


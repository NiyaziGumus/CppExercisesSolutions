#include <iostream>
#include <string>
#include <cctype>
using namespace std;


bool isValid(const string& customerNumber) {
	if (customerNumber.length() != 6) return false;

	for (int i = 0; i < 2; i++) {
		if (!isalpha(customerNumber[i])) return false;
	}

	for (int i = 2; i < 6; i++) {
		if (!isdigit(customerNumber[i])) return false;
	}
	return true;


}

int main()
{
	string customerNumber;
	cout << "Enter your customer number : ";
	cin >> customerNumber;

	if (isValid(customerNumber)) {
		cout << "Customer number is valid.";
	}
	else {
		cout << "Customer number is invalid!";
	}



}



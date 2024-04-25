#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cout << "Enter the number of values to average: ";
    
    while (!(cin>>n) || n <= 1) { // If 'n' is not an integer or less than 1, it enters the loop.
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cerr << "Invalid input. Please enter an integer greater than 1!\n";
        cout << "Enter the number of values to average: ";
        
    }

    vector<int> numbers(n); //Here a dynamic array is created using the vector library.

    for (int i = 0; i < n; i++) {
        int temp;  // A temporary variable is created here.
        cout << "[" << i << "] = ";
         
        while (!(cin >> temp)) { //Here, the value is taken from the user and if the value received is not an integer, the loop is entered.
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cerr << "Invalid input. Please enter an integer! \n";
            cout << "[" << i << "] = ";

        }
        numbers[i] = temp; // The temporary variable is assigned to the element of the array.
    
    }
    float sum = 0.0;
    float avg = 0.0;

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    avg = sum / n;

    cout << "Average = " << avg;

    return 0;
}

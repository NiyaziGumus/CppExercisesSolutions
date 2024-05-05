#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

int RandomNumber() {
    return rand() % 101;
}

void RandomArrayFill(int* array, int size) {
    for (int i = 0; i < size; ++i) {
        array[i] = RandomNumber();  // Assigns a random number to each element
    }
}

void RandomArrayFill(vector<int>& vec, int size) {
    vec.resize(size);  // Adjusts the size of the vector to 'size'
    for (int i = 0; i < size; ++i) {
        vec[i] = RandomNumber();  // Directly assigns random numbers to the vector's elements
    }
}

// Prints all elements of an array with formatting
void printArray(int* array, int size) {
    cout << "Array = {";
    for (int i = 0; i < size; ++i) {
        cout << array[i];
        if (i < size - 1) cout << ", ";  // Adds a comma between numbers but not after the last number
    }
    cout << "}\n";
}

// Prints all elements of a vector, similar to the array print function
void printVector(const vector<int>& vec) {
    cout << "Vector = {";
    for (size_t i = 0; i < vec.size(); ++i) {
        cout << vec[i];
        if (i < vec.size() - 1) cout << ", ";
    }
    cout << "}\n";
}

// Interactive menu to choose between filling an array or a vector
void menu() {
    bool exit = false;
    int choice;

    while (!exit) {
        cout << "1) Fill an array. 2) Fill a vector. 3) Exit. ";
        cin >> choice;

        switch (choice) {
        case 1:
        {
            int size;
            cout << "Enter the size of an array to create: ";
            cin >> size;
            if (size > 0) {
                int* arr = new int[size];  // Dynamically allocates memory for the array
                RandomArrayFill(arr, size);
                printArray(arr, size);
                delete[] arr;  // Frees the dynamically allocated memory
            }
            else {
                cout << "Invalid size. Please enter a positive number.\n";
            }
        }
        break;
        case 2:
        {
            int size;
            cout << "Enter the size of a vector to create: ";
            cin >> size;
            if (size > 0) {
                vector<int> vec;  // Uses vector, which handles its own memory management
                RandomArrayFill(vec, size);
                printVector(vec);
            }
            else {
                cout << "Invalid size. Please enter a positive number.\n";
            }
        }
        break;
        case 3:
            cout << "Exiting...\n";
            exit = true;
            break;
        default:
            cerr << "Invalid choice. Please select 1, 2, or 3.\n";
            cin.clear();  // Clears any error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignores incorrect input until the next newline
        }
    }
}

int main() {
    srand(time(0));  // Seeds the random number generator
    menu();
    return 0;
}

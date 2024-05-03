#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>

using namespace std;

struct MedicalItem {
    string name;
    string manufacturer;
    double price;
    char available;
};

vector<MedicalItem> inventoryList;

void addItem() {
    MedicalItem newItem;

    cout << "Enter the name of the item: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');;
    getline(cin, newItem.name);
    
    cout << "Enter the manufacturer of the item: ";
    getline(cin, newItem.manufacturer);

    while (true)
    {
        cout << "Enter the price of the item: ";
        cin >> newItem.price;

        if (cin.fail() || newItem.price < 1) {
            cerr << "Wrong choice!!!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }
    
    while (true)
    {
        cout << "Is the item available (Y/N): ";
        cin >> newItem.available;
        newItem.available = toupper(newItem.available);

        if (cin.fail() || !(newItem.available == 'Y' || newItem.available == 'N')) {
            cerr << "Wrong choice!!!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }

    inventoryList.push_back(newItem);
}

void displayCurrentInventory() {
    if (inventoryList.empty()) {
        cout << "Inventory is empty.\n";
    }
    else {
        cout << "{\n";
        for (int i = 0; i < inventoryList.size(); ++i) {
            cout << "Item " << i + 1 << ":\n";
            cout << "Name: " << inventoryList[i].name << endl;
            cout << "Manufacturer: " << inventoryList[i].manufacturer << endl;
            cout << "Price: " << inventoryList[i].price << endl;
            cout << "Available: " << inventoryList[i].available << "\n\n";
        }
        cout << "}\n";
    }
}

void search() {
    std::string manufacturer;
    std::cout << "Enter manufacturer name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');;
    std::getline(std::cin, manufacturer);
    bool found = false;

    for (int i = 0; i < inventoryList.size(); ++i) {
        if (inventoryList[i].manufacturer == manufacturer) {
            std::cout << "Name: " << inventoryList[i].name
                << ", Price: " << inventoryList[i].price
                << ", Available: " << inventoryList[i].available
                << "\n";
                found = true;
        }         
    }
    if(!found) {
        cout << "Item not found!\n";
        }
}

void sortItems() {
    cout << "Sorting inventory by item names...\n";
    sort(inventoryList.begin(), inventoryList.end(), [](const MedicalItem& a, const MedicalItem& b) {
        return a.name < b.name;
        });
    cout << "Sorting completed successfully.\n";
}


void menu() {
    int choice;
    bool exit = false;
    while (!exit) {
        cout << "1. Add New Item\n";
        cout << "2. Search by Manufacturer\n";
        cout << "3. Sort Items by Name\n";
        cout << "4. Display Current Inventory\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail() || !(choice >= 1 && choice <= 5)) {
            cerr << "Wrong choice!!!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice) {
        case 1:
            addItem();
            break;
        case 2:
            search();   
            break;
        case 3:
            sortItems();
            break;
        case 4:
            displayCurrentInventory();
            break;
        case 5:
            cout << "Exiting...\n";
            exit = true;
            break;
        }
    }
}

int main() {

    menu();
}

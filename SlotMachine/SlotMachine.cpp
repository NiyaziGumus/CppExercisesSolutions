#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int chips = 1000;
int bet = 1;


int Random(int low, int high) {
    return low + rand() % (high - low + 1);
}

void spiel() {
    bool gameRunning = chips > 0;
    while (gameRunning) {
        cout << "Enter your bet: ";
        cin >> bet;
        if (bet > chips || bet < 1 || !cin) {
            cout << "You did not enter a valid bet.\n ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        int a = Random(2, 7);
        int b = Random(2, 7);
        int c = Random(2, 7);

        cout << a << " " << b << " " << c << endl;

        if (a == 7 && b == 7 && c == 7) {
            chips += bet * 10;
            cout << "You won " << bet * 10 << "$!" << endl;
        }
        else if (a != 7 && a == b && a == c) {
            chips += bet * 5;
            cout << "You won " << bet * 5 << "$!" << endl;
        }
        else if ((a != b && a != c && b != c)) {
            chips -= bet;
            cout << "You lose " << bet << "$!" << endl;
        }
        else {
            chips += bet * 3;
            cout << "You won " << bet * 3 << "$!" << endl;
        }
        break;
    }

}

void menu() {
    bool exit = false;
    int choice;

    while (!exit) {
        cout << "Your chips: $" << chips;
        cout << "\n1) Play slot. 2) Exit. ";
        cin >> choice;

        if (!(choice == 1 || choice == 2)) {
            cerr << "Wrong choice!!!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        switch (choice)

        {
        case 1:
            spiel();
            break;
        case 2:
            cout << "Exiting...\n";
            exit = true;
            break;
        default:
            break;
        }
        if (chips == 0) {
            cout << "Your chips = $0\n";
            cout << "Better luck next time!";
            exit = true;
        }
    }


}

int main()
{
    srand(time(0));
    menu();


}


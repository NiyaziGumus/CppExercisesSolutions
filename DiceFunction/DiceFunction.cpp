#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;



int chips = 1000;
int bet = 1;


void DiceReference(int& die1, int& die2) {
    die1 = rand() % 6 + 1;
    die2 = rand() % 6 + 1;
}

void DicePointer(int* die1, int* die2) {
    *die1 = rand() % 6 + 1;
    *die2 = rand() % 6 + 1;
}

void Point(int point, int sum) {
    while (true)
    {
        cout << "Press any key to roll the dice again!\n";
        getchar();
        int die1 = 0;
        int die2 = 0;

        DiceReference(die1, die2);
        cout << "first die: " << die1 << "\nsecond die: " << die2 << endl;
        int sum = die1 + die2;
        cout << "\Summe: " << sum << endl;

        if (sum == point) {
            cout << "You won " << bet << "$!" << endl;
            chips += bet;
            break;
        }
        else if (sum == 7) {
            cout << "You lose " << bet << "$!" << endl;
            chips -= bet;
            break;
        }


    }
    
}

void Spiel() {
    bool gameRunning = chips > 0;
    while (gameRunning) {
        cout << "Enter your bet: ";
        cin >> bet;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (bet > chips || bet < 1 || !cin) {
            cout << "You did not " << bet << "$\nEnter a valid bet!\n ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cout << "The dice are being rolled.." << endl;
        
        int die1 = 0;
        int die2 = 0;
        DicePointer(&die1, &die2);
        cout << "first die: " << die1 << endl;
        cout << "second die: " << die2 << endl;
        int sum = die1 + die2;
        cout << "Summe: " << sum << endl;


        if (sum  == 7 || sum == 11) {
            chips += bet;
            cout << "You won " << bet<< "$!" << endl;
        }
        else if (sum == 2 || sum == 3 || sum == 12) {
            chips -= bet;
            cout << "You lose " << bet<< "$!" << endl;
        }
        else {
            int point = sum;
            cout << "Point = " << sum << endl;
            
            Point(point,sum);
        }
        break;
    }

}

void menu() {
    bool exit = false;
    int choice;

    while (!exit) {
        cout << "Your chips: $" << chips;
        cout << "\n1)Roll the dice. 2) Exit. ";
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
            Spiel();
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


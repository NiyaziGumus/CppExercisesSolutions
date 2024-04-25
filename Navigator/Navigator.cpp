#include <iostream>
#include <cctype> // for tollower
using namespace std;

int main()
{
	bool quit = false;
	int p[2]{ 0,0 };
	char move = 'n';
	cout << "Current Position = (" << p[0] << ", " << p[1] << ")" << endl;
	
	while (!quit) {
		
			
		cout << "Move(N)orth, (E)ast, (S)outh, (W)est (Q)uit ?\n";
		cin >> move;
		move = tolower(move); // convert the entered letter to lowercase

		switch (move)
		{
		case 'n':
			p[1] ++;
			break;
		case 's':
			p[1] --;
			break;
		case 'e':
			p[0] ++;
			break;

		case 'w':
			p[0] --;
			break;
		case 'q':
			quit = true;
			break;
		
		default:
			cout << "This is not a valid situation. Try again!\n";
			continue;
		}
		cout << "Current Position = (" << p[0] << ", " << p[1] << ")" << endl;
		}
	return 0;
}


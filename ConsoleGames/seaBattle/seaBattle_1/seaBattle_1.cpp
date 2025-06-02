#include "varibles.h"

using namespace std;

int main()
{

	cout << "1 - play with your friend\n2 - play with computer\n" << endl;
	cin >> userChoiceMenu;
	system("cls");

	if (userChoiceMenu == 1)
	{
		cout << "Input player 1 name: ";
		cin >> player1;
		cout << "\nInput player 2 name: ";
		cin >> player2;

		system("cls");
		cout << "Welcome " << player1 << " and " << player2 << "!\n\n";
		system("pause");
		system("cls");

		char** myTableVisible = new char* [arraySize];
		char** opponentTableVisible = new char* [arraySize];
		char** myTableUnVisible = new char* [arraySize];
		char** opponentTableUnVisible = new char* [arraySize];
		for (size_t i = 0; i < arraySize; i++)
		{
			myTableVisible[i] = new char[arraySize];
			opponentTableVisible[i] = new char[arraySize];
			myTableUnVisible[i] = new char[arraySize];
			opponentTableUnVisible[i] = new char[arraySize];
		}

		//початкове заповнення поля 
		for (size_t i = 0; i < arraySize; i++)
		{
			for (size_t k = 0; k < arraySize; k++)
			{
				myTableVisible[i][k] = char(247);
				opponentTableVisible[i][k] = char(247);
				myTableUnVisible[i][k] = char(247);
				opponentTableUnVisible[i][k] = char(247);
			}
		}

		char ch = 0;
		for (int ship = 0; ship < 4; ship++) {
			
			x = 0;
			y = 0;
			ch = 0;
			while (ch != '\r') {
				system("cls");
				cout << "now is " << ship + 1 << " one square ship" << endl;
				cout << "press enter to continue" << endl;
				printTableStart(myTableUnVisible, arraySize, x, y, addToY, addToX, 1);
				ch = _getch();
				if (ch == 'w' && y != 0)
				{
					y--;
				}
				else if (ch == 's' && y != arraySize - 1)
				{
					y++;
				}
				else if (ch == 'a' && x != 0)
				{
					x--;
				}
				else if (ch == 'd' && x != arraySize - 1)
				{
					x++;
				}
				if (ch == '\r'){
					if (myTableUnVisible[y][x] == char(254) || myTableUnVisible[y][x] == char(35))
					{
						ch = 0;
						cout << "\nyou can't place your ship here" << endl;
						system("pause");
					}
				}
			}
			myTableUnVisible[y][x] = char(254);
			placeBourder(myTableUnVisible, x, y, arraySize);
		}

		for (int ship = 0; ship < 3; ship++){
			ch = 0;
			x = 0;
			y = 0;
			while (ch != '\r')
			{
				system("cls");
				cout << "now is " << ship + 1 << " two square ship" << endl;
				cout << "press \"h\" to turn the ship horizontal" << endl;
				cout << "press \"v\" to turn the ship vertical" << endl;
				cout << "press enter to continue" << endl;
				printTableStart(myTableUnVisible, arraySize, x, y, addToY, addToX, 2);
				ch = _getch();
				if (ch == 'v')
				{
					addToX = 0;
					addToY = 1;
				}
				else if (ch == 'h' && x <= arraySize - 2)
				{
					addToX = 1;
					addToY = 0;
				}
				if (ch == 'w' && y != 0)
				{
					y--;
				}
				else if (ch == 's' && y != arraySize - 2)
				{
					if (y == arraySize - 2 && addToX == 1)
					{
						y++;
					}
					else if (y < arraySize - 2)
					{
						y++;
					}
				}
				else if (ch == 'a' && x != 0)
				{
					x--;
				}
				else if (ch == 'd')
				{
					if (x == arraySize - 2 && addToY == 1)
					{
						x++;
					}
					else if (x < arraySize - 2) {
						x++;
					}
				}
				if (ch == '\r')
				{
					if (myTableUnVisible[y][x] == char(254) || myTableUnVisible[y + addToY][x + addToX] == char(254) || myTableUnVisible[y][x] == char(35) || myTableUnVisible[y + addToY][x + addToX] == char(35))
					{
						ch = 0;
						cout << "\nyou cant place your ship here" << endl;
						system("pause");
					}
				}

			}
			myTableUnVisible[y][x] = char(254);
			myTableUnVisible[y + addToY][x + addToX] = char(254);
			placeBourder(myTableUnVisible, x, y, x + addToX, y + addToY, arraySize);
		}

		for (int ship = 0; ship < 2; ship++)
		{

		}


		system("cls");
		printTableGame(myTableUnVisible, opponentTableVisible, arraySize, player1, player2);
	}
	else if (userChoiceMenu == 2) {
		cout << "coming soon" << endl;
	}

	return 7;

}

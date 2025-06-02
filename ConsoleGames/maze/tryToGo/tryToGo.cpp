#include <iostream>
#include <conio.h>
#include <random>

using namespace std;

void printTable(char** table, int size, char user, int x, int y) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			if (i == y && k == x)
			{
				cout << user << " ";
				continue;
			}

			cout << table[i][k] << " ";
			
		}
		cout << endl;
	}
}

int main()
{
	srand(time(nullptr));
	int randNum = 0;
	char user = 1;
	int littleSize = 9;
	char** table = new char* [littleSize];
	for (size_t i = 0; i < littleSize; i++)
	{
		table[i] = new char[littleSize];
	}

	for (size_t i = 0; i < littleSize; i++)
	{
		for (size_t k = 0; k < littleSize; k++)
		{
			table[i][k] = char(32);
		}
	}
	int fill = 0;
	for (size_t i = 0; i < littleSize; i++)
	{
		table[i][fill] = char(254);
		table[fill][i] = char(254);
	}
	for (size_t i = 0; i < littleSize; i++)
	{
		table[i][littleSize - 1] = char(254);
		table[littleSize - 1][i] = char(254);
	}
	table[0][8] = char(254);

	for (size_t i = 1; i < littleSize - 1; i++)
	{
		randNum = rand() % 2;
		if (randNum == 1 && table[0][i - 1] != char(254))
		{
			table[0][i] == char(254);
		}
		else
		{
			cout << "not 1" << endl;
		}
	}

	
	printTable(table, littleSize, user, 1, 1);
	
	char goButton = 0; int goY = 1, goX = 1;
	
	while(true) {
		goButton = _getch();
		if (goButton == 'w' && goY > 1) {
			goY--;
		}
		else if (goButton == 's' && goY < littleSize - 2) {
			goY++;
		}
		else if (goButton == 'a' && goX > 1) {
			goX--;
		}
		else if (goButton == 'd' && goX < littleSize - 2) {
			goX++;
		}
		system("cls");
		printTable(table, littleSize, user, goX, goY);
	}

	for (size_t i = 0; i < littleSize; i++) {
		delete[] table[i];
	}
	delete[] table;

	
}

#pragma once

using namespace std;

void printTableGame(char** myTable, char** opponentTable, int arraySize, string player1, string player2) {
	cout << "\033[33m" << player1 << "                        " << player2 << endl;
	cout << "\033[35m" << "    a b c d e f g h i g         a b c d e f g h i g\n" << "\033[0m";

	for (size_t i = 0; i < arraySize; i++)
	{
		cout << "\033[35m" << i + 1 << "  " << "\033[0m";
		if (i + 1 != 10)
		{
			cout << " ";
		}
		for (size_t k = 0; k < arraySize; k++)
		{
			cout << myTable[i][k] << " ";
		}
		cout << "    ";
		cout << "\033[35m" << i + 1 << "  " << "\033[0m";
		if (i + 1 != 10)
		{
			cout << " ";
		}
		for (size_t k = 0; k < arraySize; k++)
		{
			cout << opponentTable[i][k] << " ";
		}
		cout << endl;
	}
}

void printTableStart(char** table, int arraySize, int x, int y, int addToY, int addToX, int amountOfSquares) {
	bool notPlaced = true;
	cout << "x: " << x << "y: " << y << endl;
	for (size_t i = 0; i < arraySize; i++)
	{
		for (size_t k = 0; k < arraySize; k++)
		{
			if (y == i && x == k)
			{
				cout << char(254) << " ";
				continue;
			}
			bool checkX = ((amountOfSquares == 2 && x + 1 == k) || (amountOfSquares == 3 && x + 2 == k) || (amountOfSquares == 4 && x + 3 == k)) && notPlaced;
			bool checkY = ((amountOfSquares == 2 && y + 1 == i) || (amountOfSquares == 3 && y + 2 == i) || (amountOfSquares == 4 && y + 3 == i)) && notPlaced;
			if (addToX == 1 && checkX && checkY)
			{
				cout << char(254) << " ";
				notPlaced = false;
				continue;
			}
			else if (addToY == 1 && checkY && checkX)
			{
				cout << char(254) << " ";
				notPlaced = false;
				continue;
			}

			cout << table[i][k] << " ";
		}
		cout << endl;
	}
}

void placeBourder(char** &table, int x, int y, int size) {
	for (int i = -1; i <= 1; i++)
	{
		for (int k = -1; k <= 1; k++)
		{
			int bourderX = x + k;
			int bourderY = y + i;
			if (bourderX >= 0 && bourderX < size && bourderY >= 0 && bourderY < size && table[bourderY][bourderX] != char(254))
			{
				table[bourderY][bourderX] = char(35);
			}
		}
	}
}

void placeBourder(char** &table, int x1, int y1, int x2, int y2, int size) {
	
	for (int i = -1; i <= 1; i++)
	{
		for (int k = -1; k <= 1; k++)
		{
			int bourderX = x1 + k;
			int bourderY = y1 + i;
			if (bourderX >= 0 && bourderX < size && bourderY >= 0 && bourderY < size && table[bourderY][bourderX] != char(254))
			{
				table[bourderY][bourderX] = char(35);
			}
			bourderX = x2 + k;
			bourderY = y2 + i;
			if (bourderX >= 0 && bourderX < size && bourderY >= 0 && bourderY < size && table[bourderY][bourderX] != char(254))
			{
				table[bourderY][bourderX] = char(35);
			}
		}
	}
}
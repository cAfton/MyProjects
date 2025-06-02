#include <iostream>
#include <conio.h>
#include <random>
#include <ctime>


using namespace std;

void printTable(char** table, int score, int size, char user, char goal, int x, int y) {
	cout << "Score: " << score << endl << endl;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			if (i == y && k == x)
			{
				cout << "\033[33m" << user << "\033[0m" << " ";
				continue;
			}

			if (table[i][k] == goal)
			{
				cout << "\033[35m" << goal << "\033[0m" << " ";
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
	int randNum = 0, size, numOfGoals, goals, userChoise = -1;
	char user = 1, goal = 3;

	do
	{
		system("cls");
		cout << "\033[0m" << "Welcome! Here is some help for you: ";
		cout << "\033[35m" << "\n\n1 - mowing keys\n2 - goal\n3 - let's go!\n\n" << endl;
		cin >> userChoise;
		system("cls");
		switch (userChoise)
		{
		case 1:
			cout << "moving: \n\nw - up\ns - down\nd - right\na - left\n\n" << endl;
			system("pause");
			break;
		case 2:
			cout << "you need to collect 10 score by collecting hearts. \nWhen you reach 10 score, an exit will open\nDon't press 't'\n\n" << endl;
			system("pause");
			break;
		case 3:
			break;
		default:
			cout << "there no such option" << endl;
			system("pause");
			break;
		}
	} while (userChoise != 3);

	cout << "Please, enter size of table: ";
	cin >> size;
	cout << "Enter amount of points: ";
	cin >> numOfGoals;
	goals = numOfGoals;

	while ((size - 2) * (size - 2) < numOfGoals + 10)
	{
		system("cls");
		cout << "Please, enter bigger size of table: ";
		cin >> size;
	}

	char** table = new char* [size];
	for (size_t i = 0; i < size; i++)
	{
		table[i] = new char[size];
	}

	for (size_t i = 0; i < size; i++)
	{
		for (size_t k = 0; k < size; k++)
		{
			table[i][k] = char(32);
		}
	}
	int fill = 0;
	//рамка
	for (size_t i = 0; i < size; i++) 
	{
		table[i][fill] = char(254);
		table[fill][i] = char(254);
		table[i][size - 1] = char(254);
		table[size - 1][i] = char(254);
	} 

	//рандомне заповнення першого ряду
	for (size_t i = 1; i < size - 2; i++)
	{
		randNum = rand() % 2;
		if (randNum == 1 && table[1][i - 1] != char(254))
		{
			table[1][i] = char(254);
		}
	} 

	//рандомне заповнення решти
	for (size_t i = 2; i < size - 1; i++)
	{
		for (size_t k = 1; k < size - 1; k++)
		{
			if (table[i - 1][k] == char(254))
			{
				randNum = rand() % 2;
			}
			else {
				randNum = rand() % 3;
			}

			if (k == size - 2)
			{
				if (table[i - 1][k] == char(254))
				{
					continue;
				}
			}

			if (randNum == 0 && table[i + 1][k - 1] != char(254) && table[i - 1][k - 1] != char(254))
			{
				table[i][k] = char(254);
			}
		}
	}

	//розставлення цілей
	while (numOfGoals != 0)
	{
		for (size_t i = 1; i < size - 1; i++)
		{
			for (size_t k = 1; k < size - 1; k++)
			{
				if (i == 1 && k == 1)
					continue;
				randNum = rand() % 7;
				if (randNum == 4 && numOfGoals > 0 && table[i][k] != char(254) && table[i][k] != goal)
				{
					table[i][k] = goal;
					numOfGoals--;
				}
				if (numOfGoals == 0)
					break;
			}
		}
	}

	

	system("cls");
	cout << "\033[33m" << "good luck!\n\n" << endl;
	system("pause");
	system("cls");
	cout << "\033[0m";

	time_t startTime = clock();
	printTable(table, numOfGoals, size, user, goal, 1, 1);

	char goButton = 0; int goY = 1, goX = 1;

	while (goButton != 't') {
		goButton = _getch();
		if (goButton == 'w' && table[goY - 1][goX] != char(254)) {
			goY--;
		}
		else if (goButton == 's' && table[goY + 1][goX] != char(254)) {
			goY++;
		}
		else if (goButton == 'a' && table[goY][goX - 1] != char(254)) {
			goX--;
		}
		else if (goButton == 'd' && table[goY][goX + 1] != char(254)) {
			goX++;
		}

		if (table[goY][goX] == char(3))
		{
			table[goY][goX] = char(32); 
			numOfGoals++;
		}


		if (numOfGoals == goals)
			table[size - 1][size - 2] = char(32);

		if (goX == size - 2 && goY == size - 1)
		{
			time_t endTime = clock();

			double result = (endTime - startTime) / 1000;


			system("cls");
			cout << "\033[35m" << "You win!" << "\033[0m" << endl;

			cout << "\n\nYou did it in ";
			int minutes = 0;
			if (result > 60)
			{
				while (result > 60)
				{
					minutes++;
					result -= 60;
				}
			}
			if (minutes != 0) {
				cout << minutes << " minutes, ";
			}
			cout << result << " seconds\n\n" << endl;


			system("pause");
			return 7;
		}

		system("cls");
		printTable(table, numOfGoals, size, user, goal, goX, goY);
	}

	for (size_t i = 0; i < size; i++) {
		delete[] table[i];
	}
	delete[] table;


}

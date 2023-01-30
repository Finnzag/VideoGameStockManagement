#include <iostream>
#include <vector>
#include "VideoGame.h"
#include "ConsoleGame.h"
#include "ComputerGame.h"

using namespace std;

// Function declarations
void createMenu();
void createConsoleGame();
void createComputerGame();
void printGames();

std::vector<VideoGame*> vVec;

int main() {
	createMenu();
}

void createMenu()
{
	char gameType, menuSelect;

	cout << "                       Video Games Data Entry\n";
	cout << "***************************************************************************\n" << endl;

	cout << "Do you want to enter data for a Computer Game or a console Game (O / C) : ";
	cin >> gameType;

	switch (gameType)
	{
	case 'O':
		createComputerGame();
		break;

	case 'C':
		createConsoleGame();
		break;

	default:
		createMenu();
		break;
	}

	cout << "Do you want to add another item (Y / N): ";
	cin >> menuSelect;

	if (menuSelect == 'Y')
	{
		cout << "Do you want to enter data for a Computer Game or a console Game (O / C) : ";
		cin >> gameType;
	}
	else
	{
		printGames();
	}
}

void createConsoleGame()
{
	string name, consoleType;
	float price{};

	cout << "Please enter title of console game: ";
	std::getline(std::cin, name);
	//cout << "Please enter price: ";
	//cin >> price;
	//cout << "Please enter console type: ";
	//cin >> consoleType;



	vVec.push_back(new ConsoleGame(name, price, consoleType));
}

void createComputerGame()
{
	string name, osType;
	float price{};

	cout << "Please enter title of computer game : ";
	getline(cin, name);
	//cout << "Please enter price: ";
	//cin >> price;
	//cout << "Please enter operating system type: ";
	//cin >> osType;



	vVec.push_back(new ComputerGame(name, price, osType));
}

void printGames()
{
	system("cls");

	cout << "Video Game List:" << endl;
	cout << "****************************************************" << endl;

	for (size_t i = 0; i < vVec.size(); i++)
	{
		vVec[i]->display();
		// Frees up memory allocated using the pointer
		delete vVec[i];
	}
}

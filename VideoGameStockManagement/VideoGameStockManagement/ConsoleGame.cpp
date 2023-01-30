#include "ConsoleGame.h"
#include <iostream>

void ConsoleGame::display()
{
	std::cout << "Title: " << title << std::endl;
	std::cout << "Price: " << price << std::endl;
	std::cout << "Console Type: " << consoleType << std::endl;

	std::cout << "\n*********************************************************************" << std::endl;
}

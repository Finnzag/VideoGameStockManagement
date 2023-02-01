#include "ComputerGame.h"
#include <iostream>

void ComputerGame::display()
{
	std::cout << "Title: " << title << std::endl;
	std::cout << "Price: " << price << std::endl;
	std::cout << "OS Type: " << operatingSystemType << std::endl;

	std::cout << "\n***********************************************" << std::endl;
}

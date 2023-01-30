#pragma once
#include <string>
#include "VideoGame.h"

class ConsoleGame : public VideoGame
{
public:
	ConsoleGame(std::string t, float p, std::string c) 
		: VideoGame(t, p), consoleType(c) {}

private:

	std::string consoleType;

public:

	void display();

};

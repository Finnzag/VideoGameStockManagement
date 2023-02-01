#pragma once
#include <string>
#include "VideoGame.h"

class ComputerGame : public VideoGame
{
public:
	ComputerGame(std::string t, float p, std::string c)
		: VideoGame(t, p), operatingSystemType(c) {}
	~ComputerGame(){}

private:

	std::string operatingSystemType;

public:

	void display();

};















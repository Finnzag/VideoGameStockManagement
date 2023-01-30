#pragma once
#include <string>

class VideoGame
{
public:
	VideoGame(std::string t, float p)
		: title(t), price(p) {}

protected:

	std::string title;
	float price;

public:

	virtual void display();

};


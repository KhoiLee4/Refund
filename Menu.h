#pragma once

#include <SFML/Graphics.hpp>
#include "Record.h"
#include "Game.h"
#include "Setting.h"
#include "gameConfig.h"
#include <iostream>


class Menu
{
private:
	sf::RenderWindow* window;

public:
	Menu();
	~Menu();

	void optionStart();
	void optionSetting();
	void optionRecord();
	void runMenu();

};


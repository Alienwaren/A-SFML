#ifndef CPROGRAM_H
#define CPROGRAM_H
#include "CMainWindow.h"
#include <iostream>
#include <SFML\System.hpp>
class CProgram
{
public:
	CProgram();///to be read from config!
	~CProgram();
	int run();
	int updateGame();
private:
	CMainWindow *mainWindow;
	sf::Clock *gameTimer;
	double intervalBetweenUpdates;
};

#endif //CPROGRAM_H
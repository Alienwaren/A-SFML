#include "CProgram.h"



CProgram::CProgram()
	: intervalBetweenUpdates(10) //ms
{
	mainWindow = new CMainWindow(800, 600, "A* SFML");
	gameTimer = new sf::Clock();
	
}
///
/// NO EVENTS -> -1
/// WINDOW CLOSED -> 0
int CProgram::run()
{
	int returnCode = 0;
	while (true)
	{
		returnCode = this->updateGame();
		if (returnCode != -1)
			break;
	}
	return returnCode;
}
int CProgram::updateGame()
{
	sf::Time elasped = gameTimer->getElapsedTime();
	if (elasped.asMilliseconds() / intervalBetweenUpdates > 0)
	{
		if (mainWindow->pollWindowEvents() == 0)
		{
			return 0;
		}
		mainWindow->clearWindowAndDrawEverything();
	}
	return -1;

}
CProgram::~CProgram()
{
	delete mainWindow;
	delete gameTimer;
}

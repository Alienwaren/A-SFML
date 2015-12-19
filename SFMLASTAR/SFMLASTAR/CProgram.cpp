#include "CProgram.h"



CProgram::CProgram()
{
	mainWindow = new CMainWindow(800, 600, "A* SFML");
}
///
/// NO EVENTS -> -1
/// WINDOW CLOSED -> 0
int CProgram::run()
{
	int returnCode = 0;
	while (true)
	{
		if (mainWindow->pollWindowEvents() == 0)
		{
			break;
		}
		mainWindow->openWindow();
	}
	return returnCode;
}

CProgram::~CProgram()
{
	delete mainWindow;
}

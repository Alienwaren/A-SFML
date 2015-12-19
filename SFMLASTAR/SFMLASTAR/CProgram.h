#ifndef CPROGRAM_H
#define CPROGRAM_H
#include "CMainWindow.h"
class CProgram
{
public:
	CProgram();///to be read from config!
	~CProgram();
	int run();
private:
	CMainWindow *mainWindow;
};

#endif //CPROGRAM_H
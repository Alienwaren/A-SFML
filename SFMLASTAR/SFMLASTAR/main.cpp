#include "CProgram.h"
int main()
{
	CProgram* mainProgram = new CProgram();
	int returnCode = mainProgram->run();
	delete mainProgram;
	return returnCode;
}
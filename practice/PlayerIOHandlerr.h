#ifndef PLAYERIOHANDLER_H
#define PLAYERIOHANDLER_H

#include "IOHandler.h"
class PlayerIOHandlerr :
	public IOHandler
{
public:
	PlayerIOHandlerr();
	~PlayerIOHandlerr();

	IOHandler::KeyCode processInput();

private:


};

#endif // !PLAYERIOHANDLER_H
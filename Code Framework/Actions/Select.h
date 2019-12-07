#pragma once
#include "Action.h"
#include "../Components/Component.h"
class Select: public Action
{
private:
	int index;

public:
	Select(ApplicationManager *App);
	void Execute();
	int getIndex();

	////////////////////////////////////////////////////////////////////////////////////
	//To undo this action (code depends on action type)
	virtual void Undo() ;

	//To redo this action (code depends on action type)
	virtual void Redo() ;
};


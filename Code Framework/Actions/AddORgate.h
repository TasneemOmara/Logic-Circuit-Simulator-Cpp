#pragma once
#include "action.h"
#include "..\Components\OR2.h"
class AddORgate:public Action
{
private:
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
public:
	AddORgate(ApplicationManager* pApp);
	virtual ~AddORgate(void);

	//Execute action (code depends on action type)
	virtual void Execute();
	virtual void Undo();
	virtual void Redo();

};


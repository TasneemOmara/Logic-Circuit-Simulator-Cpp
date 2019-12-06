#pragma once
#include "action.h"
#include "..\Components\XNOR2.h"

class AddXNORgate :public Action
{private:
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
public:
	AddXNORgate(ApplicationManager* pApp);
	virtual	~AddXNORgate(void);
//Execute action (code depends on action type)
	virtual void Execute();

	virtual void Undo();
	virtual void Redo();

};


#pragma once
#include "action.h"
#include "..\Components\Connection.h"

class ADD_connection :public Action
{private: 
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
public:
	ADD_connection(ApplicationManager* pApp);
	virtual ~ADD_connection(void);

	//Execute action (code depends on action type)
	virtual void Execute();

	virtual void Undo();
	virtual void Redo();

};


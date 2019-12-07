#pragma once
#include "action.h"
#include "..\Components\Switch.h"

class ADD_switch :public Action
{
private:
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
public:
	ADD_switch(ApplicationManager* pApp);
	virtual~ADD_switch( void);

	//Execute action (code depends on action type)
	virtual void Execute();

	virtual void Undo();
	virtual void Redo();

};

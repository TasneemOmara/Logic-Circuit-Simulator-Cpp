#pragma once 
#include "action.h"
#include "..\Components\INV2.h"

class ADD_INV2: public Action
{ private:
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
public:
	ADD_INV2(ApplicationManager* pApp);
	virtual~ADD_INV2( void);

	//Execute action (code depends on action type)
	virtual void Execute();

	virtual void Undo();
	virtual void Redo();

};

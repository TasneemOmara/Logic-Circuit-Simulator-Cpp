#pragma once 
#include "action.h"
#include "..\Components\INV.h"//*gohary

class ADD_INV: public Action
{ private:
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
public:
	ADD_INV(ApplicationManager* pApp);
	virtual~ADD_INV( void);

	//Execute action (code depends on action type)
	virtual void Execute();

	virtual void Undo();
	virtual void Redo();

};

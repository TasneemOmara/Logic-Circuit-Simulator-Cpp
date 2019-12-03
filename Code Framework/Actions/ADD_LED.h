#pragma once
#include "action.h"
#include "..\Components\LED.h"//*gohary

class ADD_LED: public Action
{ private:
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
public:
	ADD_LED(ApplicationManager* pApp);
	virtual ~ADD_LED( void);

	//Execute action (code depends on action type)
	virtual void Execute();

	virtual void Undo();
	virtual void Redo();

};
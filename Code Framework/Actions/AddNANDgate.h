#pragma once
#include "action.h"
#include "\Components\NAND.h"//*i need from you gohary to provide the file nme for each component
class AddNANDgate : public Action
{
	private:
		int Cx, Cy;	//Center point of the gate
		int x1, y1, x2, y2;	//Two corners of the rectangluar area

public:
	AddNANDgate(ApplicationManager* pApp);
	virtual ~AddNANDgate(void);

	//Execute action (code depends on action type)
	virtual void Execute();
	virtual void Undo();
	virtual void Redo();

	
	
};


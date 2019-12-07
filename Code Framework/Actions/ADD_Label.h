#pragma once
#include "Action.h"
//#include "..\Components\Connections.h"

class ADD_Label :public Action
{private: 
	int Cx, Cy;	//Center point of the gate
	int x1, y1, x2, y2;	//Two corners of the rectangluar area
public:
	ADD_Label(ApplicationManager* pApp);
	virtual ~ADD_Label(void);

	//Execute action (code depends on action type)
	virtual void Execute();  // to get the first component and store it in  the comp1 only



	virtual void Undo();
	virtual void Redo();

};


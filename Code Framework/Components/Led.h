#ifndef _GATE_H
#define _GATE_H


#include "InputPin.h"
#include "OutputPin.h"
#include "Component.h"

class Led:public Component
{
protected:
	InputPin* m_InputputPin;	//Led has only 1 inputputPin

public:
	Led(GraphicsInfo* r_pGfxInfo, int r_FanOut);
	Led(GraphicsInfo* pGfxInfo);
	//virtual InputPin* getInput();
	//virtual OutputPin* getOutput();
	
	virtual void SaveComponent(int ID, fstream &fileToSave); //save function

	virtual GraphicsInfo* getGraphics();
	void Operate() ;	//Calculates the output according to the inputs
	void Draw(UI*, bool selected);
	bool selected(Point k);
};

#endif

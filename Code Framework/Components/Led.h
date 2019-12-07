#ifndef _GATE_H
#define _GATE_H


#include "InputPin.h"
#include "OutputPin.h"
#include "Component.h"

class Led:public Component
{
protected:
	InputPin m_InputputPin;	//Led has only 1 inputputPin
public:
	Led(GraphicsInfo* pGfxInfo);
	virtual InputPin* getInput();
	virtual OutputPin* getOutput();
	

};

#endif

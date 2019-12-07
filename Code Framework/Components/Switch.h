#ifndef _GATE_H
#define _GATE_H


#include "InputPin.h"
#include "OutputPin.h"
#include "Component.h"

class Switch:public Component
{
protected:
	OutputPin m_OutputPin;	//Switch has only 1 OutputPin
public:
	Switch(GraphicsInfo* pGfxInfo, int r_FanOut);
	
	virtual GraphicsInfo* getGraphics();

};

#endif

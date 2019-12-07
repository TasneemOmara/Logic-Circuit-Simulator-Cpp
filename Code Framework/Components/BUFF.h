#ifndef _GATE_H
#define _GATE_H


#include "InputPin.h"
#include "OutputPin.h"
#include "Component.h"

class BUFF:public Component
{
protected:
	InputPin m_InputputPin;	//BUFF has only 1 inputputPin
    OutputPin m_OutputPin;	//BUFF has only 1 OutputPin
public:
	BUFF(GraphicsInfo* pGfxInfo);
    BUFF(GraphicsInfo* pGfxInfo, int r_FanOut);
	
	virtual void SaveComponent(int ID, fstream &fileToSave); //save function
	
	virtual GraphicsInfo* getGraphics();
	virtual OutputPin* getOutput() ;
	virtual InputPin* getInput() ;


};

#endif
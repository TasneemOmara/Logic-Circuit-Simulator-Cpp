#ifndef _BUFFER_H
#define _BUFFER_H


#include "InputPin.h"
#include "OutputPin.h"
#include "Component.h"
#include "Gate.h"

class BUFF:public Gate
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
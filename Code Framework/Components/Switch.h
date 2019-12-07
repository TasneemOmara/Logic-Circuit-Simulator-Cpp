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

	virtual InputPin* getInput();
	virtual OutputPin* getOutput();
	
	virtual GraphicsInfo* getGraphics();
	virtual void Operate() ;	//Calculates the output according to the inputs
	virtual void Draw(UI*, bool selected) ;	//for each component to Draw itself






	virtual int GetOutPinStatus() ;	//returns status of outputpin if LED, return -1
	virtual int GetInputPinStatus(int n) ;	//returns status of Inputpin # n if SWITCH, return -1

	virtual void setInputPinStatus(int n, STATUS s) ;	//set status of Inputpin # n, to be used by connection class.

	virtual bool selected(Point k) ;


	virtual InputPin* getInput() ;
	virtual OutputPin* getOutput() ;

};

#endif

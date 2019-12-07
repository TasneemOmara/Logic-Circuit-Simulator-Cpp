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

	virtual void SaveComponent(int ID, fstream &fileToSave); //save function
	void Draw(UI*);
	GraphicsInfo* getGraphics();
	virtual void set_selected(bool val);




	virtual void Operate();	//Calculates the output of the AND gate

	virtual void Draw(UI*);	//Draws 2-input gate

	virtual int GetOutPinStatus();	//returns status of outputpin if LED, return -1

	virtual int GetInputPinStatus(int n);	//returns status of Inputpin # n if SWITCH, return -1

	virtual void setInputPinStatus(int n, STATUS s);	//set status of Inputpin # n, to be used by connection class.

	

	virtual GraphicsInfo* getGraphics();

};

#endif

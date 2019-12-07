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
	void Draw(UI*);
	bool selected(Point k);
virtual void set_selected(bool val);

virtual int GetOutPinStatus() { return 0; }	//returns status of outputpin if LED, return -1
virtual int GetInputPinStatus(int n) { return 0; }	//returns status of Inputpin # n if SWITCH, return -1

virtual void setInputPinStatus(int n, STATUS s) {}//set status of Inputpin # n, to be used by connection class.




};

#endif

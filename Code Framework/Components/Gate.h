#ifndef _GATE_H
#define _GATE_H

/*
  Class Gate
  -----------
  - Base class for all types of gates
  - Each gate has n inputs pins and one output pin
*/


#include "InputPin.h"
#include "OutputPin.h"
#include "Component.h"
#include <iostream>
#include <fstream>

using namespace std;

class Gate:public Component
{
protected:
	//
	InputPin* m_InputPins;	//Array of input pins of the Gate
	OutputPin m_OutputPin;	//The Gate output pin
	int m_Inputs;		//No. of input pins of that Gate.
public:
	Gate(GraphicsInfo* pGfxInfo, int r_Inputs, int r_FanOut);
	bool selected(Point k);

	virtual string getLabel();
	virtual void setLabel(string L);

	//inhertied Save/Load functions 
	virtual void SaveComponent(int ID, fstream &fileToSave) {};

	virtual GraphicsInfo* getGraphics();
	

	virtual InputPin* getInput(); 
	virtual OutputPin* getOutput();

	virtual void set_selected(bool val);

};

#endif

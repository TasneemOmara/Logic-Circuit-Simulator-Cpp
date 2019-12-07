#pragma once


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
	//BUFF(GraphicsInfo* pGfxInfo);
    BUFF(GraphicsInfo* pGfxInfo, int r_FanOut);
	
	virtual void SaveComponent(int ID, fstream &fileToSave); //save function
	
	virtual GraphicsInfo* getGraphics();
	 void Operate();	//Calculates the output of the AND gate
	 void Draw(UI*, bool selected);	//Draws 2-input gate

	// int GetOutPinStatus();	//returns status of outputpin if LED, return -1
	// int GetInputPinStatus(int n);	//returns status of Inputpin # n if SWITCH, return -1

	// void setInputPinStatus(int n, STATUS s);	//set status of Inputpin # n, to be used by connection class.

	 void SaveComponent(int ID, fstream& fileToSave); //save function

	 GraphicsInfo* getGraphics();

	//virtual OutputPin* getOutput() ;
	//virtual InputPin* getInput() ;



};
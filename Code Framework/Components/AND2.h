#ifndef _AND2_H
#define _AND2_H

/*
  Class AND2
  -----------
  represent the 2-input AND gate
*/

#include "Gate.h"
#include "../Defs.H"

class AND2:public Gate
{
public:
	AND2(GraphicsInfo *r_pGfxInfo, int r_FanOut);
	virtual void Operate();	//Calculates the output of the AND gate
	virtual void Draw(UI*);	//Draws 2-input gate

	virtual int GetOutPinStatus();	//returns status of outputpin if LED, return -1
	virtual int GetInputPinStatus(int n);	//returns status of Inputpin # n if SWITCH, return -1

	virtual void setInputPinStatus(int n, STATUS s);	//set status of Inputpin # n, to be used by connection class.

	virtual void SaveComponent(int ID, fstream &fileToSave);

	virtual GraphicsInfo* getGraphics();

};

#endif
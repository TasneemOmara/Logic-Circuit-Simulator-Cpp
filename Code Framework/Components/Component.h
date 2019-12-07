#ifndef _COMPONENT_H
#define _COMPONENT_H

#include "..\Defs.h"
#include "..\UI\UI.h"
#include <fstream>
#include "Inputpin.h"
#include "Outputpin.h"


//Base class for classes Gate, Switch, and LED.
class Component
{

protected:

	string m_Label;    
	
	bool is_selected=false;

	GraphicsInfo *m_pGfxInfo;	//The parameters required to draw a component
public:
	virtual bool selected(Point k) = 0;
	Component(GraphicsInfo *r_GfxInfo);
	Component();

	virtual void Operate() = 0;	//Calculates the output according to the inputs
	virtual void Draw(UI* , bool selected) = 0;	//for each component to Draw itself
	
	//virtual int GetOutPinStatus()=0;	//returns status of outputpin if LED, return -1
	//virtual int GetInputPinStatus(int n)=0;	//returns status of Inputpin # n if SWITCH, return -1

	//virtual void setInputPinStatus(int n, STATUS s)=0;	//set status of Inputpin # n, to be used by connection class.

	virtual void SaveComponent(int ID, fstream &fileToSave) = 0; //outputs the line defining the saved component 
	virtual void LoadComponent(int ID, fstream &fileToLoad) = 0; // Inputs the component in the compList

	//virtual InputPin* getInput() = 0;
	//virtual OutputPin* getOutput() = 0;
	
	virtual GraphicsInfo* getGraphics() =0;
	
	//virtual string getLabel() = 0;
	//virtual void setLabel() = 0;

	//Destructor must be virtual
	virtual ~Component();
};

#endif

#pragma once
#include "component.h"
#include "InputPin.h"
#include "OutputPin.h"

class Connection :	public Component
{
	//Component*	SrcCmpnt;	//Connection source component
	//Component*	DstCmpnt;	//Connection Destination component
	//int		DstPin;		//The Input pin to which this connection is linked
	OutputPin* SrcPin;	//The Source pin of this connection (an output pin of certain Component)
	InputPin* DstPin;	//The Destination pin of this connection (an input pin of certain Component)
public:
	//Connection(const GraphicsInfo &r_GfxInfo, Component *pS=NULL,Component *pD=NULL, int Pin=0);
	Connection ( GraphicsInfo *r_GfxInfo);

	virtual void Operate() ;	//Calculates the output according to the inputs
	virtual void Draw(UI*, bool selected);	//for each component to Draw itself


	virtual string getLabel();
	

	virtual void setLabel(string L);
	

	
	void setSourcePin(OutputPin *pSrcPin);
	void setDestPin(InputPin *pDstPin);
	OutputPin* getSourcePin();
	InputPin* getDestPin();


	virtual int GetOutPinStatus();	//returns status of outputpin if LED, return -1
	virtual int GetInputPinStatus(int n);	//returns status of Inputpin # n if SWITCH, return -1

	virtual void setInputPinStatus(int n, STATUS s);	//set status of Inputpin # n, to be used by connection class.

	virtual void SaveComponent(int ID, fstream &fileToSave) {}; //save function, it is empty for this stage only
	virtual GraphicsInfo* getGraphics();



	virtual void Operate() ;	//Calculates the output according to the inputs
	virtual bool selected(Point k) ;

	virtual void Draw(UI*, bool selected) ;	//for each component to Draw itself

	virtual InputPin* getInput() ;
	virtual OutputPin* getOutput() ;

};

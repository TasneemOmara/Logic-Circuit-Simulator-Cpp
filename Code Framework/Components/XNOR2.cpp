#include "XNOR2.h"

XNOR2::XNOR2(GraphicsInfo *r_pGfxInfo, int r_FanOut):Gate(r_pGfxInfo,2, r_FanOut)
{
}


void XNOR2::Operate()
{
	//caclulate the output status as the ANDing of the two input pins

	//Add you code here

    // we should select here the in puts and the outputs but i think it not required to add inputs in thr GUI and get the output 

}


// Function Draw
// Draws 2-input OR gate
void XNOR2::Draw(UI* pUI)
{
	//Call output class and pass gate drawing info to it.
	pUI->DrawXNOR2(*m_pGfxInfo);
}

//returns status of outputpin
int XNOR2::GetOutPinStatus()	
{
	return m_OutputPin.getStatus();
}


//returns status of Inputpin #n
int XNOR2::GetInputPinStatus(int n)	
{
	return m_InputPins[n-1].getStatus();	//n starts from 1 but array index starts from 0.
}

//Set status of an input pin on HIGH or LOW
void XNOR2::setInputPinStatus(int n, STATUS s)
{
	m_InputPins[n-1].setStatus(s);
}


GraphicsInfo* XNOR2::getGraphics()
{
	return m_pGfxInfo;
}
;
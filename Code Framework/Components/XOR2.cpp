#include "XOR2.h"

XOR2::XOR2(GraphicsInfo *r_pGfxInfo, int r_FanOut):Gate(r_pGfxInfo,2, r_FanOut)
{
}


void XOR2::Operate()
{
	//caclulate the output status as the ANDing of the two input pins

	//Add you code here

    // we should select here the in puts and the outputs but i think it not required to add inputs in thr GUI and get the output 

}


// Function Draw
// Draws 2-input OR gate
void XOR2::Draw(UI* pUI)
{
	//Call output class and pass gate drawing info to it.
	pUI->DrawXOR2(*m_pGfxInfo, is_selected);
}

//returns status of outputpin
int XOR2::GetOutPinStatus()	
{
	return m_OutputPin.getStatus();
}


//returns status of Inputpin #n
int XOR2::GetInputPinStatus(int n)	
{
	return m_InputPins[n-1].getStatus();	//n starts from 1 but array index starts from 0.
}

//Set status of an input pin on HIGH or LOW
void XOR2::setInputPinStatus(int n, STATUS s)
{
	m_InputPins[n-1].setStatus(s);
}



void XOR2::SaveComponent(int ID, fstream &fileToSave)
{
	fileToSave << "XOR2" << "	" << ID << "	" << m_Label << "		" m_pGfxInfo->PointsList[0].x << "		"
		<< m_pGfxInfo->PointsList[0].y << "		" << m_pGfxInfo->PointsList[1].x << "		 " << m_pGfxInfo->PointsList[1].y
		<< endl;
}

GraphicsInfo* XOR2::getGraphics()
{
	return m_pGfxInfo;
}

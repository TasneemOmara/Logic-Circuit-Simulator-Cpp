#include "Switch.h"


//r_FanOut: Fan out of the Switch's output pin
Switch::Switch(GraphicsInfo* pGfxInfo,int r_FanOut):Component(pGfxInfo), m_OutputPin(r_FanOut)
{

}

void Switch::SaveComponent(int ID, fstream &fileToSave)
{
	fileToSave << "Switch" << "	" << ID << "	" << m_Label << "		" << m_pGfxInfo->PointsList[0].x << "		"
		<< m_pGfxInfo->PointsList[0].y << "		" << m_pGfxInfo->PointsList[1].x << "		 " << m_pGfxInfo->PointsList[1].y
		<< endl;
}

GraphicsInfo* Switch::getGraphics()
{
	return m_pGfxInfo;
}


void Switch::Draw(UI* pUI)
{
	//Call output class and pass gate drawing info to it.
	pUI->DrawSwitch(*m_pGfxInfo, is_selected);
}

void set_selected(bool val)
{
	is_selected = val;
}

 //InputPin* Switch::getInput() {
	//return nullptr;
//}

 //OutputPin* Switch::getOutput() {

//}


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

void Switch::set_selected(bool val)
{
	is_selected = val;
}
bool Switch::selected(Point k) {
	int x_min = m_pGfxInfo->PointsList[0].x;
	int x_max = m_pGfxInfo->PointsList[1].x;
	int y_min = m_pGfxInfo->PointsList[0].y;
	int y_max = m_pGfxInfo->PointsList[1].y;
	if (k.x > x_min && k.x < x_max && k.y>y_min && k.y < y_max) {
		is_selected = true;
		return true;
	}
	else
	{
		is_selected = false;
		return false;
	}
}
 //InputPin* Switch::getInput() {
	//return nullptr;
//}

 //OutputPin* Switch::getOutput() {

//}


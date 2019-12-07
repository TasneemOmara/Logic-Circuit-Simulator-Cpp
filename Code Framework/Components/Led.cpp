#include "Led.h"


//r_FanOut: Fan out of the Switch's output pin
Led::Led(GraphicsInfo* pGfxInfo):Component(pGfxInfo)
{
	InputPin* m_InputputPin = new InputPin;
    m_InputputPin->setComponent(this);

}


void Led::SaveComponent(int ID, fstream &fileToSave)
{
	fileToSave << "LED" << "	" << ID << "	" << m_Label << "		" << m_pGfxInfo->PointsList[0].x << "		"
		<< m_pGfxInfo->PointsList[0].y << "		" << m_pGfxInfo->PointsList[1].x << "		 " << m_pGfxInfo->PointsList[1].y
		<< endl;
}
GraphicsInfo* Led::getGraphics()
{
	return m_pGfxInfo;
}
void  Led::Operate() {

}	//Calculates the output according to the inputs

void Led::Draw(UI*pUI) {
	pUI->DrawLED(*m_pGfxInfo, is_selected);


}
bool Led::selected(Point k) {
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

 void Led::set_selected(bool val)
{
	is_selected = val;
}


//InputPin* Led :: getInput()
//{
	//return m_InputputPin;
//}

//OutputPin* getOutput() {
	//return nullptr;}


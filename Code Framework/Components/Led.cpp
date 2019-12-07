#include "Led.h"


//r_FanOut: Fan out of the Switch's output pin
Led::Led(GraphicsInfo* pGfxInfo):Component(pGfxInfo)
{
	InputPin* m_InputputPin = new InputPin;
    m_InputputPin->setComponent(this);
}


void Led::SaveComponent(int ID, fstream &fileToSave)
{
	fileToSave << "Led " << "	" << ID << m_Label << "		" << "( " << m_pGfxInfo->PointsList[0].x << " , "
		<< m_pGfxInfo->PointsList[0].y << " ) " << "	" << "( " << m_pGfxInfo->PointsList[1].x << " , " << m_pGfxInfo->PointsList[1].y
		<< " )" << endl;
}
GraphicsInfo* Led::getGraphics()
{
	return m_pGfxInfo;
}
InputPin* Led :: getInput()
{
	return m_InputputPin;
}

OutputPin* getOutput() {
	return nullptr;}


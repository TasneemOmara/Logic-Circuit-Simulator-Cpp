#include "BUFF.h"



BUFF::BUFF(GraphicsInfo* pGfxInfo) :Component(pGfxInfo)
{
	InputPin* m_InputPin = new InputPin;
	m_InputPin->setComponent(this);
}

BUFF::BUFF(GraphicsInfo* pGfxInfo,int r_FanOut):Component(pGfxInfo), m_OutputPin(r_FanOut)
{

}


void BUFF::SaveComponent(int ID, fstream &fileToSave)
{
	fileToSave << "Buffer " << "	" << ID << m_Label << "		" << "( " << m_pGfxInfo->PointsList[0].x << " , "
		<< m_pGfxInfo->PointsList[0].y << " ) " << "	" << "( " << m_pGfxInfo->PointsList[1].x << " , " << m_pGfxInfo->PointsList[1].y
		<< " )" << endl;
}

GraphicsInfo* BUFF::getGraphics()
{
	return m_pGfxInfo;
}

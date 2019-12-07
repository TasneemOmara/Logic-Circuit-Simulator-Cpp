#include "BUFF.h"



BUFF::BUFF(GraphicsInfo* pGfxInfo):Component(pGfxInfo)
{
	InputPin* m_InputputPin = new InputPin;
    m_InputputPin->setComponent(this);
}

BUFF::BUFF(GraphicsInfo* pGfxInfo,int r_FanOut):Component(pGfxInfo), m_OutputPin(r_FanOut)
{

}

GraphicsInfo* BUFF::getGraphics()
{
	return m_pGfxInfo;
}
;
#include "Switch.h"


//r_FanOut: Fan out of the Switch's output pin
Switch::Switch(GraphicsInfo* pGfxInfo,int r_FanOut):Component(pGfxInfo), m_OutputPin(r_FanOut)
{

}

GraphicsInfo* Switch::getGraphics()
{
	return m_pGfxInfo;
}
;
virtual InputPin* Switch::getInput() {
	return nullptr;
}

virtual OutputPin* Switch::getOutput() {

}

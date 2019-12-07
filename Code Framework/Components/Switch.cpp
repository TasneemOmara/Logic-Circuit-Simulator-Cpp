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

void Switch::Draw(UI* pUI, bool selected)
{
	//Call output class and pass gate drawing info to it.
	pUI->DrawSwitch(*m_pGfxInfo, selected);
};

 InputPin* Switch::getInput() {
	//return nullptr;
}

 OutputPin* Switch::getOutput() {

}

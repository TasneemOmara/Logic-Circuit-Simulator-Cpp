#include "Led.h"


//r_FanOut: Fan out of the Switch's output pin
Led::Led(GraphicsInfo* pGfxInfo):Component(pGfxInfo)
{
	InputPin* m_InputputPin = new InputPin;
    m_InputputPin->setComponent(this);
}

InputPin* getInput()
{
	return m_InputputPin;
}

OutputPin* getOutput() {
	return nullptr}
;
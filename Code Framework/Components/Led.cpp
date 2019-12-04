#include "Led.h"


//r_FanOut: Fan out of the Switch's output pin
Led::Led(GraphicsInfo* pGfxInfo):Component(pGfxInfo)
{
    m_InputPins = new InputPin;
    m_InputPins.setComponent(this);
}
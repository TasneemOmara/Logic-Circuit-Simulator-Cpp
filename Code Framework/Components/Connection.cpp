#include "Connection.h"

//::Connection(OutputPin *pSrcPin,InputPin *pDstPin):Component(r_GfxInfo)	
//Connection::Connection(const GraphicsInfo& r_GfxInfo, Component* pS = NULL, Component* pD = NULL, int Pin = 0)
Connection::Connection( GraphicsInfo* r_GfxInfo)
{
	//SrcPin = pSrcPin;
	//DstPin = pDstPin;
}
void Connection::setSourcePin(OutputPin *pSrcPin)
{	SrcPin = pSrcPin;	}

OutputPin* Connection::getSourcePin()
{	return SrcPin;	}


void Connection::setDestPin(InputPin *pDstPin)
{	DstPin = pDstPin;	}

InputPin* Connection::getDestPin()
{	return DstPin;	}


void Connection::Operate()
{
	//Status of connection destination pin = status of connection source pin
	DstPin->setStatus((STATUS)SrcPin->getStatus());
}

void Connection::Draw(UI* pUI, bool selected)
{
	pUI->DrawConnection(*m_pGfxInfo);
}

int Connection::GetOutPinStatus()	//returns status of outputpin if LED, return -1
{
	return DstPin->getStatus();
}


int Connection::GetInputPinStatus(int n)	//returns status of Inputpin # n if SWITCH, return -1
{
	return SrcPin->getStatus();	//n is ignored as connection has only one input pin (src pin)	
}

void Connection::setInputPinStatus(int n, STATUS s)
{
	SrcPin->setStatus(s);
}


GraphicsInfo* Connection::getGraphics()
{
	return m_pGfxInfo;
}

void Connection::set_selected(bool val)
{
	is_selected = val;
}
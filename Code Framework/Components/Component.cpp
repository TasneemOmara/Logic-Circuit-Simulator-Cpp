#include "Component.h"

Component::Component(GraphicsInfo *r_GfxInfo)
{
	m_pGfxInfo = r_GfxInfo;	
	m_Label = "Default"; 
	is_selected = false;
}

Component::Component()


{}

Component::~Component()
{}




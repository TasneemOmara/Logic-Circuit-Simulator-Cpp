#pragma once
#include "Action.h"
#include "../Components/Component.h"
class select1: public Action
{
public:
	select1();
	bool select(ApplicationManager *App, int &index);
	
	~select1();
};


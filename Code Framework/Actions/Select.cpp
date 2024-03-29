#include "Select.h"
#include "..\ApplicationManager.h"
#include "..\UI\UI.h"


Select::Select(ApplicationManager *pApp) : Action(pApp)
{
    index=-1;
}


void Select::Execute(){

    bool is_selected;
	int CompCount;
	Component* CompList[200];

    UI* pUI = pManager->GetUI();
    pManager->GetCompList(CompCount, CompList);
   
    for (int i = 0; i < CompCount; i++)
    {
		is_selected = CompList[i]->selected(pUI->getlast_point_clicked());
        if (is_selected)
        {
            index = i;
			
            break;
        }        
    }
}


int Select::getIndex(){
    return index;
}

void Select::Undo()
{}

void Select::Redo()
{}

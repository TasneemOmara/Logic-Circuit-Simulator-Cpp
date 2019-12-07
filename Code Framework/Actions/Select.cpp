#include "Select.h"
#include "..\ApplicationManager.h"
#include "..\UI\UI.h"


Select::Select(ApplicationManager *App) : Action(App)
{
    index=-1;
}


void Select::Execute(){
    int count=0;
    Component *CompList;
    bool selected;

    UI* pUI = pManager->GetUI();
    pManager->GetCompList(count, CompList);
    
    for (int i = 0; i < count; i++)
    {
        selected = (CompList+i)->selected(pUI->getlast_point_clicked());
        if (selected)
        {
            index = i;
            break;
        }        
    }
	CompList[index].Draw(pUI, selected);
    
}


int Select::getIndex(){
    return index;
}

////////////////////////////////////////////////////////////////////////////////////
//To undo this action (code depends on action type)
void Select::Undo()
{};

//To redo this action (code depends on action type)
void Select::Redo()
{};
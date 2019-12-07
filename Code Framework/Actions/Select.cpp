#include "Select.h"
#include "..\ApplicationManager.h"
#include "..\UI\UI.h"


Select::Select(ApplicationManager *pApp) : Action(pApp)
{
    index=-1;
}


void Select::Execute(){
    int count=0;
    Component* CompList;
    bool is_selected;

    UI* pUI = pManager->GetUI();
    pManager->GetCompList(count, CompList);
    
    for (int i = 0; i < count; i++)
    {
        is_selected = (CompList+i)->selected(pUI->getlast_point_clicked());
        if (is_selected)
        {
            index = i;
            break;
        }        
    }
    CompList[index]->Draw(pUI,is_selected )
    
}


int Select::getIndex(){
    return index;
}
void Select::Undo()
{}

void Select::Redo()
{}

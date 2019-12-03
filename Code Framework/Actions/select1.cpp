#include "select1.h"
#include "..\ApplicationManager.h"


select1::select1()
{
}


bool GetIndexSelected(ApplicationManager *App, int &index){
    int count=0;
    Component* CompList;
    bool selected;
    App->GetCompList(count, CompList);
    for (int i = 0; i < count; i++)
    {
        selected = (CompList+i)->selected();
        if (selected)
        {
            index = i;
            break;
        }        
    }
    return false;
    
}
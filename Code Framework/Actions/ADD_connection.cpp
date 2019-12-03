#include"ADD_connection.h"
#include "..\ApplicationManager.h"
ADD_connection::ADD_connection(ApplicationManager* pApp) :Action(pApp) {
}
ADD_connection::~ADD_connection(void) {
}


void ADD_connection::Execute(){
//get selected
int selected_index1=-1;
int selected_index2=-1;

//Get a Pointer to the user Interfaces
UI* pUI = pManager->GetUI();

//Print Action Message
Component* Comp1 = NULL;
Component* Comp2 = NULL;
Component* temp_compList = NULL;
int count_number = 0;

pUI->PrintMsg("Select the first Component");

Action* pAct = new Select(pManeger);
pAct->Execute();
selected_index1 = Select->getIndex();

while (selected_index1 == -1)
{
    pUI->PrintMsg("Please select again the first component");
    pAct->Execute();
    selected_index1 = Select->getIndex();
}

pUI->PrintMsg("Select the second Component");

Action* pAct = new Select(pManeger);
pAct->Execute();
selected_index2 = Select->getIndex();

while (selected_index2 == -1)
{
    pUI->PrintMsg("Please select again the first component");
    pAct->Execute();
    selected_index2 = Select->getIndex();
}

pManager->GetCompList(count_number, temp_compList);

Comp1 = (temp_compList+selected_index1);
Comp2 = (temp_compList+selected_index2);



//Get Center point of the Gate
pUI->GetPointClicked(Cx, Cy);

//Clear Status Bar
pUI->ClearStatusBar();
//Calculate the rectangle Corners
int gateWidth = pUI->getGateWidth();
int gateHeight = pUI->getGateHeight();

GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the connection

pGInfo->PointsList[0].x = Cx - gateWidth / 2;
pGInfo->PointsList[0].y = Cy - gateHeight / 2;
pGInfo->PointsList[1].x = Cx + gateWidth / 2;
pGInfo->PointsList[1].y = Cy + gateHeight / 2;
connection* pA = new connection(pGInfo, connection_FANOUT);//***how connection is wriiten depends on how u made it guys
pManager->AddComponent(pA);
}

void ADD_connection::Undo()
{}

void ADD_connection::Redo()
{}


#include"ADD_Label.h"
#include "..\ApplicationManager.h"




ADD_Label::ADD_Label(ApplicationManager* pApp) :Action(pApp) {
}
ADD_Label::~ADD_Label(void) {
}

//Get a Pointer to the user Interfaces
UI* pUI = pManager->GetUI();

//Print Action Message
pUI->PrintMsg(" Click to select the gate where u want add your label");

//Get Center point of the Gate
pUI->GetPointClicked(Cx, Cy);

//Clear Status Bar
pUI->ClearStatusBar();
//Calculate the rectangle Corners
int gateWidth = pUI->getGateWidth();
int gateHeight = pUI->getGateHeight();



ADD_Label* pA = new ADD_Label(pGInfo, _FANOUT);//***how label is wriiten depends on how u made it guys


pManager->AddComponent(pA);
}

void ADD_BUFF::Undo()
{}

void ADD_BUFF::Redo()
{}


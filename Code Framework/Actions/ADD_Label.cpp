#include"ADD_Label.h"
#include "..\ApplicationManager.h"




ADD_Label::ADD_Label(ApplicationManager* pApp) :Action(pApp) {
}
ADD_Label::~ADD_Label(void) {
}

void ADD_INV::Execute(){
    //Get a Pointer to the user Interfaces
    UI* pUI = pManager->GetUI();

    //Print Action Message
    pUI->PrintMsg("1-Input inverter Gate: Click to add the gate");

}

void ADD_BUFF::Undo()
{}

void ADD_BUFF::Redo()
{}


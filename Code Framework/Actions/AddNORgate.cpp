#include "AddNORgate.h"
#include "..\ApplicationManager.h"


AddNORgate::AddNORgate(ApplicationManager* pApp) :Action(pApp)
{
}


AddNORgate::~AddNORgate(void)
{
}

void AddNORgate::Execute(){
    //Get a Pointer to the user Interfaces
    UI* pUI = pManager->GetUI();

    //Print Action Message
    pUI->PrintMsg("2-Input NOR Gate: Click to add the gate");

    //Get Center point of the Gate
    pUI->GetPointClicked(Cx, Cy);

    //Clear Status Bar
    pUI->ClearStatusBar();
    //Calculate the rectangle Corners
    int gateWidth = pUI->getGateWidth();
    int gateHeight = pUI->getGateHeight();

    GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the NOR gate

    pGInfo->PointsList[0].x = Cx - gateWidth / 2;
    pGInfo->PointsList[0].y = Cy - gateHeight / 2;
    pGInfo->PointsList[1].x = Cx + gateWidth / 2;
    pGInfo->PointsList[1].y = Cy + gateHeight / 2;
    NOR2* pA = new NOR2(pGInfo, NOR2_FANOUT);
    pManager->AddComponent(pA);
}

void AddNORgate::Undo()
{}

void AddNORgate::Redo()
{}

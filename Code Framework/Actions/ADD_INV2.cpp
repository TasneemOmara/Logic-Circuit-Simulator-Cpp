#include "ADD_INV2.h"
#include "..\ApplicationManager.h"



ADD_INV2::ADD_INV2(ApplicationManager* pApp) :Action(pApp)
{
}


ADD_INV2::~ADD_INV2 (void)
{
}

void ADD_INV2::Execute(){
    //Get a Pointer to the user Interfaces
    UI* pUI = pManager->GetUI();

    //Print Action Message
    pUI->PrintMsg("Input inverter Gate: Click to add the gate");

    //Get Center point of the Gate
    pUI->GetPointClicked(Cx, Cy);

    //Clear Status Bar
    pUI->ClearStatusBar();
    //Calculate the rectangle Corners
    int gateWidth = pUI->getGateWidth();
    int gateHeight = pUI->getGateHeight();

    GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the ADD_INV gate

    pGInfo->PointsList[0].x = Cx - gateWidth / 2;
    pGInfo->PointsList[0].y = Cy - gateHeight / 2;
    pGInfo->PointsList[1].x = Cx + gateWidth / 2;
    pGInfo->PointsList[1].y = Cy + gateHeight / 2;
    INV2* pA = new INV2(pGInfo, INV2_FANOUT);//***INV is wriiten depends on how u made it guys
    pManager->AddComponent(pA);
}

void ADD_INV2::Undo()
{}

void ADD_INV2::Redo()
{}


#include "ADD_switch.h"
#include "..\ApplicationManager.h"

ADD_switch::ADD_switch(ApplicationManager* pApp) :Action(pApp)
{
}


ADD_switch::~ADD_switch(void)
{
}

void ADD_switch::Execute(){
    //Get a Pointer to the user Interfaces
    UI* pUI = pManager->GetUI();

    //Print Action Message
    pUI->PrintMsg("switch: Click to add the switch");

    //Get Center point of the switch
    pUI->GetPointClicked(Cx, Cy);

    //Clear Status Bar
    pUI->ClearStatusBar();
    //Calculate the rectangle Corners
    int gateWidth = pUI->getGateWidth();
    int gateHeight = pUI->getGateHeight();

    GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the switch

    pGInfo->PointsList[0].x = Cx - gateWidth / 2;
    pGInfo->PointsList[0].y = Cy - gateHeight / 2;
    pGInfo->PointsList[1].x = Cx + gateWidth / 2;
    pGInfo->PointsList[1].y = Cy + gateHeight / 2;
    Switch* pA = new Switch(pGInfo, Switch_FANOUT);
    pManager->AddComponent(pA);
}

void ADD_switch::Undo()
{}

void  ADD_switch::Redo()
{}


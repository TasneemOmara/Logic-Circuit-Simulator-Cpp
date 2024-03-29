#include "ADD_LED2.h"
#include "..\ApplicationManager.h"



ADD_LED2::ADD_LED2(ApplicationManager* pApp) :Action(pApp)
{
}


ADD_LED2::~ADD_LED2( void)
{
}

void ADD_LED2::Execute(){
    //Get a Pointer to the user Interfaces
    UI* pUI = pManager->GetUI();

    //Print Action Message
    pUI->PrintMsg("LED: Click to add the LED");

    //Get Center point of the LED
    pUI->GetPointClicked(Cx, Cy);

    //Clear Status Bar
    pUI->ClearStatusBar();
    //Calculate the rectangle Corners
    int gateWidth = pUI->getGateWidth();
    int gateHeight = pUI->getGateHeight();

    GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the LED

    pGInfo->PointsList[0].x = Cx - gateWidth / 2;
    pGInfo->PointsList[0].y = Cy - gateHeight / 2;
    pGInfo->PointsList[1].x = Cx + gateWidth / 2;
    pGInfo->PointsList[1].y = Cy + gateHeight / 2;
    Led* pA = new Led(pGInfo, LED_FANOUT);
}

void ADD_LED2::Undo()
{}

void ADD_LED2::Redo()
{}

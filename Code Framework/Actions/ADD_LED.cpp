#include "ADD_LED.h"
#include "..\ApplicationManager.h"



ADD_LED::ADD_LED(ApplicationManager* pApp) :Action(pApp)
{
}


ADD_LED::~ADD_LED( void)
{
}

void ADD_LED::Execute(){
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
LED* pA = new LED(pGInfo, LED_FANOUT);//***how LED is wriiten depends on how u made it guys
pManager->AddComponent(pA);
}

void ADD_LED::Undo()
{}

void ADD_LED::Redo()
{}

#include "AddXORgate.h"
#include "..\ApplicationManager.h"


AddXORgate::AddXORgate (ApplicationManager* pApp) :Action(pApp)
{
}


AddXORgate::~AddXORgate(void)
{
}

void AddXORgate::Execute() {
//Get a Pointer to the user Interfaces
UI* pUI = pManager->GetUI();

//Print Action Message
pUI->PrintMsg("2-Input XNOR Gate: Click to add the gate");

//Get Center point of the Gate
pUI->GetPointClicked(Cx, Cy);

//Clear Status Bar
pUI->ClearStatusBar();
//Calculate the rectangle Corners
int gateWidth = pUI->getGateWidth();
int gateHeight = pUI->getGateHeight();

GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the XNOR gate

pGInfo->PointsList[0].x = Cx - gateWidth / 2;
pGInfo->PointsList[0].y = Cy - gateHeight / 2;
pGInfo->PointsList[1].x = Cx + gateWidth / 2;
pGInfo->PointsList[1].y = Cy + gateHeight / 2;
XOR2* pA = new XOR2(pGInfo, XOR2_FANOUT);//
pManager->AddComponent(pA);
}

void AddXORgate::Undo()
{}

void AddXORgate::Redo()
{}

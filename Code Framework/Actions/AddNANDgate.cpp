#include "AddNANDgate.h"
#include "..\ApplicationManager.h"



AddNANDgate::AddNANDgate(ApplicationManager* pApp) :Action(pApp)
{
}


AddNANDgate::~AddNANDgate(void)
{
}
//Get a Pointer to the user Interfaces
UI* pUI = pManager->GetUI();

//Print Action Message
pUI->PrintMsg("2-Input NAND Gate: Click to add the gate");

//Get Center point of the Gate
pUI->GetPointClicked(Cx, Cy);

//Clear Status Bar
pUI->ClearStatusBar();
//Calculate the rectangle Corners
int gateWidth = pUI->getGateWidth();
int gateHeight = pUI->getGateHeight();

GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the NAND gate

pGInfo->PointsList[0].x = Cx - gateWidth / 2;
pGInfo->PointsList[0].y = Cy - gateHeight / 2;
pGInfo->PointsList[1].x = Cx + gateWidth / 2;
pGInfo->PointsList[1].y = Cy + gateHeight / 2;
NAND* pA = new NAND(pGInfo, NAND_FANOUT);//***how NAND is wriiten depends on how u made it guys
pManager->AddComponent(pA);
}

void AddNANDgate::Undo()
{}

void AddNANDgate::Redo()
{}


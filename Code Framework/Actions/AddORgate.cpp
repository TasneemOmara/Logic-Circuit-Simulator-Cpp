#include "AddORgate.h"
#include "..\ApplicationManager.h"


AddORgate::AddORgate(ApplicationManager* pApp) :Action(pApp)
{
}


AddORgate::~AddORgate(void)
{
}
void AddORgate::Execute()
{
	//Get a Pointer to the user Interfaces
	UI* pUI = pManager->GetUI();

	//Print Action Message
	pUI->PrintMsg("2-Input OR Gate: Click to add the gate");

	//Get Center point of the Gate
	pUI->GetPointClicked(Cx, Cy);

	//Clear Status Bar
	pUI->ClearStatusBar();
	//Calculate the rectangle Corners
	int gateWidth = pUI->getGateWidth();
	int gateHeight = pUI->getGateHeight();

	GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the OR gate

	pGInfo->PointsList[0].x = Cx - gateWidth / 2;
	pGInfo->PointsList[0].y = Cy - gateHeight / 2;
	pGInfo->PointsList[1].x = Cx + gateWidth / 2;
	pGInfo->PointsList[1].y = Cy + gateHeight / 2;
	OR2* pA = new OR2(pGInfo, OR2_FANOUT);//***how OR is wriiten depends on how u made it guys
	pManager->AddComponent(pA); 
}

void AddORgate::Undo()
{}

void AddORgate::Redo()
{}


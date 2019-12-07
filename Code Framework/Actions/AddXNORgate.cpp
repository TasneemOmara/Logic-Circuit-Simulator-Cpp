#include "AddXNORgate.h"
#include "..\ApplicationManager.h"


AddXNORgate::AddXNORgate(ApplicationManager* pApp) :Action(pApp)
{
}


AddXNORgate::~AddXNORgate(void)
{
}

void AddXNORgate::Execute() {
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
XNOR2* pA = new XNOR2(pGInfo, XNOR2_FANOUT);//***how XNOR is wriiten depends on how u made it guys
pManager->AddComponent(pA);
}


void XNOR2::Draw(UI* pUI, bool selected)
{
	//Call output class and pass gate drawing info to it.
	pUI->DrawXNOR2(*m_pGfxInfo, selected);
}


void AddXNORgate::Undo()
{}

void AddXNORgate::Redo()
{}

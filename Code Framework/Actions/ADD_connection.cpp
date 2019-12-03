#include"ADD_connection.h"
#include "..\ApplicationManager.h"
ADD_connection::ADD_connection(ApplicationManager* pApp) :Action(pApp) {
}
ADD_connection::~ADD_connection(void) {
}
//Get a Pointer to the user Interfaces
UI* pUI = pManager->GetUI();

//Print Action Message
pUI->PrintMsg("2-Input AND Gate: Click to add the connection");

//Get Center point of the Gate
pUI->GetPointClicked(Cx, Cy);

//Clear Status Bar
pUI->ClearStatusBar();
//Calculate the rectangle Corners
int gateWidth = pUI->getGateWidth();
int gateHeight = pUI->getGateHeight();

GraphicsInfo* pGInfo = new GraphicsInfo(2); //Gfx info to be used to construct the connection

pGInfo->PointsList[0].x = Cx - gateWidth / 2;
pGInfo->PointsList[0].y = Cy - gateHeight / 2;
pGInfo->PointsList[1].x = Cx + gateWidth / 2;
pGInfo->PointsList[1].y = Cy + gateHeight / 2;
connection* pA = new connection(pGInfo, connection_FANOUT);//***how connection is wriiten depends on how u made it guys
pManager->AddComponent(pA);
}

void ADD_connection::Undo()
{}

void ADD_connection::Redo()
{}


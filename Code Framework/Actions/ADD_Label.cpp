#include"ADD_Label.h"
#include "..\ApplicationManager.h"




ADD_Label::ADD_Label(ApplicationManager* pApp) :Action(pApp) {
}
ADD_Label::~ADD_Label(void) {
}



void ADD_Label::Execute(){
    int count=0;
    Component* CompList;
    //bool selected;

    UI* pUI = pManager->GetUI();
    pManager->GetCompList(count, CompList);
    pUI->PrintMsg(" Click to select the gate where u want add your label");

   //Get Center point of the Gate
  pUI->GetPointClicked(Cx, Cy);

  pUI->getlast_point_clicked();

  int x =select::getIndex()
    



    GraphicsInfo* pointer = CompList[x]-> r_pGfxInfo;
    Cx1 = pointer -> PointsList[0].x;
    Cy1 = pointer -> PointsList[0].y;
    Cx2 = pointer -> PointsList[1].x;
    Cy2 = pointer -> PointsList[1].y;

    int width = pUI->getGateWidth ();
    int height = pUI->getGateHeight ();
   
    label_x = Cx1;
    label_y = Cy1;

    
  //  pGInfo->PointsList[0].x ;
  //  pGInfo->PointsList[0].y ;
  //  pGInfo->PointsList[1].x ;
  //  pGInfo->PointsList[1].y ;
    
}
//Get a Pointer to the user Interfaces
//UI* pUI = pManager->GetUI();

//Print Action Message




//Clear Status Bar
pUI->ClearStatusBar();
//Calculate the rectangle Corners
int gateWidth = pUI->getGateWidth();
int gateHeight = pUI->getGateHeight();



ADD_Label* pA = new ADD_Label(pGInfo, _FANOUT);//***how label is wriiten depends on how u made it guys


pManager->AddComponent(pA);


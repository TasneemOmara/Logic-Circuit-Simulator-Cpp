#include"ADD_Label.h"
#include "..\ApplicationManager.h"

#include "Select.h"




ADD_Label::ADD_Label(ApplicationManager* pApp) :Action(pApp) {
}
ADD_Label::~ADD_Label(void) {
}



void ADD_Label::Execute(){
    int count=0;
    Component** CompList;
    //bool selected;

    UI* pUI = pManager->GetUI();
    pManager->GetCompList(count, CompList);
    pUI->PrintMsg(" Click to select the gate where u want add your label");

   //Get Center point of the Gate
    pUI->GetPointClicked(Cx, Cy);

    pUI->getlast_point_clicked();
  
    Select *pselect ;

	int x = pselect-> getIndex();
    

    GraphicsInfo* pointer =CompList[x]-> getGraphics();
	int Cx1, Cy1, Cx2, Cy2;
    Cx1 = pointer -> PointsList[0].x;
    Cy1 = pointer -> PointsList[0].y;
    Cx2 = pointer -> PointsList[1].x;
    Cy2 = pointer -> PointsList[1].y;

    int width = pUI->getGateWidth ();
    int height = pUI->getGateHeight ();
   
   int label_x = Cx1;
   int label_y = Cy1 + 2;

   //Clear Status Bar
   pUI->ClearStatusBar();

   //Request the required label from the user 
   pUI->PrintMsg("Please Enter the label you want here");

   //Get the string the user inputs u=in the status bar
   string Label = pUI->GetSrting();

   //Print the string into the desired location
   pUI->PrintMsg2(Label, label_x, label_y);



  //  pGInfo->PointsList[0].x ;
  //  pGInfo->PointsList[0].y ;
  //  pGInfo->PointsList[1].x ;
  //  pGInfo->PointsList[1].y ;
    
}
//Get a Pointer to the user Interfaces
//UI* pUI = pManager->GetUI();

//Print Action Message









//ADD_Label* pA = new ADD_Label(pGInfo, _FANOUT);//***how label is wriiten depends on how u made it guys


//pManager->AddComponent(pA);


#include"ADD_connection.h"
#include "..\ApplicationManager.h"
ADD_connection::ADD_connection(ApplicationManager* pApp) :Action(pApp) {
}

ADD_connection::~ADD_connection(void){

}

void ADD_connection::Execute(){
  /*  //get selected
    int selected_index1=-1;
    int selected_index2=-1;

    //Get a Pointer to the user Interfaces
    UI* pUI = pManager->GetUI();

    //Print Action Message
    Component* Comp1 = NULL;
    Component* Comp2 = NULL;

    Component* temp_compList = NULL;
    int count_number = 0;

    pUI->PrintMsg("Select the first Component");

    Select* pAct = new Select(pManeger);

    pAct->Execute();

    selected_index1 = pAct->getIndex();

    while (selected_index1 == -1)
    {
        pUI->PrintMsg("Please select again the first component");
        pAct->Execute();
        selected_index1 = Select->getIndex();
    }

    pUI->PrintMsg("Select the second Component");

    Select* pAct = new Select(pManeger);
    pAct->Execute();
    selected_index2 = Select->getIndex();

    while (selected_index2 == -1)
    {
        pUI->PrintMsg("Please select again the first component");
        pAct->Execute();
        selected_index2 = Select->getIndex();
    }

    pManager->GetCompList(count_number, temp_compList);

    Comp1 = (temp_compList+selected_index1);
    Comp2 = (temp_compList+selected_index2);

	Connection connect(Comp1->get)
	*/


	/////// Simple implementation (draw a line between two points)

	//Get a Pointer to the user Interfaces
	UI* pUI = pManager->GetUI();

	//Print Action Message
	pUI->PrintMsg("Create a connection between two points: Click the first point");

	//Get Center point of the Gate
	pUI->GetPointClicked(cx1, cy1);

	//Clear Status Bar
	pUI->ClearStatusBar();

	//Print Action Message
	pUI->PrintMsg("Create a connection between two points: Click the second point");

	pUI->GetPointClicked(cx2, cy2);

	//Clear Status Bar
	pUI->ClearStatusBar();

	GraphicsInfo* pGInfo = new GraphicsInfo(2);
	pGInfo->PointsList[0].x = cx1;
	pGInfo->PointsList[0].y = cy1;
	pGInfo->PointsList[1].x = cx2;
	pGInfo->PointsList[1].y = cy2;

	Connection* pA = new Connection(pGInfo);

	pManager->AddComponent(pA);


}

void ADD_connection::Undo()
{}

void ADD_connection::Redo()
{}


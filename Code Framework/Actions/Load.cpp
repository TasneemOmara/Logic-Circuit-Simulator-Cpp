#include "Load.h"
#include "..\ApplicationManager.h"


Save::Load(ApplicationManager *pApp) : Action(pApp) {
}

Save::~Load(void) {

}

void Load::Execute()
{
	UI* pUI = pManager->GetUI();

	fstream fileToLoad;
	fileToLoad.open("Circuit.txt", ios::in);

	if (fileToLoad.is_open())
	{
		string LineToLoad = "";    //line to store every component 
		getline(fileToLoad, LineToLoad); //getting the first line from the file
		CompCount = stoi(LineToLoad);   //converting the string of the first line into integer

		for (size_t i = 0; i < CompCount; i++)   //looping for the number of components to get the rest of the lines
		{
			getline(fileToLoad, LineToLoad);   //for every component, get the line in string 
			string CompInfo[6];                //array of strings to store the loaded words in 

			string input = "";                 //string to store every input word in to be stored later in the array of strings
			for (auto x : LineToLoad)          // looping for every input in the line
			{
				int j = 0;
				if (x == ' ')
				{
					CompInfo[j++] = input;         //if the iterator is empty space, store the input in the array of strings then add one
					input = "";
				}
				else
				{
					input = input + x;
				}
			}

			string compType = CompInfo[0];
			string Label = CompInfo[1];
			int x1 = stoi(CompInfo[2]);
			int y1 = stoi(CompInfo[3]);
			int x2 = stoi(CompInfo[4]);
			int x2 = stoi(CompInfo[5]);

			GraphicsInfo GraphicsInfo * pGInfo = new GraphicsInfo(2);
			pGInfo->PointsList[0].x = x1;
			pGInfo->PointsList[0].x = y1;
			pGInfo->PointsList[0].x = x2;
			pGInfo->PointsList[0].x = y2;

			switch (compType)
			{
			case "AND2":
				AND2 *pA = new AND2(pGInfo, AND2_FANOUT);
				break;
			case "BUFF":
				BUFF* pA = new BUFF(pGInfo, BUFF_FANOUT);
			case "INV2":
				INV2* pA = new INV2(pGInfo, INV2_FANOUT);
			case "LED":
				Led* pA = new Led(pGInfo, LED_FANOUT);
			case "Switch":
				Switch* pA = new Switch(pGInfo, Switch_FANOUT);
			case "NAND2":
				NAND* pA = new NAND(pGInfo, NAND_FANOUT);
			case "NOR2":
				NOR2* pA = new NOR2(pGInfo, NOR_FANOUT);
			case "OR2":
				OR2* pA = new OR2(pGInfo, OR_FANOUT);
			case "XNOR2":
				XNOR2* pA = new XNOR2(pGInfo, XNOR2_FANOUT);
			case "XOR2":
				XNOR2* pA = new XNOR2(pGInfo, XNOR_FANOUT);
			default:
				break;
			}

			pManager->AddComponent(pA);
		}
	}
	else
	{
		pUI->PrintMsg("Unable to open the file");
	}

	fileToSave.close();
}


void Save::Undo() {};
void Save::Redo() {};
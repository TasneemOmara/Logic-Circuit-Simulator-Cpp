#include "Save.h"
#include "..\ApplicationManager.h"


Save::Save(ApplicationManager *pApp) : Action(pApp) {
}

Save::~Save(void) {

}

void Save::Execute()
{
	fstream fileToSave; 
	fileToSave.open("Circuit.txt", ios::out);
	pManager->Save(fileToSave);
	int CompCount;

	Component* CompList[MaxCompCount];
	GetCompList(CompCount, CompList);

	if (fileToSave.is_open())
	{
		fileToSave << CompCount << endl;
		for (size_t i = 0; i < CompCount; i++)
		{
			CompList[i]->SaveComponent(i, fileToSave);
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
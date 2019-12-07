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
}


void Save::Undo() {};
void Save::Redo() {};
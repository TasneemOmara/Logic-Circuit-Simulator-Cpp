#include "Load.h"
#include "..\ApplicationManager.h"


Save::Load(ApplicationManager *pApp) : Action(pApp) {
}

Save::~Load(void) {

}

void Load::Execute()
{
	fstream fileToLoad;
	fileToLoad.open("Circuit.txt", ios::in);
	pManager->Load(fileToLoad);
}


void Save::Undo() {};
void Save::Redo() {};
#include "stdafx.h"  //_____________________________________________ Profesor_CursoDlg.cpp
#include "Profesor_CursoDlg.h"

void Profesor_CursoDlg::Window_Open(Win::Event& e)
{
	//________________________________________________________ ddProfersor
	ddProfersor.Items.Add(L"Item 0 with value 10", 10);
	ddProfersor.Items.Add(L"Item 1 with value 20", 20);
	//________________________________________________________ ddCurso
	ddCurso.Items.Add(L"Item 0 with value 10", 10);
	ddCurso.Items.Add(L"Item 1 with value 20", 20);
}




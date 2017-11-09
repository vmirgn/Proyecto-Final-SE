#include "stdafx.h"  //_____________________________________________ HorarioDlg.cpp
#include "HorarioDlg.h"

void HorarioDlg::Window_Open(Win::Event& e)
{
	//________________________________________________________ ddProfesor
	ddProfesor.Items.Add(L"Item 0 with value 10", 10);
	ddProfesor.Items.Add(L"Item 1 with value 20", 20);
	//________________________________________________________ ddCurso
	ddCurso.Items.Add(L"Item 0 with value 10", 10);
	ddCurso.Items.Add(L"Item 1 with value 20", 20);
	//________________________________________________________ ddPeriodo
	ddPeriodo.Items.Add(L"Item 0 with value 10", 10);
	ddPeriodo.Items.Add(L"Item 1 with value 20", 20);
	//________________________________________________________ ddAula
	ddAula.Items.Add(L"Item 0 with value 10", 10);
	ddAula.Items.Add(L"Item 1 with value 20", 20);
}



void HorarioDlg::btOk_Click(Win::Event& e)
{
}

void HorarioDlg::btCancel_Click(Win::Event& e)
{
}


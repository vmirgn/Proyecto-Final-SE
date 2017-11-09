#include "stdafx.h"  //_____________________________________________ Profesor_TiempoDlg.cpp
#include "Profesor_TiempoDlg.h"

void Profesor_TiempoDlg::Window_Open(Win::Event& e)
{
	//________________________________________________________ ddProfesor
	ddProfesor.Items.Add(L"Item 0 with value 10", 10);
	ddProfesor.Items.Add(L"Item 1 with value 20", 20);
	//________________________________________________________ ddTiempo
	ddTiempo.Items.Add(L"Item 0 with value 10", 10);
	ddTiempo.Items.Add(L"Item 1 with value 20", 20);
}



void Profesor_TiempoDlg::btCancel_Click(Win::Event& e)
{
}

void Profesor_TiempoDlg::btOk_Click(Win::Event& e)
{
}


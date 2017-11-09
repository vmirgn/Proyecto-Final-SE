#include "stdafx.h"  //_____________________________________________ ProfesorDlg.cpp
#include "ProfesorDlg.h"

void ProfesorDlg::Window_Open(Win::Event& e)
{
	//________________________________________________________ ddDepartamento
	ddDepartamento.Items.Add(L"Item 0 with value 10", 10);
	ddDepartamento.Items.Add(L"Item 1 with value 20", 20);
}



void ProfesorDlg::btCancel_Click(Win::Event& e)
{
}

void ProfesorDlg::btOk_Click(Win::Event& e)
{
}


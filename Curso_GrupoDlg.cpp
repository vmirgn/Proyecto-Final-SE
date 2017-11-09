#include "stdafx.h"  //_____________________________________________ Curso_GrupoDlg.cpp
#include "Curso_GrupoDlg.h"

void Curso_GrupoDlg::Window_Open(Win::Event& e)
{
	//________________________________________________________ ddCurso
	ddCurso.Items.Add(L"Item 0 with value 10", 10);
	ddCurso.Items.Add(L"Item 1 with value 20", 20);
	//________________________________________________________ ddGrupo
	ddGrupo.Items.Add(L"Item 0 with value 10", 10);
	ddGrupo.Items.Add(L"Item 1 with value 20", 20);
}



void Curso_GrupoDlg::btCancel_Click(Win::Event& e)
{
}

void Curso_GrupoDlg::btOk_Click(Win::Event& e)
{
}


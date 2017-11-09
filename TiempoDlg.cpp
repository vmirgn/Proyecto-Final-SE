#include "stdafx.h"  //_____________________________________________ TiempoDlg.cpp
#include "TiempoDlg.h"

void TiempoDlg::Window_Open(Win::Event& e)
{
	//________________________________________________________ clSemana
	clSemana.Cols.Add(0, LVCFMT_LEFT, 100, L"Day");
	clSemana.Cols.Add(1, LVCFMT_RIGHT, 200, L"Activity");
	clSemana.Items.Add(0, L"Monday");
	clSemana.Items[0][1].Text = L"Math Class";
	clSemana.Items[0].Checked = true;
}



void TiempoDlg::btOk_Click(Win::Event& e)
{
}

void TiempoDlg::btCancel_Click(Win::Event& e)
{
}


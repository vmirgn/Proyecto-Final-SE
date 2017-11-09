#pragma once   //_____________________________________________ DepartamentoDlg.h  
#include "resource.h"

class DepartamentoDlg: public Win::Dialog
{
public:
	DepartamentoDlg()
	{
	}
	~DepartamentoDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxDescr;
	Win::Label lb1;
	Win::Button btCancel;
	Win::Button btOk;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(7.17021);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.11667);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		tbxDescr.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.14854, 0.31750, 3.81000, 0.60854, hWnd, 1000);
		lb1.CreateX(NULL, L"Departamento:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.21167, 0.31750, 2.69875, 0.60854, hWnd, 1001);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 5.00063, 1.24354, 1.98438, 0.68792, hWnd, 1002);
		btOk.CreateX(NULL, L"Ok", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 2.69875, 1.21708, 1.98438, 0.68792, hWnd, 1003);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxDescr.Font = fontArial009A;
		lb1.Font = fontArial009A;
		btCancel.Font = fontArial009A;
		btOk.Font = fontArial009A;
	}
	//_________________________________________________
	void btCancel_Click(Win::Event& e);
	void btOk_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCancel.IsEvent(e, BN_CLICKED)) {btCancel_Click(e); return true;}
		if (btOk.IsEvent(e, BN_CLICKED)) {btOk_Click(e); return true;}
		return false;
	}
};

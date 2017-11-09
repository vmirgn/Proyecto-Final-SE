#pragma once   //_____________________________________________ ProfesorDlg.h  
#include "resource.h"

class ProfesorDlg: public Win::Dialog
{
public:
	ProfesorDlg()
	{
	}
	~ProfesorDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Label lb3;
	Win::Label lb4;
	Win::Textbox tbxPaterno;
	Win::Textbox tbxMaterno;
	Win::Textbox tbxNombre;
	Win::DropDownList ddDepartamento;
	Win::Button btCancel;
	Win::Button btOk;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(6.93208);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(4.60375);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Apellido paterno:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.21167, 0.21167, 2.67229, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Apellido materno:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.21167, 1.11125, 2.67229, 0.60854, hWnd, 1001);
		lb3.CreateX(NULL, L"Nombre(s):", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.21167, 1.95792, 2.67229, 0.60854, hWnd, 1002);
		lb4.CreateX(NULL, L"Departamento:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.21167, 2.88396, 2.67229, 0.60854, hWnd, 1003);
		tbxPaterno.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.09563, 0.21167, 3.62479, 0.60854, hWnd, 1004);
		tbxMaterno.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.09563, 1.11125, 3.62479, 0.60854, hWnd, 1005);
		tbxNombre.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 3.09563, 1.95792, 3.62479, 0.60854, hWnd, 1006);
		ddDepartamento.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 3.09563, 2.88396, 3.59833, 0.60854, hWnd, 1007);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.73604, 3.73062, 2.01083, 0.68792, hWnd, 1008);
		btOk.CreateX(NULL, L"Ok", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 2.46062, 3.73062, 2.01083, 0.68792, hWnd, 1009);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		lb3.Font = fontArial009A;
		lb4.Font = fontArial009A;
		tbxPaterno.Font = fontArial009A;
		tbxMaterno.Font = fontArial009A;
		tbxNombre.Font = fontArial009A;
		ddDepartamento.Font = fontArial009A;
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

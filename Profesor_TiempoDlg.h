#pragma once   //_____________________________________________ Profesor_TiempoDlg.h  
#include "resource.h"

class Profesor_TiempoDlg: public Win::Dialog
{
public:
	Profesor_TiempoDlg()
	{
	}
	~Profesor_TiempoDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::DropDownList ddProfesor;
	Win::DropDownList ddTiempo;
	Win::Button btCancel;
	Win::Button btOk;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(6.24417);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.83104);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Profesor:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.23813, 0.23813, 1.40229, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Tiempo:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.23813, 1.13771, 1.40229, 0.60854, hWnd, 1001);
		ddProfesor.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 1.85208, 0.23813, 4.18042, 0.60854, hWnd, 1002);
		ddTiempo.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 1.85208, 1.13771, 4.18042, 0.60854, hWnd, 1003);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.73062, 1.95792, 2.32833, 0.68792, hWnd, 1004);
		btOk.CreateX(NULL, L"Ok", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 1.13771, 1.95792, 2.32833, 0.68792, hWnd, 1005);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		ddProfesor.Font = fontArial009A;
		ddTiempo.Font = fontArial009A;
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

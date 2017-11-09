#pragma once   //_____________________________________________ HorarioDlg.h  
#include "resource.h"

class HorarioDlg: public Win::Dialog
{
public:
	HorarioDlg()
	{
	}
	~HorarioDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Label lb3;
	Win::Label lb4;
	Win::DropDownList ddProfesor;
	Win::DropDownList ddCurso;
	Win::DropDownList ddPeriodo;
	Win::DropDownList ddAula;
	Win::Button btOk;
	Win::Button btCancel;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(6.21771);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(4.70958);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Profesor", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.23813, 0.29104, 1.74625, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Curso", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.23813, 1.11125, 1.74625, 0.60854, hWnd, 1001);
		lb3.CreateX(NULL, L"Periodo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.23813, 1.93146, 1.74625, 0.60854, hWnd, 1002);
		lb4.CreateX(NULL, L"Aula", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.23813, 2.75167, 1.74625, 0.60854, hWnd, 1003);
		ddProfesor.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 2.11667, 0.29104, 3.88937, 0.60854, hWnd, 1004);
		ddCurso.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 2.11667, 1.11125, 3.88937, 0.63500, hWnd, 1005);
		ddPeriodo.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 2.11667, 1.95792, 3.88937, 0.60854, hWnd, 1006);
		ddAula.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 2.14312, 2.77812, 3.88937, 0.60854, hWnd, 1007);
		btOk.CreateX(NULL, L"Ok", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 2.51354, 3.83646, 1.69333, 0.68792, hWnd, 1008);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.33917, 3.83646, 1.69333, 0.68792, hWnd, 1009);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		lb3.Font = fontArial009A;
		lb4.Font = fontArial009A;
		ddProfesor.Font = fontArial009A;
		ddCurso.Font = fontArial009A;
		ddPeriodo.Font = fontArial009A;
		ddAula.Font = fontArial009A;
		btOk.Font = fontArial009A;
		btCancel.Font = fontArial009A;
	}
	//_________________________________________________
	void btOk_Click(Win::Event& e);
	void btCancel_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btOk.IsEvent(e, BN_CLICKED)) {btOk_Click(e); return true;}
		if (btCancel.IsEvent(e, BN_CLICKED)) {btCancel_Click(e); return true;}
		return false;
	}
};

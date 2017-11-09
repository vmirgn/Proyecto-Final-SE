#pragma once   //_____________________________________________ Profesor_CursoDlg.h  
#include "resource.h"

class Profesor_CursoDlg: public Win::Dialog
{
public:
	Profesor_CursoDlg()
	{
	}
	~Profesor_CursoDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::DropDownList ddProfersor;
	Win::DropDownList ddCurso;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(6.13833);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(1.82562);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Profesor", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.21167, 0.21167, 1.69333, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Curso", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.21167, 1.03188, 1.71979, 0.60854, hWnd, 1001);
		ddProfersor.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 2.03729, 0.21167, 3.91583, 0.60854, hWnd, 1002);
		ddCurso.CreateX(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 2.03729, 1.03188, 3.91583, 0.60854, hWnd, 1003);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		ddProfersor.Font = fontArial009A;
		ddCurso.Font = fontArial009A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};

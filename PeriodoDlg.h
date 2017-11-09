#pragma once   //_____________________________________________ PeriodoDlg.h  
#include "resource.h"

class PeriodoDlg: public Win::Dialog
{
public:
	PeriodoDlg()
	{
	}
	~PeriodoDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Label lb3;
	Win::Textbox tbxDescr;
	Win::Textbox tbxInicio;
	Win::Textbox tbxFin;
	Win::Button btCancel;
	Win::Button btOk;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(6.37646);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(3.73062);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Descripción:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.18521, 0.21167, 1.77271, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Fecha de inicio:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.18521, 1.08479, 2.38125, 0.60854, hWnd, 1001);
		lb3.CreateX(NULL, L"Fecha de fin:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.18521, 1.95792, 2.38125, 0.60854, hWnd, 1002);
		tbxDescr.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.75167, 0.21167, 3.38667, 0.60854, hWnd, 1003);
		tbxInicio.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.75167, 1.05833, 3.38667, 0.60854, hWnd, 1004);
		tbxFin.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.75167, 1.95792, 3.38667, 0.60854, hWnd, 1005);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.91583, 2.85750, 2.27542, 0.68792, hWnd, 1006);
		btOk.CreateX(NULL, L"Ok", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 1.34938, 2.85750, 2.27542, 0.68792, hWnd, 1007);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		lb3.Font = fontArial009A;
		tbxDescr.Font = fontArial009A;
		tbxInicio.Font = fontArial009A;
		tbxFin.Font = fontArial009A;
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

#pragma once   //_____________________________________________ GrupoDlg.h  
#include "resource.h"

class GrupoDlg: public Win::Dialog
{
public:
	GrupoDlg()
	{
	}
	~GrupoDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxDescr;
	Win::Textbox tbxCupo;
	Win::Button btCancel;
	Win::Button btOk;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(5.26521);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.93688);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Descripción:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.18521, 0.23813, 1.95792, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Cupo:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.18521, 1.16417, 1.95792, 0.60854, hWnd, 1001);
		tbxDescr.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.30187, 0.23813, 2.75167, 0.60854, hWnd, 1002);
		tbxCupo.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.30187, 1.16417, 2.75167, 0.60854, hWnd, 1003);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.33375, 2.06375, 1.74625, 0.68792, hWnd, 1004);
		btOk.CreateX(NULL, L"Ok", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 1.32292, 2.06375, 1.74625, 0.68792, hWnd, 1005);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxDescr.Font = fontArial009A;
		tbxCupo.Font = fontArial009A;
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

#pragma once   //_____________________________________________ TiempoDlg.h  
#include "resource.h"

class TiempoDlg: public Win::Dialog
{
public:
	TiempoDlg()
	{
	}
	~TiempoDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Textbox tbxInicio;
	Win::Textbox tbxFin;
	Win::Label lb3;
	Win::Textbox tbxDescr;
	Win::ListView clSemana;
	Win::Button btOk;
	Win::Button btCancel;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(10.42458);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(5.05354);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Inicio:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.21167, 0.21167, 1.45521, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Fin: ", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.21167, 0.95250, 1.45521, 0.60854, hWnd, 1001);
		tbxInicio.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 1.82562, 0.23813, 2.09021, 0.60854, hWnd, 1002);
		tbxFin.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 1.82562, 0.97896, 2.09021, 0.60854, hWnd, 1003);
		lb3.CreateX(NULL, L"Time: ", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.18521, 1.87854, 1.45521, 0.60854, hWnd, 1004);
		tbxDescr.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 1.82562, 1.87854, 5.21229, 0.60854, hWnd, 1005);
		clSemana.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | LVS_ALIGNLEFT | LVS_LIST, 7.51417, 0.21167, 2.72521, 4.65667, hWnd, 1006);
		btOk.CreateX(NULL, L"Ok", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 2.77812, 4.18042, 1.77271, 0.66146, hWnd, 1007);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 5.10646, 4.18042, 1.77271, 0.68792, hWnd, 1008);
		clSemana.SetExtStyle(LVS_EX_CHECKBOXES | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES, LVS_EX_CHECKBOXES | LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		tbxInicio.Font = fontArial009A;
		tbxFin.Font = fontArial009A;
		lb3.Font = fontArial009A;
		tbxDescr.Font = fontArial009A;
		clSemana.Font = fontArial009A;
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

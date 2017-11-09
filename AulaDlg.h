#pragma once   //_____________________________________________ AulaDlg.h  
#include "resource.h"

class AulaDlg: public Win::Dialog
{
public:
	AulaDlg()
	{
	}
	~AulaDlg()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Label lb4;
	Win::Textbox tbxDescr;
	Win::Textbox tbxCapacidad;
	Win::Textbox tbxEdificio;
	Win::Button ckProyector;
	Win::Button btOk;
	Win::Button btCancel;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(3.88937);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(4.31271);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		lb1.CreateX(NULL, L"Descripción:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.31750, 0.26458, 1.74625, 0.60854, hWnd, 1000);
		lb2.CreateX(NULL, L"Capacidad:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.31750, 0.97896, 1.74625, 0.60854, hWnd, 1001);
		lb4.CreateX(NULL, L"Edificio:", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.31750, 1.71979, 1.74625, 0.60854, hWnd, 1002);
		tbxDescr.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.16958, 0.26458, 1.40229, 0.60854, hWnd, 1003);
		tbxCapacidad.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.16958, 0.97896, 1.40229, 0.60854, hWnd, 1004);
		tbxEdificio.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 2.16958, 1.74625, 1.40229, 0.60854, hWnd, 1005);
		ckProyector.CreateX(NULL, L"Proyector", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_AUTOCHECKBOX | BS_LEFT | BS_VCENTER, 0.29104, 2.56646, 2.09021, 0.63500, hWnd, 1006);
		btOk.CreateX(NULL, L"Ok", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.23813, 3.43958, 1.66688, 0.68792, hWnd, 1007);
		btCancel.CreateX(NULL, L"Cancel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 2.03729, 3.43958, 1.66688, 0.68792, hWnd, 1008);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
		lb4.Font = fontArial009A;
		tbxDescr.Font = fontArial009A;
		tbxCapacidad.Font = fontArial009A;
		tbxEdificio.Font = fontArial009A;
		ckProyector.Font = fontArial009A;
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

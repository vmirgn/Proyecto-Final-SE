#pragma once  //______________________________________ Proyecto_Horarios.h  
#include "Resource.h"
#include "AboutDlg.h"
#include "ProfesorDlg.h"
#include "HorarioDlg.h"
#include "DepartamentoDlg.h"
#include "CursoDlg.h"
#include "GrupoDlg.h"
#include "TiempoDlg.h"
#include "AulaDlg.h"
#include "Curso_GrupoDlg.h"
#include "Profesor_CursoDlg.h"
#include "Profesor_TiempoDlg.h"
#include "PeriodoDlg.h"


#define VIEW_PROFESOR 0
#define VIEW_DEPARTAMENTO 1
#define VIEW_PROFESOR_CURSO 2
#define VIEW_CURSO 3
#define VIEW_GRUPO 4
#define VIEW_PROFESOR_TIEMPO 5
#define VIEW_TIEMPO 6
#define VIEW_AULA 7
#define VIEW_CURSO_GRUPO 8
#define VIEW_PERIODO 9
#define VIEW_HORARIO 10
// ...

class Proyecto_Horarios : public Win::Window
{
public:
	Proyecto_Horarios()
	{
	}
	~Proyecto_Horarios()
	{
	}
	void CreateToolbar();
	void Edit();
	void Delete();
	void RefreshView();
	const wchar_t * GetClassName(){ return L"Proyecto_Horarios"; }
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Toolbar toolbMain;
	Win::Tab tabSelection;
	Win::ListView lvData;
protected:
	Win::Gdi::Font fontArial009A;
	void GetWindowInformation(CREATESTRUCT& createStruct)
	{
		createStruct.style = WS_CLIPCHILDREN | WS_OVERLAPPEDWINDOW;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"root";
		toolbMain.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | CCS_NORESIZE | CCS_NOPARENTALIGN | CCS_ADJUSTABLE | CCS_NODIVIDER | TBSTYLE_FLAT | TBSTYLE_TOOLTIPS, 0.02646, 0.02646, 11.00667, 0.63500, hWnd, 1000);
		tabSelection.CreateX(NULL, NULL, WS_CHILD | WS_VISIBLE | TCS_SINGLELINE | TCS_TABS | TCS_RAGGEDRIGHT | TCS_FIXEDWIDTH, 0.02646, 0.71437, 17.99167, 0.95250, hWnd, 1001);
		lvData.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | LVS_ALIGNLEFT | LVS_REPORT, 0.02646, 1.66688, 17.99167, 9.15458, hWnd, 1002);
		lvData.SetExtStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES, LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tabSelection.Font = fontArial009A;
		lvData.Font = fontArial009A;
		tabSelection.SetDock(DOCK_BORDER, DOCK_BORDER, DOCK_BORDER, DOCK_NONE);
		lvData.SetDock(DOCK_BORDER, DOCK_BORDER, DOCK_BORDER, DOCK_BORDER);
	}
	//_________________________________________________
	void tabSelection_SelChange(Win::Event& e);
	void lvData_ItemActivate(Win::Event& e);
	void lvData_ItemChanged(Win::Event& e);
	void lvData_KeyDown(Win::Event& e);
	void Window_Open(Win::Event& e);
	void Cmd_About(Win::Event& e);
	void Cmd_Add(Win::Event& e);
	void Cmd_Copy(Win::Event& e);
	void Cmd_Delete(Win::Event& e);
	void Cmd_Edit(Win::Event& e);
	void Cmd_Filter(Win::Event& e);
	void Cmd_Msexcel(Win::Event& e);
	void Cmd_Print(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (tabSelection.IsEvent(e, TCN_SELCHANGE)) {tabSelection_SelChange(e); return true;}
		if (lvData.IsEvent(e, LVN_ITEMACTIVATE)) {lvData_ItemActivate(e); return true;}
		if (lvData.IsEvent(e, LVN_ITEMCHANGED)) {lvData_ItemChanged(e); return true;}
		if (lvData.IsEvent(e, LVN_KEYDOWN)) {lvData_KeyDown(e); return true;}
		if (this->IsEvent(e, IDM_ABOUT)) {Cmd_About(e); return true;}
		if (this->IsEvent(e, IDM_ADD)) {Cmd_Add(e); return true;}
		if (this->IsEvent(e, IDM_COPY)) {Cmd_Copy(e); return true;}
		if (this->IsEvent(e, IDM_DELETE)) {Cmd_Delete(e); return true;}
		if (this->IsEvent(e, IDM_EDIT)) {Cmd_Edit(e); return true;}
		if (this->IsEvent(e, IDM_FILTER)) {Cmd_Filter(e); return true;}
		if (this->IsEvent(e, IDM_MSEXCEL)) {Cmd_Msexcel(e); return true;}
		if (this->IsEvent(e, IDM_PRINT)) {Cmd_Print(e); return true;}
		return false;
	}
};

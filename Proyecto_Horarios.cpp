#include "stdafx.h"  //________________________________________ Proyecto_Horarios.cpp
#include "Proyecto_Horarios.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow){
	Proyecto_Horarios app;
	app.CreateMainWindow(L"Proyecto_Horarios", cmdShow, IDI_Proyecto_Horarios, NULL, (HBRUSH)(COLOR_BTNFACE + 1), hInstance);
	return app.MessageLoop(IDC_Proyecto_Horarios);
}

void Proyecto_Horarios::Window_Open(Win::Event& e)
{
	this->Text = L"Horarios";
	CreateToolbar();
	//________________________________________________________ tabSelection
	tabSelection.Items.Add(0, L"Horario", VIEW_HORARIO);
	tabSelection.Items.Add(1, L"Profesor", VIEW_PROFESOR);
	tabSelection.Items.Add(2, L"Departamento", VIEW_DEPARTAMENTO);
	tabSelection.Items.Add(3, L"Profesor-Curso", VIEW_PROFESOR_CURSO);
	tabSelection.Items.Add(4, L"Curso", VIEW_CURSO);
	tabSelection.Items.Add(5, L"Grupo", VIEW_GRUPO);
	tabSelection.Items.Add(6, L"Curso-Grupo", VIEW_CURSO_GRUPO);
	tabSelection.Items.Add(7, L"Periodo", VIEW_PERIODO);
	tabSelection.Items.Add(8, L"Profesor-Tiempo", VIEW_PROFESOR_TIEMPO);
	tabSelection.Items.Add(9, L"Tiempo", VIEW_TIEMPO);
	tabSelection.Items.Add(10, L"Aula", VIEW_AULA);

	
	RefreshView();
}

void Proyecto_Horarios::Cmd_Add(Win::Event& e)
{
	const int view = tabSelection.SelectedData;
	if (view == VIEW_HORARIO)
	{
		HorarioDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_PROFESOR)
	{
		ProfesorDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_CURSO)
	{
		CursoDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_PROFESOR_CURSO)
	{
		Profesor_CursoDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_GRUPO)
	{
		GrupoDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_CURSO_GRUPO)
	{
		Curso_GrupoDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_PERIODO)
	{
		PeriodoDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_PROFESOR_TIEMPO)
	{
		Profesor_TiempoDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_TIEMPO)
	{
		TiempoDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_AULA)
	{
		AulaDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_DEPARTAMENTO)
	{
		DepartamentoDlg dlg;
		dlg.BeginDialog(hWnd);
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
}

void Proyecto_Horarios::RefreshView()
{
	Win::HourGlassCursor hgc(true);
	this->toolbMain.EnableButton(IDM_DELETE, false);
	lvData.SetRedraw(false);
	const int view = tabSelection.SelectedData;

	//________________________________________________ Columns
	lvData.Cols.DeleteAll();
	switch (view)
	{
	case VIEW_HORARIO:
		lvData.Cols.Add(0, LVCFMT_LEFT, 160, L"Last name");
		lvData.Cols.Add(1, LVCFMT_LEFT, 160, L"First name");
		lvData.Cols.Add(2, LVCFMT_LEFT, 120, L"Birth date");
		lvData.Cols.Add(3, LVCFMT_LEFT, 250, L"email");
		break;
	case VIEW_PROFESOR:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	case VIEW_DEPARTAMENTO:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	case VIEW_PROFESOR_CURSO:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	case VIEW_CURSO:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	case VIEW_GRUPO:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	case VIEW_CURSO_GRUPO:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	case VIEW_PERIODO:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	case VIEW_PROFESOR_TIEMPO:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	case VIEW_TIEMPO:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	case VIEW_AULA:
		lvData.Cols.Add(0, LVCFMT_LEFT, 150, L"Date");
		lvData.Cols.Add(1, LVCFMT_CENTER, 250, L"Description");
		lvData.Cols.Add(2, LVCFMT_CENTER, 150, L"Client");
		lvData.Cols.Add(3, LVCFMT_RIGHT, 100, L"Amount");
		break;
	}
	//________________________________________________ Items
	lvData.Items.DeleteAll();
	wstring text;
	switch (view)
	{
	case VIEW_HORARIO:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	case VIEW_PROFESOR:
		text = L"SELECT sale_id, date, description, client, amount FROM sale";
		break;
	case VIEW_DEPARTAMENTO:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	case VIEW_PROFESOR_CURSO:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	case VIEW_CURSO:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	case VIEW_GRUPO:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	case VIEW_CURSO_GRUPO:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	case VIEW_PERIODO:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	case VIEW_PROFESOR_TIEMPO:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	case VIEW_TIEMPO:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	case VIEW_AULA:
		text = L"SELECT client_id, last_name, first_name, birth_date, email FROM client";
		break;
	}

	if (text.empty() == true)
	{
		lvData.SetRedraw(true);
		return;
	}
	Sql::SqlConnection conn;
	try
	{
		//conn.OpenSession(DSN, USERNAME, PASSWORD); //Control Panel>Administrative Tools>Data Sources (ODBC)>Create dsn_myDatabase
		conn.OpenSession(hWnd, CONNECTION_STRING);
		conn.ExecuteSelect(text.c_str(), 100, lvData);
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Error", MB_OK | MB_ICONERROR);
	}
	lvData.SetRedraw(true);
}

void Proyecto_Horarios::Cmd_Delete(Win::Event& e)
{
	Delete();
}

void Proyecto_Horarios::Cmd_Edit(Win::Event& e)
{
	Edit();
}

void Proyecto_Horarios::Cmd_Copy(Win::Event& e)
{
	lvData.CopyToClipboard();
}

void Proyecto_Horarios::Cmd_Msexcel(Win::Event& e)
{
	Win::FileDlg dlg;
	dlg.Clear();
	dlg.SetFilter(L"MS Excel files (*.xlsx)\0*.xlsx\0\0", 0, L"xlsx");
	if (dlg.BeginDialog(hWnd, L"Save", true))
	{
		lvData.ExportToMsExcel(dlg.GetFileNameFullPath());
	}
}

void Proyecto_Horarios::Cmd_Filter(Win::Event& e)
{
}

void Proyecto_Horarios::Cmd_Print(Win::Event& e)
{
	lvData.Print();
}

void Proyecto_Horarios::tabSelection_SelChange(Win::Event& e)
{
	RefreshView();
}

void Proyecto_Horarios::lvData_ItemActivate(Win::Event& e)
{
	Edit();
}

void Proyecto_Horarios::lvData_ItemChanged(Win::Event& e)
{
	toolbMain.EnableButton(IDM_DELETE, lvData.GetSelectedCount() == 1);
}

void Proyecto_Horarios::lvData_KeyDown(Win::Event& e)
{
	LPNMLVKEYDOWN p = (LPNMLVKEYDOWN)e.lParam;
	if (p->wVKey == VK_DELETE)
	{
		Delete();
	}
}

void Proyecto_Horarios::Edit()
{
	const int view = tabSelection.SelectedData;
	//_______________________________________________________ Extract id from list view control
	const int index = lvData.GetSelectedIndex();
	if (index < 0) return;
	const int id = lvData.Items[index].Data;

	if (view == VIEW_HORARIO)
	{
		//ClientDlg dlg;
		//dlg.client_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_PROFESOR)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_DEPARTAMENTO)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_PROFESOR_CURSO)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_CURSO)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_GRUPO)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_CURSO_GRUPO)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_PERIODO)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_PROFESOR_TIEMPO)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_TIEMPO)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	else if (view == VIEW_AULA)
	{
		//SaleDlg dlg;
		//dlg.sale_id = id;
		//if (dlg.BeginDialog(hWnd) == TRUE)
		//{
		//	RefreshView();
		//}
	}
	
}

void Proyecto_Horarios::Delete()
{
	if (this->MessageBox(L"Are you sure?", L"Proyecto_Horarios", MB_YESNO | MB_ICONQUESTION) != IDYES) return;

	const int view = tabSelection.SelectedData;

	//_______________________________________________________ Extract id from lvData
	const int index = lvData.GetSelectedIndex();
	if (index < 0) return;
	const int id = lvData.Items[index].Data;

	Sql::SqlConnection conn;
	wstring cmd;
	int rows = 0;

	try
	{
		//conn.OpenSession(DSN, USERNAME, PASSWORD); //Control Panel>Administrative Tools>Data Sources (ODBC)>Create dsn_myDatabase
		conn.OpenSession(hWnd, CONNECTION_STRING);
		if (view == VIEW_HORARIO)
		{
			Sys::Format(cmd, L"DELETE FROM client WHERE client_id=%d", id);
		}
		else if (view == VIEW_PROFESOR)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}
		else if (view == VIEW_DEPARTAMENTO)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}
		else if (view == VIEW_PROFESOR_CURSO)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}
		else if (view == VIEW_CURSO)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}
		else if (view == VIEW_GRUPO)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}
		else if (view == VIEW_CURSO_GRUPO)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}
		else if (view == VIEW_PERIODO)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}
		else if (view == VIEW_PROFESOR_TIEMPO)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}
		else if (view == VIEW_TIEMPO)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}
		else if (view == VIEW_AULA)
		{
			Sys::Format(cmd, L"DELETE FROM sale WHERE sale_id=%d", id);
		}

		rows = conn.ExecuteNonQuery(cmd);
		if (rows != 1)
		{
			this->MessageBox(L"Edit Here", L"Proyecto_Horarios", MB_OK | MB_ICONERROR);
		}
	}
	catch (Sql::SqlException e)
	{
		this->MessageBox(e.GetDescription(), L"Proyecto_Horarios", MB_OK | MB_ICONERROR);
	}
	RefreshView();
}

void Proyecto_Horarios::CreateToolbar()
{
	int i = 0;
	//________________________________________________________ toolbMain
	TBBUTTON tbButton[10];//<< EDIT HERE THE NUMBER OF BUTTONS

	toolbMain.imageList.Create(20, 20, 8);//<< EDIT HERE THE NUMBER OF IMAGES
	toolbMain.imageList.AddIcon(this->hInstance, IDI_REDO);
	toolbMain.imageList.AddIcon(this->hInstance, IDI_ADD);
	toolbMain.imageList.AddIcon(this->hInstance, IDI_EDIT);
	toolbMain.imageList.AddIcon(this->hInstance, IDI_DELETE);
	toolbMain.imageList.AddIcon(this->hInstance, IDI_COPY);
	toolbMain.imageList.AddIcon(this->hInstance, IDI_PRINT);
	toolbMain.imageList.AddIcon(this->hInstance, IDI_MSEXCEL);
	toolbMain.imageList.AddIcon(this->hInstance, IDI_ABOUT);
	toolbMain.SendMessage(TB_BUTTONSTRUCTSIZE, (WPARAM)(int)sizeof(TBBUTTON), 0);
	toolbMain.SetImageList(toolbMain.imageList);
	//_____________________________________
	tbButton[i].iBitmap = MAKELONG(0, 0); //<< IMAGE INDEX
	tbButton[i].idCommand = IDM_REDO;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_BUTTON;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = (LONG_PTR)L"Salir";
	//_____________________________________
	tbButton[i].iBitmap = MAKELONG(1, 0); //<< IMAGE INDEX
	tbButton[i].idCommand = IDM_ADD;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_BUTTON;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = (LONG_PTR)L"Add (Insert new)";
	//_____________________________________
	tbButton[i].iBitmap = MAKELONG(2, 0); //<< IMAGE INDEX
	tbButton[i].idCommand = IDM_EDIT;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_BUTTON;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = (LONG_PTR)L"Edit";
	//_____________________________________
	tbButton[i].iBitmap = MAKELONG(3, 0); //<< IMAGE INDEX
	tbButton[i].idCommand = IDM_DELETE;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_BUTTON;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = (LONG_PTR)L"Delete";
	//_____________________________________
	tbButton[i].iBitmap = MAKELONG(4, 0); //<< IMAGE INDEX
	tbButton[i].idCommand = IDM_COPY;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_BUTTON;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = (LONG_PTR)L"Copy";
	//________________________ A separator
	tbButton[i].iBitmap = -1;
	tbButton[i].idCommand = 0;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_SEP;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = 0;
	//_____________________________________
	tbButton[i].iBitmap = MAKELONG(5, 0); //<< IMAGE INDEX
	tbButton[i].idCommand = IDM_PRINT;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_BUTTON;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = (LONG_PTR)L"Print";
	//_____________________________________
	tbButton[i].iBitmap = MAKELONG(6, 0); //<< IMAGE INDEX
	tbButton[i].idCommand = IDM_MSEXCEL;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_BUTTON;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = (LONG_PTR)L"Export to Microsoft Excel";
	//________________________ A separator
	tbButton[i].iBitmap = -1;
	tbButton[i].idCommand = 0;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_SEP;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = 0;
	//_____________________________________
	tbButton[i].iBitmap = MAKELONG(7, 0); //<< IMAGE INDEX
	tbButton[i].idCommand = IDM_ABOUT;
	tbButton[i].fsState = TBSTATE_ENABLED; // | TBSTATE_WRAP
	tbButton[i].fsStyle = BTNS_BUTTON;
	tbButton[i].dwData = 0L;
	tbButton[i++].iString = (LONG_PTR)L"About";

	toolbMain.SetBitmapSize(20, 20);
	toolbMain.SetButtonSize(24, 22);
	toolbMain.AddButtons(tbButton, i);// << EDIT HERE THE NUMBER OF BUTTONS
	toolbMain.SendMessage(TB_AUTOSIZE, 0, 0);
	toolbMain.SetMaxTextRows(0);// EDIT HERE TO DISPLAY THE BUTTON TEXT
	toolbMain.Show(SW_SHOWNORMAL);
}

void Proyecto_Horarios::Cmd_About(Win::Event& e)
{
	AboutDlg dlg;
	dlg.BeginDialog(hWnd);
}


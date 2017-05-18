#pragma once  //______________________________________ ConvertirGalonesLitros.h  
#include "Resource.h"
class ConvertirGalonesLitros : public Win::Dialog
{
public:
	ConvertirGalonesLitros()
	{
	}
	~ConvertirGalonesLitros()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxGalones;
	Win::Button btConversion;
	Win::Label lb2;
	Win::Label lb3;
	Win::Textbox tbx2;
protected:
	Win::Gdi::Font fontArial014A;
	Win::Gdi::Font fontArial_Black016C;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(403);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(72);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"ConvertirGalonesLitros";
		tbxGalones.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 51, 36, 102, 25, hWnd, 1000);
		btConversion.Create(NULL, L"Conversión", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 175, 37, 94, 28, hWnd, 1001);
		lb2.Create(NULL, L"Galones", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 47, 9, 107, 24, hWnd, 1002);
		lb3.Create(NULL, L"Litros", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 295, 6, 71, 27, hWnd, 1003);
		tbx2.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 295, 37, 101, 23, hWnd, 1004);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		fontArial_Black016C.Create(L"Arial Black", 16, true, false, false, false);
		tbxGalones.Font = fontArial014A;
		btConversion.Font = fontArial014A;
		lb2.Font = fontArial_Black016C;
		lb3.Font = fontArial_Black016C;
		tbx2.Font = fontArial014A;
		lb2.TextColor = RGB(247, 247, 247);
	}
	//_________________________________________________
	void btConversion_Click(Win::Event& e);
	void lb2_CtlColorStatic(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btConversion.IsEvent(e, BN_CLICKED)) {btConversion_Click(e); return true;}
		if (lb2.IsEvent(e, WM_CTLCOLORSTATIC)) {lb2_CtlColorStatic(e); return true;}
		return false;
	}
};

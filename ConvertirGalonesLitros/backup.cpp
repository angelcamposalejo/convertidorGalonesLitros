#include "stdafx.h"  //________________________________________ ConvertirGalonesLitros.cpp
#include "ConvertirGalonesLitros.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	ConvertirGalonesLitros app;
	return app.BeginDialog(IDI_ConvertirGalonesLitros, hInstance);
}

void ConvertirGalonesLitros::Window_Open(Win::Event& e)
{
}

void ConvertirGalonesLitros::btConversion_Click(Win::Event& e)
{
	const double galones = tbxGalones.DoubleValue;
	const double litros = galones*3.78541;
	
}

void ConvertirGalonesLitros::lb2_CtlColorStatic(Win::Event& e)
{
}


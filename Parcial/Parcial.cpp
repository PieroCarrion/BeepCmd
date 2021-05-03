// Parcial.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <ctime>
#include "CVectorAsistente.h"

using namespace std;
void menu() {
	Console::Clear();
	Console::SetCursorPosition(20, 12);cout << "¿En que Puedo ayudarte?";
}
int main() {
	CAsistente* objAsistente = new CAsistente();
	while (true) {
		menu();
		if (kbhit())
		{
			char opt = _getch();
			objAsistente->RealizarAccion(opt);
		}
	}
	
	_getch();
    return 0;
}

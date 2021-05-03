#pragma once
#include<iostream>
#include <ctime>
#include <iomanip>
using namespace System;
using namespace std;
class CEvento {
protected:
public:
	CEvento() {}
	~CEvento() {}
	virtual int RealizarAccion(int n) { //Implementacion implicita
		return 0;
	}
};
class CEvento_Tecla :public CEvento{
private:
	char tecla;
public:
	CEvento_Tecla() {}
	~CEvento_Tecla() {}
	void Set_Tecla(char tecla) {
		this->tecla = tecla;
	}
	int RealizarAccion(int n) {
		if (tecla == 'C') {
			Console::Clear();
			Console::SetCursorPosition(20, 12);
			cout << "Ingrese el valor de n";
			cin >> n;
		}
		else if (tecla == 'T') {
			Console::Clear();
			Console::SetCursorPosition(20, 12);
			//
			auto t = time(nullptr);
			auto tm = *localtime(&t);
			cout << put_time(&tm, "%d-%m-%Y %H-%M-%S") << endl;
			//
			_getch();
		}
		return 0;
	}
};
class CEvento_Bateria :public CEvento {
private:
public:
	CEvento_Bateria() {}
	~CEvento_Bateria() {}
	int RealizarAccion(int n){
		
		Console::Clear();
		Console::SetCursorPosition(20,12);
		cout << "...Beep..."<<char(7);
		_getch();
		
		if (n==2) {
			Console::Clear();
			Console::SetCursorPosition(20, 12);
			cout << "Resta una unidad de Bateria";
			_getch();
		}
		return n--;
	}	
};


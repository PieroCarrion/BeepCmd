#pragma once
#include <vector>
#include "CUPComunnications.h"
using namespace std;
class CAsistente {
private:
	vector<CEvento*> ArrAsistente;
	int n;
public:
	CAsistente() {
		this-> n = 15;
		ArrAsistente.push_back(new CEvento_Tecla());
		ArrAsistente.push_back(new CEvento_Bateria());
	}
	~CAsistente() {}
	void RealizarAccion(char tecla) {
		((CEvento_Tecla*) ArrAsistente.at(0))->Set_Tecla(tecla);
		n = ArrAsistente.at(0)->RealizarAccion(n);
		n = ArrAsistente.at(1)->RealizarAccion(n);
	}
};
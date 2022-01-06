#pragma once
#include "Nodo.h"

const int N = 20;

class Cola
{
private:
	Nodo c[N];
	int frente;
	int final;

public:
	Cola(void);
	
	bool vacia();
	bool llena();
	bool insertar(Nodo nodo);
	bool eliminar(Nodo& nodo);
	int getFrente();

	Cola thisCola();
	void thisCola(Cola cola);
};


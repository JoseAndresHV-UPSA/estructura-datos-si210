#pragma once
#include "Nodo.h"

const int N = 20;

class ColaCircular
{
private:
	Nodo c[N];
	int frente;
	int final;

public:
	ColaCircular(void);

	bool vacia();
	bool llena();
	bool insertar(Nodo nodo);
	bool eliminar(Nodo& nodo);
	int getFrente();

	ColaCircular thisCola();
	void thisCola(ColaCircular cola);
};


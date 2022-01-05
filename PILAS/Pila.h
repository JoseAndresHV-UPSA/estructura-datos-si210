#pragma once
#include "Nodo.h"

const int N = 20;

class Pila
{
private:
	Nodo p[N];
	int tope;

public:
	
	int getTope();
	bool vacia();
	bool llena();
	bool insertar(Nodo n);
	bool eliminar(Nodo& n);

	Pila thisPila();
	void thisPila(Pila pila);

	Pila(void);
};


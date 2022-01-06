#pragma once
#include "Nodo.h"

class PilaDinamica
{
private:
	Nodo* raiz;

public:
	PilaDinamica(void);

	void push(Nodo nodo);
	Nodo pop();
	Nodo top();
	int size();
	bool empty();
	
	PilaDinamica thisPila();
	void thisPila(PilaDinamica pila);
};


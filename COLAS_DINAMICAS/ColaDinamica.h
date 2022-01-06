#pragma once
#include "Nodo.h"

class ColaDinamica
{
private:
	Nodo* raiz;
	Nodo* fondo;

public:
	ColaDinamica(void);

	void enqueue(Nodo nodo);
	Nodo dequeue();
	Nodo peak();
	int size();
	bool empty();

	ColaDinamica thisCola();
	void thisCola(ColaDinamica cola);
};
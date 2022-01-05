#pragma once
#include "Pila.h"

class Operaciones : public Pila
{
public:
	Operaciones(void);
	
	int contar();
	void ordenar();
	bool existe(Nodo n);
	Operaciones invertida();
};


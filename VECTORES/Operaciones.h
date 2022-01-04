#pragma once
#include "Vector.h"

class Operaciones: public Vector
{
public:
	Operaciones(void);

	void ordenar();
	void invertir();
	bool existe(int val);
	void eliminarPos(int p);
	void limpiar();
};


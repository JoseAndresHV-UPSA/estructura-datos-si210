#pragma once
#include "Matriz.h"

class Operaciones : public Matriz
{
public:
	bool esTriangularSup();
	Operaciones transpuesta();
	void ordenar();
	bool existerValor(int valor);
	int contarValor(int valor);
	void sumarFilas();
	void sumarColums();
	Operaciones sumar(Operaciones m2);
	Operaciones multiplicar(Operaciones m2);
	void limpiar();
};


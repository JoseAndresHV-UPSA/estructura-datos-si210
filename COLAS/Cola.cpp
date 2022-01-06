#include "Cola.h"

Cola::Cola(void)
{
	frente = -1;
	final = -1;
}

bool Cola::vacia()
{
	return frente == final;
}

bool Cola::llena()
{
	return final == N - 1;
}

bool Cola::insertar(Nodo nodo)
{
	if (llena())
		return false;

	final++;
	c[final] = nodo;
	return true;
}

bool Cola::eliminar(Nodo& nodo)
{
	if (vacia())
		return false;

	frente++;
	nodo = c[frente];
	return true;
}

int Cola::getFrente()
{
	return frente + 1;
}

Cola Cola::thisCola()
{
	return *this;
}

void Cola::thisCola(Cola cola)
{
	*this = cola;
}

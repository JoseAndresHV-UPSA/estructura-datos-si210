#include "ColaCircular.h"

ColaCircular::ColaCircular(void)
{
	frente = -1;
	final = -1;
}

bool ColaCircular::vacia()
{
	return frente == final;
}

bool ColaCircular::llena()
{
	return frente == ((final + 1) % N);
}

bool ColaCircular::insertar(Nodo nodo)
{
	if (llena())
		return false;

	final = (final + 1) % N;
	c[final] = nodo;
	return true;
}

bool ColaCircular::eliminar(Nodo& nodo)
{
	if (vacia())
		return false;

	frente = (frente + 1) % N;
	nodo = c[frente];
	return true;
}

int ColaCircular::getFrente()
{
	return (frente + 1) % N;
}

ColaCircular ColaCircular::thisCola()
{
	return *this;
}

void ColaCircular::thisCola(ColaCircular cola)
{
	*this = cola;
}

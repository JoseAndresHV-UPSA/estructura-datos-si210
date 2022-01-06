#include "Pila.h"

Pila::Pila(void)
{
	tope = -1;
}

int Pila::getTope()
{
	return tope;
}

bool Pila::vacia()
{
	return tope == -1;
}

bool Pila::llena()
{
	return tope == N;
}

bool Pila::insertar(Nodo n)
{
	if (llena())
		return false;

	tope++;
	p[tope] = n;
	return true;
}

bool Pila::eliminar(Nodo& n)
{
	if(vacia())
		return false;

	n = p[tope];
	tope--;
	return true;
}

Pila Pila::thisPila()
{
	return *this;
}

void Pila::thisPila(Pila pila)
{
	*this = pila;
}

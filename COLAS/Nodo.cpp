#include "Nodo.h"

Nodo::Nodo(void)
{
	dato = -1;
	nombre = "";
}

Nodo::Nodo(int d, string n)
{
	dato = d;
	nombre = n;
}

int Nodo::getDato()
{
	return dato;
}

void Nodo::setDato(int val)
{
	dato = val;
}

string Nodo::getNombre()
{
	return nombre;
}

void Nodo::setNombre(int val)
{
	nombre = val;
}

Nodo Nodo::thisNodo()
{
	return *this;
}

void Nodo::thisNodo(Nodo nodo)
{
	*this = nodo;
}
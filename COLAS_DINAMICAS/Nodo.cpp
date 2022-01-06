#include "Nodo.h"

Nodo::Nodo(void)
{
	dato = -1;
	nombre = "";
	siguiente = NULL;
}

Nodo::Nodo(int d, string n)
{
	dato = d;
	nombre = n;
	siguiente = NULL;
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

void Nodo::setNombre(int nom)
{
	nombre = nom;
}

Nodo* Nodo::getSiguiente()
{
	return siguiente;
}

void Nodo::setSiguiente(Nodo* sig)
{
	siguiente = sig;
}

Nodo* Nodo::thisPtr()
{
	return new Nodo(dato, nombre);
}

Nodo Nodo::thisNodo()
{
	return *this;
}

void Nodo::thisNodo(Nodo nodo)
{
	*this = nodo;
}
#include "ColaDinamica.h"

ColaDinamica::ColaDinamica(void)
{
	raiz = NULL;
	fondo = NULL;
}

void ColaDinamica::enqueue(Nodo nodo)
{
	Nodo* nuevo = nodo.thisPtr();
	nuevo->setSiguiente(NULL);

	if (empty())
	{
		raiz = nuevo;
		fondo = nuevo;
	}
	else
	{
		fondo->setSiguiente(nuevo);
		fondo = nuevo;
	}
}

Nodo ColaDinamica::dequeue()
{
	if (empty())
		return Nodo();

	Nodo p = raiz->thisNodo();

	if (raiz == fondo)
	{
		raiz = NULL;
		fondo = NULL;
	}
	else
	{
		raiz = raiz->getSiguiente();
	}

	return p;
}

Nodo ColaDinamica::peak()
{
	if (empty())
		return Nodo();

	Nodo p = raiz->thisNodo();
	return p;
}

int ColaDinamica::size()
{
	Nodo* aux = raiz;
	int cont = 0;

	while (aux != NULL)
	{
		cont++;
		aux = aux->getSiguiente();
	}

	return cont;
}

bool ColaDinamica::empty()
{
	return raiz == NULL;
}

ColaDinamica ColaDinamica::thisCola()
{
	return *this;
}

void ColaDinamica::thisCola(ColaDinamica cola)
{
	*this = cola;
}

#include "PilaDinamica.h"

PilaDinamica::PilaDinamica(void)
{
	raiz = NULL;
}

void PilaDinamica::push(Nodo nodo)
{
	Nodo* nuevo = nodo.thisPtr();

	if (empty())
	{
		raiz = nuevo;
		nuevo->setSiguiente(NULL);
	}
	else
	{
		nuevo->setSiguiente(raiz);
		raiz = nuevo;
	}
}

Nodo PilaDinamica::pop()
{
	if (empty())
		return Nodo();

	Nodo p = raiz->thisNodo();
	raiz = raiz->getSiguiente();
	return p;
}

Nodo PilaDinamica::top()
{
	if (empty())
		return Nodo();

	Nodo p = raiz->thisNodo();
	return p;
}

int PilaDinamica::size()
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

bool PilaDinamica::empty()
{
	return raiz == NULL;
}

PilaDinamica PilaDinamica::thisPila()
{
	return *this;
}

void PilaDinamica::thisPila(PilaDinamica pila)
{
	*this = pila;
}

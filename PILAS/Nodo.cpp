#include "pch.h"
#include "Nodo.h"

int Nodo::getDato()
{
    return dato;
}

void Nodo::setDato(int v)
{
    dato = v;
}

Nodo::Nodo(void)
{
    dato = -1;
}

Nodo::Nodo(int d)
{
    dato = d;
}

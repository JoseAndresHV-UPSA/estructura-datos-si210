#include "Entero.h"

Entero::Entero(void)
{
	entero = 0;
}

Entero::Entero(int n)
{
	entero = n;
}

int Entero::getEntero()
{
	return entero;
}

void Entero::setEntero(int n)
{
	entero = n;
}

void Entero::thisEntero(Entero n)
{
	*this = n;
}

Entero Entero::thisEntero()
{
	return *this;
}
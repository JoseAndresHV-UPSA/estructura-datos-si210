#include "pch.h"
#include "Numero.h"

int Numero::getNumero()
{
    return num;
}

void Numero::setNumero(int n)
{
    num = n;
}

Numero::Numero(void)
{
    num = 0;
}

void Numero::thisNumero(Numero n)
{
    *this = n;
}

Numero Numero::thisNumero()
{
    return *this;
}

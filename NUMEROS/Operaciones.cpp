#include "pch.h"
#include "Operaciones.h"
#include <limits.h>

Operaciones::Operaciones(void)
{
}

int Operaciones::invertido()
{
    int result = 0;
    int n = getNumero();
    while (n != 0)
    {
        int dig = n % 10;
        result = result * 10 + dig;

        n /= 10;
    }

    return result;
}

void Operaciones::invertir()
{
    setNumero(invertido());
}

int Operaciones::mayorDigito()
{
    int mayor = INT_MIN;
    int n = getNumero();
    while (n != 0)
    {
        int dig = n % 10;

        if (dig > mayor)
            mayor = dig;

        n /= 10;
    }
    return mayor;
}

int Operaciones::menorDigito()
{
    int menor = INT_MAX;
    int n = getNumero();
    while (n != 0)
    {
        int dig = n % 10;

        if (dig < menor)
            menor = dig;

        n /= 10;
    }
    return menor;
}

int Operaciones::cantDigitos()
{
    int n = getNumero();
    if (n == 0)
        return 1;

    int cont = 0;
    while (n != 0)
    {
        cont++;
        n /= 10;
    }
    return cont;
}

int Operaciones::contar(int d)
{
    int n = getNumero();
    if (n == 0 && d == 0)
        return 1;
        
    int cont = 0;
    while (n != 0) 
    {
        int dig = n % 10;
        if (dig == d)
            cont++;
        
        n /= 10;
    }
    return cont;
}

int Operaciones::sumaDigitos()
{
    int suma = 0;
    int n = getNumero();
    while (n != 0)
    {
        int dig = n % 10;
        suma += dig;

        n /= 10;
    }
    return suma;
}

bool Operaciones::esCapicua()
{
    int num = getNumero();
    int inv = invertido();
    return num == inv;
}

int Operaciones::crapulo()
{
    Operaciones num;
    num.setNumero(getNumero());

    int suma = num.sumaDigitos();
    while (suma >= 10)
    {
        num.setNumero(suma);
        suma = num.sumaDigitos();
    }

    return suma;
}

int Operaciones::ordenado()
{
    int result = 0;
    int n = getNumero();
    for (int dig = 0; dig <= 9; dig++)
    {
        int aux = n;
        while (aux != 0)
        {
            if (aux % 10 == dig)
                result = result * 10 + dig;

            aux /= 10;
        }
    }
    return result;
}

int Operaciones::eliminarDigito(int d)
{
    int result = 0;
    int p = 1;
    int n = getNumero();
    while (n != 0)
    {
        int dig = n % 10;

        if (dig != d)
        {
            result += dig * p;
            p *= 10;
        }

        n /= 10;
    }

    return result;
}

int Operaciones::repetidos()
{
    int n = getNumero();
    int result = 0;
    int p = 1;
    while (n != 0)
    {
        int dig = n % 10;

        if (contar(dig) > 1)
        {
            result += dig * p;
            p *= 10;
        }

        n /= 10;
    }

    return result;
}

int Operaciones::sinRepetidos()
{
    int n = getNumero();
    int result = 0;
    int p = 1;
    while (n != 0)
    {
        int dig = n % 10;

        if (contar(dig) == 1)
        {
            result += dig * p;
            p *= 10;
        }

        n /= 10;
    }

    return result;
}

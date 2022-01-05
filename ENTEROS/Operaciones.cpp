#include "Operaciones.h"
#include <limits.h>

Operaciones::Operaciones(void)
{
}

Operaciones::Operaciones(Entero n)
{
	thisEntero(n);
}

void Operaciones::guardar(TextBox^ tb)
{
	int n = Convert::ToInt32(tb->Text);
	setEntero(n);
}

void Operaciones::mostrar(TextBox^ tb)
{
	int n = getEntero();
	tb->Text = Convert::ToString(n);
}

Entero Operaciones::invertido()
{
	int result = 0;
	int n = getEntero();
	while (n != 0)
	{
		int dig = n % 10;
		result = result * 10 + dig;

		n /= 10;
	}

	return Entero(result);
}

void Operaciones::invertir()
{
	Entero n = invertido();
	thisEntero(n);
}

Entero Operaciones::mayorDigito()
{
	int mayor = INT_MIN;
	int n = getEntero();
	while (n != 0)
	{
		int dig = n % 10;

		if (dig > mayor)
			mayor = dig;

		n /= 10;
	}
	return Entero(mayor);
}

Entero Operaciones::menorDigito()
{
	int menor = INT_MAX;
	int n = getEntero();
	while (n != 0)
	{
		int dig = n % 10;

		if (dig < menor)
			menor = dig;

		n /= 10;
	}
	return Entero(menor);
}

Entero Operaciones::cantDigitos()
{
	int n = getEntero();
	if (n == 0)
		return 1;

	int cont = 0;
	while (n != 0)
	{
		cont++;
		n /= 10;
	}
	return Entero(cont);
}

Entero Operaciones::contar(Entero d)
{
	int n = getEntero();
	if (n == 0 && d.getEntero() == 0)
		return 1;

	int cont = 0;
	while (n != 0)
	{
		int dig = n % 10;
		if (dig == d.getEntero())
			cont++;

		n /= 10;
	}
	return Entero(cont);
}

Entero Operaciones::sumaDigitos()
{
	int suma = 0;
	int n = getEntero();
	while (n != 0)
	{
		int dig = n % 10;
		suma += dig;

		n /= 10;
	}
	return Entero(suma);
}

bool Operaciones::esCapicua()
{
	int num = getEntero();
	Entero inv = invertido();
	return num == inv.getEntero();
}

Entero Operaciones::crapulo()
{
	Operaciones n = Operaciones(getEntero());
	Entero aux = n.sumaDigitos();
	int suma = aux.getEntero();
	while (suma >= 10)
	{
		n.setEntero(suma);

		aux = n.sumaDigitos();
		suma = aux.getEntero();
	}

	return Entero(suma);
}

Entero Operaciones::ordenado()
{
	int result = 0;
	int n = getEntero();
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
	return Entero(result);
}

Entero Operaciones::eliminarDigito(Entero d)
{
	int result = 0;
	int p = 1;
	int n = getEntero();
	while (n != 0)
	{
		int dig = n % 10;

		if (dig != d.getEntero())
		{
			result += dig * p;
			p *= 10;
		}

		n /= 10;
	}

	return Entero(result);
}

Entero Operaciones::repetidos()
{
	int n = getEntero();
	int result = 0;
	int p = 1;
	while (n != 0)
	{
		int dig = n % 10;
		Entero cant = contar(dig);

		if (cant.getEntero() > 1)
		{
			result += dig * p;
			p *= 10;
		}

		n /= 10;
	}

	return Entero(result);
}

Entero Operaciones::sinRepetidos()
{
	int n = getEntero();
	int result = 0;
	int p = 1;
	while (n != 0)
	{
		int dig = n % 10;
		Entero cant = contar(dig);

		if (cant.getEntero() == 1)
		{
			result += dig * p;
			p *= 10;
		}

		n /= 10;
	}

	return Entero(result);
}
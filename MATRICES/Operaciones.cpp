#include "pch.h"
#include "Operaciones.h"

bool Operaciones::esTriangularSup()
{
	int n = getFilas(), m = getColums();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = getValor(i, j);
			if (i > j && val != 0)
				return false;
		}
	}
	return true;
}

Operaciones Operaciones::transpuesta()
{
	Operaciones t;
	int n = getFilas(), m = getColums();
	t.setFilas(n);
	t.setColums(m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = getValor(i, j);
			t.setValor(val, j, i);
		}
	}
	return t;
}

void Operaciones::ordenar()
{
	int n = getFilas(), m = getColums();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < m; l++)
				{
					int val1 = getValor(i, j);
					int val2 = getValor(k, l);
					if (val2 > val1)
					{
						setValor(val2, i, j);
						setValor(val1, k, l);
					}
				}
			}
		}
	}
}

bool Operaciones::existerValor(int valor)
{
	int n = getFilas(), m = getColums();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = getValor(i, j);
			if (val == valor)
				return true;
		}
	}
	return false;
}

int Operaciones::contarValor(int valor)
{
	int cant = 0;
	int n = getFilas(), m = getColums();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = getValor(i, j);
			if (val == valor)
				cant++;
		}
	}
	return cant;
}

void Operaciones::sumarFilas()
{
	int n = getFilas(), m = getColums();
	setColums(m + 1);
	for (int i = 0; i < n; i++)
	{
		int suma = 0;
		for (int j = 0; j < m; j++)
		{
			suma += getValor(i, j);
		}
		setValor(suma, i, m);
	}
}

void Operaciones::sumarColums()
{
	int n = getFilas(), m = getColums();
	setFilas(n + 1);
	for (int i = 0; i < n; i++)
	{
		int suma = 0;
		for (int j = 0; j < m; j++)
		{
			suma += getValor(j, i);
		}
		setValor(suma, n, i);
	}
}

Operaciones Operaciones::sumar(Operaciones m2)
{
	Operaciones result;
	int f1 = getFilas(), c1 = getColums();
	int f2 = m2.getFilas(), c2 = m2.getColums();
	if (f1 == f2 && c1 == c2)
	{
		result.setFilas(f1);
		result.setColums(c1);
		for (int i = 0; i < f1; i++)
		{
			for (int j = 0; j < c1; j++)
			{
				int suma = getValor(i, j) + m2.getValor(i, j);
				result.setValor(suma, i, j);
			}
		}
	}

	return result;
}

Operaciones Operaciones::multiplicar(Operaciones m2)
{
	Operaciones result;
	int f1 = getFilas(), c1 = getColums();
	int f2 = m2.getFilas(), c2 = m2.getColums();
	if (c1 == f2)
	{
		result.setFilas(f1);
		result.setColums(c2);
		for (int i = 0; i < f1; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				int suma = 0;
				for (int k = 0; k < c1; k++)
				{
					suma += getValor(i, k) * m2.getValor(k, j);
				}
				result.setValor(suma, i, j);
			}
		}
	}

	return result;
}

void Operaciones::limpiar()
{
	setFilas(0);
	setColums(0);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
		{
			setValor(0, i, j);
		}
	}
}

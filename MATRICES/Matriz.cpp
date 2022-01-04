#include "pch.h"
#include "Matriz.h"

Matriz::Matriz(void)
{
	filas = 0;
	colums = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
		{
			m[i][j] = 0;
		}
	}
}

int Matriz::getFilas()
{
	return filas;
}

void Matriz::setFilas(int f)
{
	filas = f;
}

int Matriz::getColums()
{
	return colums;
}

void Matriz::setColums(int c)
{
	colums = c;
}

int Matriz::getValor(int f, int c)
{
	return m[f][c];
}

void Matriz::setValor(int val, int f, int c)
{
	m[f][c] = val;
}

Matriz Matriz::thisMatriz()
{
	return *this;
}

void Matriz::thisMatriz(Matriz matriz)
{
	*this = matriz;
}

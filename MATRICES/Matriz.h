#pragma once

const int N = 20;
const int M = 20;

class Matriz
{
private:
	int filas;
	int colums;
	int m[N][M];

public:
	Matriz(void);

	int getFilas();
	void setFilas(int f);
	int getColums();
	void setColums(int c);
	int getValor(int f, int c);
	void setValor(int val, int f, int c);

	Matriz thisMatriz();
	void thisMatriz(Matriz matriz);
};


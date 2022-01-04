#pragma once

const int N = 100;

class Vector
{
private:
	int v[N];
	int n;

public:
	int getValor(int pos);
	void setValor(int val, int pos);
	int tamano();
	void tamano(int t);

	Vector(void);

	void thisVector(Vector vector);
	Vector thisVector();
};


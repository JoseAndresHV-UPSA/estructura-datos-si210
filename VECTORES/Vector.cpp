#include "Vector.h"

Vector::Vector(void)
{
	n = 0;
	for (int i = 0; i < N; i++)
		v[i] = 0;
}

int Vector::getValor(int pos)
{
	return v[pos];
}

void Vector::setValor(int val, int pos)
{
	v[pos] = val;
}

int Vector::tamano()
{
	return n;
}

void Vector::tamano(int t)
{
	n = t;
}

void Vector::thisVector(Vector vector)
{
	*this = vector;
}

Vector Vector::thisVector()
{
	return *this;
}
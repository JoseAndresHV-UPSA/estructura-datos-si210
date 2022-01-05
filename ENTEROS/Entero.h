#pragma once
class Entero
{
private:
	int entero;

public:
	Entero(void);
	Entero(int n);

	int getEntero();
	void setEntero(int n);

	void thisEntero(Entero n);
	Entero thisEntero();
};


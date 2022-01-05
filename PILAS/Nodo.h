#pragma once
#include <string>

using namespace std;

class Nodo
{
private:
	int dato;

public:
	int getDato();
	void setDato(int val);

	Nodo(void);
	Nodo(int d);
};


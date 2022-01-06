#pragma once
#include <string>

using namespace std;

class Nodo
{
private:
	int dato;
	string nombre;

public:
	Nodo(void);
	Nodo(int d, string n);

	int getDato();
	void setDato(int val);
	string getNombre();
	void setNombre(int val);

	Nodo thisNodo();
	void thisNodo(Nodo nodo);
};


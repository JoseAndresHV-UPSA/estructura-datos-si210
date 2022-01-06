#pragma once
#include <string>

using namespace std;

class Nodo
{
private:
	int dato;
	string nombre;
	Nodo* siguiente;

public:
	Nodo(void);
	Nodo(int d, string n);

	int getDato();
	void setDato(int val);
	string getNombre();
	void setNombre(int nom);
	Nodo* getSiguiente();
	void setSiguiente(Nodo* sig);

	Nodo* thisPtr();
	Nodo thisNodo();
	void thisNodo(Nodo nodo);
};

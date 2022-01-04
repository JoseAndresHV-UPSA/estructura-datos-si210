#pragma once
#include "Numero.h"

class Operaciones : public Numero
{
public:
	Operaciones(void);

	int invertido();
	void invertir();
	int mayorDigito();
	int menorDigito();
	int cantDigitos();
	int contar(int d);
	int sumaDigitos();
	bool esCapicua();
	int crapulo();
	int ordenado();
	int eliminarDigito(int d);
	int repetidos();
	int sinRepetidos();
};


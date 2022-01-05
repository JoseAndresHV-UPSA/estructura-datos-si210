#pragma once
#include "Entero.h"

using namespace System;
using namespace System::Windows::Forms;

class Operaciones : public Entero
{
public:
	Operaciones(void);
	Operaciones(Entero n);

	void guardar(TextBox^ tb);
	void mostrar(TextBox^ tb);

	Entero invertido();
	void invertir();
	Entero mayorDigito();
	Entero menorDigito();
	Entero cantDigitos();
	Entero contar(Entero d);
	Entero sumaDigitos();
	bool esCapicua();
	Entero crapulo();
	Entero ordenado();
	Entero eliminarDigito(Entero d);
	Entero repetidos();
	Entero sinRepetidos();
};


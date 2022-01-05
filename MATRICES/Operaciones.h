#pragma once
#include "Matriz.h"

using namespace System;
using namespace System::Windows::Forms;

class Operaciones : public Matriz
{
public:
	Operaciones(void);
	Operaciones(Matriz matriz);

	void guardar(DataGridView^ dgv);
	void mostrar(DataGridView^ dgv);
	void dimensionar(DataGridView^ dgv, TextBox^ tbFilas, TextBox^ tbCols);
	void limpiar(DataGridView^ dgv);

	bool esTriangularSup();
	Matriz transpuesta();
	void ordenar();
	bool existerValor(int valor);
	int contarValor(int valor);
	void sumarFilas();
	void sumarColumnas();
	Matriz sumar(Matriz matriz);
	Matriz multiplicar(Matriz matriz);
};


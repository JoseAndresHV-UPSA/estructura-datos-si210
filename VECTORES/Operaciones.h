#pragma once
#include "Vector.h"

using namespace System;
using namespace System::Windows::Forms;

class Operaciones : public Vector
{
public:
	Operaciones(void);
	Operaciones(Vector vector);

	void guardar(DataGridView^ dgv);
	void mostrar(DataGridView^ dgv);
	void dimensionar(DataGridView^ dgv, TextBox^ tb);
	void limpiar(DataGridView^ dgv);

	void ordenar();
	void invertir();
	bool existe(int val);
	void eliminarPos(int p);
};


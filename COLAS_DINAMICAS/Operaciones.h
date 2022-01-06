#pragma once
#include "ColaDinamica.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;

class Operaciones : public ColaDinamica
{
public:
	Operaciones(void);
	Operaciones(ColaDinamica cola);

	void guardar(DataGridView^ dgv);
	void mostrar(DataGridView^ dgv);
	void dimensionar(DataGridView^ dgv, TextBox^ tb);
	void limpiar(DataGridView^ dgv);

	int contar();
	bool existe(Nodo n);
	void eliminarRepetidos();
	ColaDinamica invertida();
};


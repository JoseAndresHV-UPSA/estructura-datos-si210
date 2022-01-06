#pragma once
#include "PilaDinamica.h"
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;

class Operaciones : public PilaDinamica
{
public:
	Operaciones(void);
	Operaciones(PilaDinamica pila);

	void guardar(DataGridView^ dgv);
	void mostrar(DataGridView^ dgv);
	void dimensionar(DataGridView^ dgv, TextBox^ tb);
	void limpiar(DataGridView^ dgv);

	void ordenar();
	bool existe(Nodo n);
	PilaDinamica invertida();
};


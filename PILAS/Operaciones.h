#pragma once
#include "Pila.h";
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace msclr::interop;

class Operaciones : public Pila
{
public:
	Operaciones(void);
	Operaciones(Pila pila);

	void guardar(DataGridView^ dgv);
	void mostrar(DataGridView^ dgv);
	void dimensionar(DataGridView^ dgv, TextBox^ tb);
	void limpiar(DataGridView^ dgv);

	int contar();
	void ordenar();
	bool existe(Nodo n);
	Pila invertida();
};


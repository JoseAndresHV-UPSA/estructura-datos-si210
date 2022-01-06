#include "Operaciones.h"

Operaciones::Operaciones(void)
{
}

Operaciones::Operaciones(Cola cola)
{
	thisCola(cola);
}

void Operaciones::guardar(DataGridView^ dgv)
{
	int n = dgv->ColumnCount;

	for (int i = 0; i < n; i++)
	{
		int dato = Convert::ToInt32(dgv->Rows[0]->Cells[i]->Value);
		string nombre = marshal_as<string>(Convert::ToString(dgv->Rows[1]->Cells[i]->Value));
		insertar(Nodo(dato, nombre));
	}
}

void Operaciones::mostrar(DataGridView^ dgv)
{
	int n = contar();
	dgv->RowCount = 2;
	dgv->ColumnCount = n;

	Cola aux = thisCola();
	int i = 0;

	while (!aux.vacia())
	{
		Nodo tmp;
		aux.eliminar(tmp);
		dgv->Rows[0]->Cells[i]->Value = tmp.getDato();
		dgv->Rows[1]->Cells[i]->Value = marshal_as<String^>(tmp.getNombre());

		i++;
	}
}

void Operaciones::dimensionar(DataGridView^ dgv, TextBox^ tb)
{
	int tam = Convert::ToInt32(tb->Text);
	dgv->RowCount = 2;
	dgv->ColumnCount = tam;
}

void Operaciones::limpiar(DataGridView^ dgv)
{
	dgv->RowCount = 0;
	dgv->ColumnCount = 0;
	thisCola(Cola());
}

int Operaciones::contar()
{
	Cola aux = thisCola();
	int cont = 0;

	while (!aux.vacia())
	{
		Nodo n;
		aux.eliminar(n);
		cont++;
	}

	return cont;
}

bool Operaciones::existe(Nodo n)
{
	Cola aux = thisCola();

	while (!aux.vacia())
	{
		Nodo tmp;
		aux.eliminar(tmp);
		int dato = tmp.getDato();
		string nombre = tmp.getNombre();

		if (dato == n.getDato() && nombre == n.getNombre())
			return true;
	}

	return false;
}

void Operaciones::eliminarRepetidos()
{
	Operaciones aux;

	while (!vacia())
	{
		Nodo tmp;
		eliminar(tmp);
		
		if (!aux.existe(tmp))
			aux.insertar(tmp);
	}

	thisCola(aux.thisCola());
}

Cola Operaciones::invertida()
{
	Cola inv;
	int n = contar();
	int c = n;

	for (int i = 0; i < n; i++)
	{
		Cola aux = thisCola();
		Nodo tmp;

		for (int j = 0; j < c; j++)
			aux.eliminar(tmp);

		inv.insertar(tmp);
		c--;
	}
		 
	return inv;
}

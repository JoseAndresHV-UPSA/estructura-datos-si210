#include "Operaciones.h"

Operaciones::Operaciones(void)
{
}

Operaciones::Operaciones(ColaDinamica cola)
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
		enqueue(Nodo(dato, nombre));
	}
}

void Operaciones::mostrar(DataGridView^ dgv)
{
	int n = contar();
	dgv->RowCount = 2;
	dgv->ColumnCount = n;

	ColaDinamica aux = thisCola();
	int i = 0;

	while (!aux.empty())
	{
		Nodo tmp = aux.dequeue();
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
	thisCola(ColaDinamica());
}

int Operaciones::contar()
{
	ColaDinamica aux = thisCola();
	int cont = 0;

	while (!aux.empty())
	{
		Nodo n = aux.dequeue();
		cont++;
	}

	return cont;
}

bool Operaciones::existe(Nodo n)
{
	ColaDinamica aux = thisCola();

	while (!aux.empty())
	{
		Nodo tmp = aux.dequeue();
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

	while (!empty())
	{
		Nodo tmp = dequeue();

		if (!aux.existe(tmp))
			aux.enqueue(tmp);
	}

	thisCola(aux.thisCola());
}

ColaDinamica Operaciones::invertida()
{
	ColaDinamica inv;
	int n = contar();
	int c = n;

	for (int i = 0; i < n; i++)
	{
		ColaDinamica aux = thisCola();
		Nodo tmp;

		for (int j = 0; j < c; j++)
			tmp = aux.dequeue();

		inv.enqueue(tmp);
		c--;
	}

	return inv;
}

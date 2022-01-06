#include "Operaciones.h"

Operaciones::Operaciones(void)
{
}

Operaciones::Operaciones(PilaDinamica pila)
{
	thisPila(pila);
}

void Operaciones::guardar(DataGridView^ dgv)
{
	int n = dgv->RowCount;

	for (int i = n - 1; i >= 0; i--)
	{
		int dato = Convert::ToInt32(dgv->Rows[i]->Cells[0]->Value);
		string nombre = marshal_as<string>(Convert::ToString(dgv->Rows[i]->Cells[1]->Value));
		push(Nodo(dato, nombre));
	}
}

void Operaciones::mostrar(DataGridView^ dgv)
{
	int n = size();
	dgv->RowCount = n;
	dgv->ColumnCount = 2;

	PilaDinamica aux = thisPila();
	int i = 0;
	while (!aux.empty())
	{
		Nodo tmp = aux.pop();
		dgv->Rows[i]->Cells[0]->Value = tmp.getDato();
		dgv->Rows[i]->Cells[1]->Value = marshal_as<String^>(tmp.getNombre());
		i++;
	}
}

void Operaciones::dimensionar(DataGridView^ dgv, TextBox^ tb)
{
	int tam = Convert::ToInt32(tb->Text);
	dgv->RowCount = tam;
	dgv->ColumnCount = 2;
}

void Operaciones::limpiar(DataGridView^ dgv)
{
	dgv->RowCount = 0;
	dgv->ColumnCount = 0;
	thisPila(PilaDinamica());
}

void Operaciones::ordenar()
{
	PilaDinamica aux;

	while (!empty())
	{
		Nodo orig = pop();
		int cod = orig.getDato();

		Nodo tmp = aux.pop();
		int codAux = tmp.getDato();
		aux.push(tmp);

		while (!aux.empty() && codAux < cod)
		{
			Nodo p = aux.pop();
			push(p);
		}
		aux.push(orig);
	}
	aux.pop();
	thisPila(aux);
}

bool Operaciones::existe(Nodo n)
{
	PilaDinamica aux = thisPila();

	while (!aux.empty())
	{
		Nodo tmp = aux.pop();

		int dato = tmp.getDato();
		if (dato == n.getDato())
			return true;
	}

	return false;
}

PilaDinamica Operaciones::invertida()
{
	PilaDinamica inv;
	PilaDinamica aux = thisPila();

	while (!aux.empty())
	{
		Nodo tmp = aux.pop();
		inv.push(tmp);
	}

	return inv;
}


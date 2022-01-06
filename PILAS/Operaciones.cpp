#include "Operaciones.h"

Operaciones::Operaciones(void)
{
}

Operaciones::Operaciones(Pila pila)
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
		insertar(Nodo(dato, nombre));
	}
}

void Operaciones::mostrar(DataGridView^ dgv)
{
	int n = getTope() + 1;
	dgv->RowCount = n;
	dgv->ColumnCount = 2;
	Pila aux = thisPila();
	int i = 0;
	while (!aux.vacia())
	{
		Nodo tmp;
		aux.eliminar(tmp);
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
	thisPila(Pila());
}

int Operaciones::contar()
{
	Pila aux = thisPila();
	int cont = 0;

	while (!aux.vacia())
	{
		Nodo n;
		aux.eliminar(n);
		cont++;
	}

	return cont;
}

void Operaciones::ordenar()
{
	Pila aux;
	while (!vacia())
	{
		Nodo orig;
		eliminar(orig);
		int cod = orig.getDato();

		Nodo tmp;
		aux.eliminar(tmp);
		int codAux = tmp.getDato();
		aux.insertar(tmp);

		while (!aux.vacia() && codAux < cod)
		{
			Nodo p;
			aux.eliminar(p);
			insertar(p);
		}
		aux.insertar(orig);
	}
	aux.eliminar(Nodo());
	thisPila(aux);
}

bool Operaciones::existe(Nodo n)
{
	Pila aux = thisPila();
	while (!aux.vacia())
	{
		Nodo tmp;
		aux.eliminar(tmp);

		int dato = tmp.getDato();
		if (dato == n.getDato())
			return true;
	}

	return false;
}

Pila Operaciones::invertida()
{
	Pila inv;
	Pila aux = thisPila();
	while (!aux.vacia())
	{
		Nodo tmp;
		aux.eliminar(tmp);
		inv.insertar(tmp);
	}

	return inv;
}

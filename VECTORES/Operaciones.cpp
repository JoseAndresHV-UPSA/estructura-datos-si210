#include "Operaciones.h"

Operaciones::Operaciones(void)
{
}

Operaciones::Operaciones(Vector vector)
{
	thisVector(vector);
}

void Operaciones::guardar(DataGridView^ dgv)
{
	int n = dgv->ColumnCount;
	tamano(n);
	for (int i = 0; i < n; i++)
	{
		int val = Convert::ToInt32(dgv->Rows[0]->Cells[i]->Value);
		setValor(val, i);
	}
}

void Operaciones::mostrar(DataGridView^ dgv)
{
	int n = tamano();
	dgv->ColumnCount = n;
	dgv->RowCount = 1;
	for (int i = 0; i < n; i++)
	{
		dgv->Rows[0]->Cells[i]->Value = getValor(i);
	}
}

void Operaciones::dimensionar(DataGridView^ dgv, TextBox^ tb)
{
	int n = (Convert::ToInt32(tb->Text));
	dgv->ColumnCount = n;
	dgv->RowCount = 1;
}

void Operaciones::limpiar(DataGridView^ dgv)
{
	dgv->ColumnCount = 0;
	thisVector(Vector());
}

void Operaciones::ordenar()
{
	int n = tamano();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			int act = getValor(j);
			int sig = getValor(j + 1);

			if (act > sig) {
				setValor(sig, j);
				setValor(act, j + 1);
			}
		}
	}
}

void Operaciones::invertir()
{
	int n = tamano();
	int j = n - 1;
	for (int i = 0; i < n / 2; i++)
	{
		int act = getValor(i);
		int sig = getValor(j);

		setValor(sig, i);
		setValor(act, j);

		j--;
	}
}

bool Operaciones::existe(int val)
{
	int n = tamano();
	for (int i = 0; i < n; i++)
	{
		int valor = getValor(i);
		if (valor == val)
			return true;
	}
	return false;
}

void Operaciones::eliminarPos(int p)
{
	int n = tamano();
	for (int i = p; i < n - 1; i++)
	{
		int sig = getValor(i + 1);
		setValor(sig, i);
	}
	setValor(0, n - 1);
	tamano(n - 1);
}
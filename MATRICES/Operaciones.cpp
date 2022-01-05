#include "Operaciones.h"

Operaciones::Operaciones(void)
{
}

Operaciones::Operaciones(Matriz matriz)
{
	thisMatriz(matriz);
}

void Operaciones::guardar(DataGridView^ dgv)
{
	int n = dgv->RowCount;
	int m = dgv->ColumnCount;
	setFilas(n);
	setColumnas(m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = Convert::ToInt32(dgv->Rows[i]->Cells[j]->Value);
			setValor(val, i, j);
		}
	}
}

void Operaciones::mostrar(DataGridView^ dgv)
{
	int n = getFilas();
	int m = getColumnas();
	dgv->RowCount = n;
	dgv->ColumnCount = m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = getValor(i, j);
			dgv->Rows[i]->Cells[j]->Value = val;
		}
	}
}

void Operaciones::dimensionar(DataGridView^ dgv, TextBox^ tbFilas, TextBox^ tbCols)
{
	int n = Convert::ToInt32(tbFilas->Text);
	int m = Convert::ToInt32(tbCols->Text);
	dgv->RowCount = n;
	dgv->ColumnCount = m;
}

void Operaciones::limpiar(DataGridView^ dgv)
{
	dgv->RowCount = 0;
	dgv->ColumnCount = 0;
	thisMatriz(Matriz());
}

bool Operaciones::esTriangularSup()
{
	int n = getFilas(), m = getColumnas();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = getValor(i, j);
			if (i > j && val != 0)
				return false;
		}
	}
	return true;
}

Matriz Operaciones::transpuesta()
{
	Matriz t;
	int n = getFilas(), m = getColumnas();
	t.setFilas(m);
	t.setColumnas(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = getValor(i, j);
			t.setValor(val, j, i);
		}
	}
	return t;
}

void Operaciones::ordenar()
{
	int n = getFilas();
	int m = getColumnas();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < m; l++)
				{
					int val1 = getValor(i, j);
					int val2 = getValor(k, l);

					if (val2 > val1)
					{
						setValor(val2, i, j);
						setValor(val1, k, l);
					}
				}
			}
		}
	}
}

bool Operaciones::existerValor(int valor)
{
	int n = getFilas();
	int m = getColumnas();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = getValor(i, j);

			if (val == valor)
				return true;
		}
	}
	return false;
}

int Operaciones::contarValor(int valor)
{
	int cant = 0;
	int n = getFilas();
	int m = getColumnas();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val = getValor(i, j);

			if (val == valor)
				cant++;
		}
	}
	return cant;
}

void Operaciones::sumarFilas()
{
	int n = getFilas();
	int m = getColumnas();
	setColumnas(m + 1);

	for (int i = 0; i < n; i++)
	{
		int suma = 0;

		for (int j = 0; j < m; j++)
			suma += getValor(i, j);

		setValor(suma, i, m);
	}
}

void Operaciones::sumarColumnas()
{
	int n = getFilas();
	int m = getColumnas();
	setFilas(n + 1);

	for (int i = 0; i < n; i++)
	{
		int suma = 0;

		for (int j = 0; j < m; j++)
			suma += getValor(j, i);

		setValor(suma, n, i);
	}
}

Matriz Operaciones::sumar(Matriz matriz)
{
	Matriz result;
	int n1 = getFilas();
	int m1 = getColumnas();
	int n2 = matriz.getFilas();
	int m2 = matriz.getColumnas();

	if (n1 == n2 && m1 == m2)
	{
		result.setFilas(n1);
		result.setColumnas(m1);

		for (int i = 0; i < n1; i++)
		{
			for (int j = 0; j < m1; j++)
			{
				int suma = getValor(i, j) + matriz.getValor(i, j);
				result.setValor(suma, i, j);
			}
		}
	}

	return result;
}

Matriz Operaciones::multiplicar(Matriz matriz)
{
	Matriz result;
	int n1 = getFilas();
	int m1 = getColumnas();
	int n2 = matriz.getFilas();
	int m2 = matriz.getColumnas();

	if (m1 == n2)
	{
		result.setFilas(n1);
		result.setColumnas(m2);

		for (int i = 0; i < n1; i++)
		{
			for (int j = 0; j < m2; j++)
			{
				int suma = 0;
				for (int k = 0; k < m1; k++)
					suma += getValor(i, k) * matriz.getValor(k, j);

				result.setValor(suma, i, j);
			}
		}
	}

	return result;
}

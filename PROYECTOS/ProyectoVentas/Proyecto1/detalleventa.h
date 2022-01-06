#pragma once
#include <iostream>
#include "conio.h"
#include <string>
#include <msclr\marshal_cppstd.h>


using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;

class detalleventa
{	
	int idVenta;
	int idProducto;
	int cantidad;
	int precioVenta;
	
public:
	detalleventa(void);

	void setIdVenta(int n);
	int getIdVenta();

	void setIdProducto(int n);
	int getIdProducto();

	void setCantidad(int n);
	int getCantidad();

	void setPrecioVenta(int n);
	int getPrecioVenta();

	void cargar(int tidventa,int tidproducto,int tcantidad,int tprecioventa);
	void mostrar(TextBox^ tbuscar,DataGridView^ grilla_b_detalleventa);
	void guardar();
	
	void objetoGrilla(DataGridView^ grilla_b_detalleventa,int i);
	
	void resetGrilla(DataGridView^ grilla_b_detalleventa);
	//void buscarCliente(TextBox^ tbuscar,DataGridView^ grilla_b_cliente);
	//void buscarClienteApellido(TextBox^ tbuscar,DataGridView^ grilla_b_cliente);	
		
};


#pragma once
#include <iostream>
#include "conio.h"
#include <string>
#include <msclr\marshal_cppstd.h>

const int MAXIMO=50;
using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;

class venta
{	
	int idVenta;
	char fecha[MAXIMO];
	int  monto;
	int idCliente;
	char estado;

  public:
	venta(void);
	void setIdVenta(int n);
	int getIdVenta();

	void setFecha(char *t);
	string getFecha();

	void setMonto(int n);
	int getMonto();

	void setIdCliente(int n);
	int getIdCliente();

	void setEstado(char t);
	char getEstado();

	int generarIdVenta();

	void cargar(TextBox^ tfecha,TextBox^ tmonto,TextBox^ tidcliente);
	void mostrar(DataGridView^ grilla_b_venta);
	void guardar();
	
	void objetoGrilla(DataGridView^ grilla_b_venta,int i);
	void resetGrilla(DataGridView^ grilla_b_venta);
	void buscar_id_venta(TextBox^ tbuscar,DataGridView^ grilla_venta);
	//void buscarCliente(TextBox^ tbuscar,DataGridView^ grilla_b_cliente);
	//void buscarClienteApellido(TextBox^ tbuscar,DataGridView^ grilla_b_cliente);	
	
	venta retornarId(int n);
	int retornarUltimoId();
};
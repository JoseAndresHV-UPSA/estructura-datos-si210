#pragma once
#include <iostream>
#include "conio.h"
#include <string>
#include <msclr\marshal_cppstd.h>

const int MAXI=50;
using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;

class producto
{
	int idProducto;
	char nombre[MAXI];
	int  precio;
	char estado;
public:
	producto(void);
	void setIdProducto(int n);
	int getIdProducto();
	void setNombre(char *t);
	string getNombre();
	void setPrecio(int n);
	int getPrecio();
	void setEstado(char t);
	char getEstado();

	int generarIdProducto();
	void cargar(TextBox^ tnombre,TextBox^ tprecio);
	void mostrar(DataGridView^ grilla_b_producto);
	void guardar();
	//void traer();
	void objetoGrilla(DataGridView^ grilla_b_producto,int i);
	void eliminarProducto(TextBox^ teliminar);
	void resetGrilla(DataGridView^ grilla_b_producto);
	void modificarProducto(TextBox^ tmodificar,TextBox^ tnombre,TextBox^ tprecio);
	void guardarModificado(TextBox^ tmodificar,TextBox^ tnombre,TextBox^ tprecio);
	void buscarProducto(TextBox^ tbuscar,DataGridView^ grilla_b_producto);	
	bool verificarIdExiste(TextBox^ tmodificar);
	void buscar_id_producto(TextBox^ tbuscar,DataGridView^ grilla_producto);
	producto obtenerNombreProducto(int id);
	producto retornarId(int n);
	producto retornarPrecio(int n);	
};
#pragma once
#include <iostream>
#include "conio.h"
#include <string>
#include <msclr\marshal_cppstd.h>

const int MAX=50;
using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;

class cliente
{
	int idCliente;
	char nombre[MAX];
	char apellidos[MAX];
	char email[MAX];
	int  telefono;
	char estado;
public:
	cliente(void);
	void setIdCliente(int n);
	int getIdCliente();
	void setNombre(char *t);
	string getNombre();
	void setApellidos(char *t);
	void setTelefono(int n);
	int getTelefono();
	string getApellidos();
	void setEmail(char *t);
	string getEmail();
	void setEstado(char t);
	char getEstado();

	int generarIdCliente();
	void cargar(TextBox^ tnombre,TextBox^ tapellidos,TextBox^ ttelefono,TextBox^ temail);
	void mostrar(DataGridView^ grilla_b_cliente);
	
	void guardar();
	//void traer();
	void objetoGrilla(DataGridView^ grilla_b_cliente,int i);
	void eliminarCliente(TextBox^ teliminar);
	void resetGrilla(DataGridView^ grilla_b_cliente);
	void modificarCliente(TextBox^ tmodificar,TextBox^ tnombre,TextBox^ tapellidos,TextBox^ temail,TextBox^ ttelefono);
	void guardarModificado(TextBox^ tmodificar,TextBox^ tnombre,TextBox^ tapellidos,TextBox^ temail,TextBox^ ttelefono);
	void buscarCliente(TextBox^ tbuscar,DataGridView^ grilla_b_cliente);
	void buscarClienteApellido(TextBox^ tbuscar,DataGridView^ grilla_b_cliente);	
	bool verificarIdExiste(TextBox^ tmodificar);
	void buscar_id_cliente(TextBox^ tbuscar,DataGridView^ grilla_cliente);

	cliente obtenerNombreCliente(int n);
	cliente retornarId(int n);
	cliente retornarTelefono(int n);
	cliente retornarApellidos(string n);	
};



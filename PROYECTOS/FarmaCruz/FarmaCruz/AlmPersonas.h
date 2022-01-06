#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "Personas.cpp"
#include <msclr\marshal_cppstd.h>

using namespace std;
using namespace msclr::interop;
using namespace System::Windows::Forms;
using namespace std;
class AlmPersonas
{
private:
	string AlmacenP;
	Personas *per;

public:
	AlmPersonas(string AlmP)
	{
		AlmacenP=AlmP;
	}
	void agregarDatos(Personas *newReg, DataGridView^ grilla, int i)
	{
		string Nombre;
		string Apellido;
		int celular;
		string fecha;
		string hora;
		Nombre= marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[0]->Value));
		Apellido= marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[1]->Value));
		celular=System::Convert::ToInt32(grilla->Rows[i]->Cells[2]->Value);
		fecha= marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[3]->Value));
		hora= marshal_as<std::string>(System::Convert::ToString(grilla->Rows[i]->Cells[4]->Value));
		newReg->setPersonas(Nombre,Apellido,celular,fecha,hora);
	}
	void Limpiar(DataGridView^ grilla)
	{
		for (int i=0;i<grilla->RowCount;i++)
		{
			grilla->Rows[i]->Cells[0]->Value="";
			grilla->Rows[i]->Cells[1]->Value="";
			grilla->Rows[i]->Cells[2]->Value="";
			grilla->Rows[i]->Cells[3]->Value="";
			grilla->Rows[i]->Cells[4]->Value="";
			grilla->Rows[i]->Cells[5]->Value="";
		}
	}
		void mostrarRegistro(int nroReg, DataGridView^  grilla, int i){
		if((per->getEstado()=="A") || (per->getEstado()=="E"))
		{ 
		 grilla->Rows[i]->Cells[0]->Value=marshal_as<System::String^>(per->getNombre());
		 grilla->Rows[i]->Cells[1]->Value=marshal_as<System::String^>(per->getApellido());
		 grilla->Rows[i]->Cells[2]->Value=System::Convert::ToString(per->getCelular());
	     grilla->Rows[i]->Cells[3]->Value=marshal_as<System::String^>(per->getFecha());
		 grilla->Rows[i]->Cells[4]->Value=marshal_as<System::String^>(per->getHora());
		 grilla->Rows[i]->Cells[5]->Value=marshal_as<System::String^>(per->getEstado());
		}
	}
		void adicionarNuevo(DataGridView^ grilla, int i)
	{
		ofstream fsalida(AlmacenP, ios::app | ios::binary);
		per = new Personas();

		agregarDatos(per,grilla,i);
		per->guardarArchivo(fsalida);
		fsalida.close();
	}
	void listar(DataGridView^  grilla_b) {
		int cr = 0;
		per = new Personas();
		ifstream fentrada(AlmacenP, ios::in | ios::binary);
		while (per->leerArchivo(fentrada) == true) 
		{
				mostrarRegistro(cr,grilla_b,cr);
				cr++;
		}
		grilla_b->RowCount=cr+1;
		fentrada.close();
	}
	int buscarReg(int nroReg, DataGridView^  grilla, int i) {
		
		per = new Personas();
		i=0;
		ifstream fentrada(AlmacenP, ios::in | ios::binary);
		if(per->buscar(fentrada,nroReg) == true) {
			mostrarRegistro(nroReg,grilla,i);			
		} else {
			
			nroReg=-1;
		}
		fentrada.close();
		return(nroReg);	
	}
	int buscarRegMod(int nroReg) {
		
		per = new Personas();
		ifstream fentrada(AlmacenP, ios::in | ios::binary);
		if(per->buscar(fentrada,nroReg) != true) 
		{
			nroReg=-1;
			
		} 
		fentrada.close();
		return(nroReg);
	}
	int  eliminarReg(int nroReg, DataGridView^ grilla, int i) 
	{
		nroReg = buscarReg(nroReg,grilla,i);
		if(nroReg > 0)
		{
			fstream fes(AlmacenP, ios::in | ios::out | ios::binary);
			per = new Personas();
			if (per->eliminar(fes, nroReg) == true) 
			{
				nroReg=nroReg;
				MessageBox::Show( "Registro eliminado correctmente ");
			} else 
			{
				nroReg=-1;
				MessageBox::Show( "Registro no existe para eliminar");
			}
			fes.close();
		}
		return nroReg;
	}
	int modificarReg(int nroReg, DataGridView^  grilla, int i) 
	{
		//AMIGOS *newReg;

	 	nroReg = buscarRegMod(nroReg);
		if(nroReg>0)
		{
			fstream fes(AlmacenP, ios::in | ios::out | ios::binary);
			per = new Personas();
			agregarDatos(per, grilla, i);
			if (per->modificar(fes, nroReg) == true) 
			{
				 
				MessageBox::Show("modificado correctamente... ");
				return nroReg;
			} 
			else 
			{

				MessageBox::Show( "Registro no existe para modificar");
				return -1;
			}
			fes.close();
		}
		else { return -1;}
		
	}


};


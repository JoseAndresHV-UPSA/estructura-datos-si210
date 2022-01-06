#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include "Almacen.cpp"
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace msclr::interop;
using namespace System::Windows::Forms;
using namespace std;

class AlmArchivos
{
private:
	string almac;
	Almacen *medic;

public:
	AlmArchivos(string a)
	{
		almac=a;
	}
	void introducirDatos(Almacen *newReg, DataGridView^ grilla2, int i)
	{
		string producto;
		string nombre;
		int cantidad;
		string dosis;
		int precio;

		producto= marshal_as<std::string>(System::Convert::ToString(grilla2->Rows[i]->Cells[0]->Value));
		nombre= marshal_as<std::string>(System::Convert::ToString(grilla2->Rows[i]->Cells[1]->Value));
		cantidad=System::Convert::ToInt32(grilla2->Rows[i]->Cells[2]->Value);
		dosis= marshal_as<std::string>(System::Convert::ToString(grilla2->Rows[i]->Cells[3]->Value));
		precio=System::Convert::ToInt32(grilla2->Rows[i]->Cells[4]->Value);
		newReg->setAlmacen(producto,nombre,cantidad,dosis,precio);
	 }
	void Limpiar(DataGridView^ grilla2)
	{
		for(int i=0;i<grilla2->RowCount;i++)
		{
			grilla2->Rows[i]->Cells[0]->Value="";
			grilla2->Rows[i]->Cells[1]->Value="";
			grilla2->Rows[i]->Cells[2]->Value="";
			grilla2->Rows[i]->Cells[3]->Value="";
			grilla2->Rows[i]->Cells[4]->Value="";
			grilla2->Rows[i]->Cells[5]->Value="";

		}
	}
	
	void mostrarRegistro(int nroReg, DataGridView^  grilla2, int i){
		if((medic->getEstado()=="A") || (medic->getEstado()=="E"))
		{ grilla2->Rows[i]->Cells[0]->Value=marshal_as<System::String^>(medic->getProducto());
		 grilla2->Rows[i]->Cells[1]->Value=marshal_as<System::String^>(medic->getNombre());
		 grilla2->Rows[i]->Cells[2]->Value=System::Convert::ToString(medic->getCantidad());
	     grilla2->Rows[i]->Cells[3]->Value=marshal_as<System::String^>(medic->getDosis());
	     grilla2->Rows[i]->Cells[4]->Value=System::Convert::ToString(medic->getPrecio());
		 grilla2->Rows[i]->Cells[5]->Value=marshal_as<System::String^>(medic->getEstado());
		}
	}

	void adicionarNuevo(DataGridView^ grilla2, int i)
	{
		ofstream fsalida(almac, ios::app | ios::binary);

		medic = new Almacen();

		introducirDatos(medic,grilla2,i);
		medic->guardarArchivo(fsalida);	
		fsalida.close();
	}

	void listar(DataGridView^ grilla2_b)
	{
		int cr=0;
		medic = new Almacen();
		ifstream fentrada(almac, ios::in | ios::binary);
		while (medic->leerArchivo(fentrada) == true)
		{
			mostrarRegistro(cr,grilla2_b,cr);
			cr++;
		}
		grilla2_b->RowCount=cr+1;
		fentrada.close();
	}

	int buscarReg(int nroReg, DataGridView^  grilla2, int i) {
		
		medic = new Almacen();
		i=0;
		ifstream fentrada(almac, ios::in | ios::binary);
		if(medic->buscar(fentrada,nroReg) == true) {
			mostrarRegistro(nroReg,grilla2,i);			
		} else {
			
			nroReg=-1;
		}
		fentrada.close();
		return(nroReg);
		
	}
	
	int buscarRegMod(int nroReg)
	{
		medic = new Almacen();
		ifstream fentrada( almac, ios::in | ios::binary);
		if(medic->buscar(fentrada,nroReg) !=true)
		{
			nroReg=-1;
		}
		fentrada.close();
		return (nroReg);
	}
	int eliminarReg(int nroReg, DataGridView^ grilla2, int i)
	{
		nroReg = buscarReg(nroReg, grilla2, i);
		if(nroReg>0)
		{
			fstream fes(almac, ios::in | ios::binary);
			medic = new Almacen();
			if (medic->eliminar(fes,nroReg)==true)
			{
			   nroReg=nroReg;
			   MessageBox::Show("Registro eliminado correctamente");
			}
		    else
		    {
			   nroReg=-1;
			   MessageBox::Show("El registro no existe");
		    }
		fes.close();
	    }
		return nroReg;
	}
	int modificarReg(int nroReg, DataGridView^ grilla2, int i)
	{
		nroReg= buscarRegMod(nroReg);
		if (nroReg>0)
		{
			fstream fes(almac, ios::in | ios::binary);
			medic = new Almacen();
			introducirDatos(medic,grilla2,i);
			if (medic->modificar(fes,nroReg)==true)
			{
				MessageBox::Show("Modificado correctamente...");
				return nroReg;
			}
			else
			{
				MessageBox::Show ("El registro no existe");
				return -1;
			}
			fes.close();
		}
		else
		{
			return -1;
		}
	}
};
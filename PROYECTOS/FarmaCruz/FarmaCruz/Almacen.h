#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace System::Windows::Forms; 
using namespace std;
class Almacen
{
private:
	string producto;
	string nombre;
	int cantidad;
	string dosis;
	int precio;
	string estado;
public:
	Almacen()
	{
		producto="";
		cantidad=0;
		dosis=" ";
		precio=0;
		estado =" ";
	}

	Almacen (string prod,string nomb, int cant, string dos,int preci)
	{
		producto=prod;
		nombre=nomb;
		cantidad=cant;
		dosis=dos;
		precio=preci;
		estado= "A";
	}
	void setAlmacen(string prod,string nomb, int cant, string dos, int preci)
	{
		//strcpy(nombre,nom);
		producto=prod;
		nombre=nomb;
		cantidad=cant;
		dosis=dos;
		precio=preci;
		estado="A";
	}
	string getProducto()
	{
		return (producto);
	}
	string getNombre()
	{
		return (nombre);
	}
	int getCantidad()
	{
		return (cantidad);
	}
	string getDosis()
	{
		return (dosis);
	}
	int getPrecio()
	{
		return (precio);
	}
	string getEstado()
	{
		return (estado);
	}
	void guardarArchivo(ofstream &fsalida)
	{
		fsalida.write(reinterpret_cast<char *>(&producto), sizeof(producto));
		fsalida.write(reinterpret_cast<char *>(&nombre), sizeof(nombre));
		fsalida.write(reinterpret_cast<char *>(&cantidad), sizeof(cantidad));
		fsalida.write(reinterpret_cast<char *>(&dosis), sizeof(dosis));
		fsalida.write(reinterpret_cast<char *>(&precio), sizeof(precio));
		fsalida.write(reinterpret_cast<char *>(&estado), sizeof(estado));
	}
	bool leerArchivo(ifstream &fentrada)
	{
		bool k = false;
		if (fentrada.is_open()== true)
		{
			fentrada.read(reinterpret_cast<char *>(&producto), sizeof(producto));
			if (fentrada.eof()==false)
			{
				fentrada.read(reinterpret_cast<char *>(&nombre), sizeof(nombre));
				fentrada.read(reinterpret_cast<char *>(&cantidad), sizeof(cantidad));
				fentrada.read(reinterpret_cast<char *>(&dosis), sizeof(dosis));
				fentrada.read(reinterpret_cast<char *>(&precio), sizeof(precio));
				fentrada.read(reinterpret_cast<char *>(&estado), sizeof(estado));
				k=true;
			}
			else
			{
				k=false;
			}
		}
		else
		{
			k=false;
		}
		return(k);
	}
	bool eliminar(fstream &fes, int nroReg)
	{
		bool k=false;
		if(fes.is_open()==true)
		{
			fes.seekg(getTamBytesRegistro() * (nroReg - 1), ios::beg);
			fes.read(reinterpret_cast<char *>(&producto), sizeof (producto));
			if (fes.eof()==false)
			{
				fes.read(reinterpret_cast<char *>(&nombre), sizeof (nombre));
				fes.read(reinterpret_cast<char *>(&cantidad), sizeof (cantidad));
				fes.read(reinterpret_cast<char *>(&dosis), sizeof (dosis));
				fes.read(reinterpret_cast<char *>(&precio), sizeof (precio));
				fes.read(reinterpret_cast<char *>(&estado), sizeof (estado));

				estado = "E";
				fes.seekp(getTamBytesRegistro() * (nroReg - 1), ios::beg);
				fes.write(reinterpret_cast<char *>(&producto), sizeof (producto));
				fes.write(reinterpret_cast<char *>(&nombre), sizeof (nombre));
				fes.write(reinterpret_cast<char *>(&cantidad), sizeof (cantidad));
				fes.write(reinterpret_cast<char *>(&dosis), sizeof (dosis));
				fes.write(reinterpret_cast<char *>(&precio), sizeof (precio));
				fes.write(reinterpret_cast<char *>(&estado), sizeof (estado));
				k=true;
			}
			else
			{
				k=false;
			}
		}
		else
		{
			k=false;
		}
		return (k);
	}
	bool modificar(fstream &fes, int nroReg)
	{
		bool k=false;
		if(fes.is_open()==true)
		{
			string nAux;
			nAux=producto;
			fes.seekg(getTamBytesRegistro() * (nroReg - 1), ios::beg);
			fes.read(reinterpret_cast<char *>(&producto), sizeof (producto));
			if (fes.eof()==false)
			{
				producto=nAux;
				estado = "A";
				fes.seekp(getTamBytesRegistro() * (nroReg - 1), ios::beg);
				fes.write(reinterpret_cast<char *>(&nombre), sizeof (nombre));
				fes.write(reinterpret_cast<char *>(&cantidad), sizeof(cantidad));
				fes.write(reinterpret_cast<char *>(&dosis), sizeof(dosis));
				fes.write(reinterpret_cast<char *>(&precio), sizeof(precio));
				fes.write(reinterpret_cast<char *>(&estado), sizeof(estado));
				k=true;
			}
			else
			{
				k=false;
			}
		}
		else
		{
			k=false;
		}
		return (k);
	}
	bool buscar(ifstream &fentrada, int nroReg)
	{
		bool k= false;
		if (fentrada.is_open()==true)
		{
			fentrada.seekg(getTamBytesRegistro() * (nroReg - 1), ios::beg);
			fentrada.read(reinterpret_cast<char *>(&producto), sizeof (producto));
			fentrada.read(reinterpret_cast<char *>(&nombre), sizeof(nombre));
			fentrada.read(reinterpret_cast<char *>(&cantidad), sizeof (cantidad));
			fentrada.read(reinterpret_cast<char *>(&dosis), sizeof (dosis));
			fentrada.read(reinterpret_cast<char *>(&precio), sizeof (precio));
			fentrada.read(reinterpret_cast<char *>(&estado), sizeof (estado));
			
			if (fentrada.eof()==false)
			{
				k=true;
			}
			else
			{
				k=false;
			}
		}
		else
		{
			k=false;
		}
		return (k);
	}
	int getTamBytesRegistro()
	{
		return(sizeof(producto) + sizeof (nombre) + sizeof(cantidad) + sizeof(dosis) + sizeof(precio) + sizeof(estado));
	}
};
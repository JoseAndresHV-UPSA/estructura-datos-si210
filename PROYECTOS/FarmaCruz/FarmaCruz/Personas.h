#pragma once
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;
using namespace System::Windows::Forms;
using namespace std;
class Personas
{
private:
	string Nombre;
	string Apellido;
	int celular;
	string fecha;
	string hora;
	string estado;

public:
		Personas() {
		//strcpy(nombre,"");
		Nombre="";
		Apellido="";
		celular= 0;
		fecha= " ";
		hora= " ";
		estado=" ";
	}
	
	Personas(string nom, string ape,int celu, string fec, string hr) {
		//strcpy(nombre,nom);
		Nombre=nom;
		Apellido=ape;
		celular=celu;
		fecha=fec;
		hora=hr;
		estado  = "A";
	}
	
	void setPersonas(string nom, string ape,int celu, string fec, string hr) {
		//strcpy(nombre,nom);
		Nombre=nom;
		Apellido=ape;
		celular=celu;
		fecha=fec;
		hora=hr;
		estado  = "A";
	}

	string getNombre() {
		return(Nombre);
	}

	string getApellido() {
		return(Apellido);
	}

	int getCelular() {
		return(celular);
	}
	string getFecha(){
		return (fecha);
	}
	string getHora(){
		return (hora);
	}
	string getEstado() {
		return(estado);
	}

	void guardarArchivo(ofstream &fsalida) {
		fsalida.write(reinterpret_cast<char *>(&Nombre), sizeof(Nombre));
		fsalida.write(reinterpret_cast<char* >(&Apellido), sizeof(Apellido));
		fsalida.write(reinterpret_cast<char *>(&celular), sizeof(celular));
		fsalida.write(reinterpret_cast<char *>(&fecha), sizeof(fecha));
		fsalida.write(reinterpret_cast<char *>(&hora), sizeof(hora));
		fsalida.write(reinterpret_cast<char *>(&estado), sizeof(estado));
	}

	bool leerArchivo(ifstream &fentrada) {
		bool k = false;
		if (fentrada.is_open() == true) {
			fentrada.read(reinterpret_cast<char *>(&Nombre), sizeof(Nombre));
			if (fentrada.eof() == false) {		
				fentrada.read(reinterpret_cast<char *>(&Apellido), sizeof(Apellido));
				fentrada.read(reinterpret_cast<char *>(&celular), sizeof(celular));
				fentrada.read(reinterpret_cast<char *>(&fecha), sizeof(fecha));
				fentrada.read(reinterpret_cast<char *>(&hora), sizeof(hora));
				fentrada.read(reinterpret_cast<char *>(&estado), sizeof(estado));
				k = true;
			}else {
				   k=false;
			// "Registro no existe";
			}
		}else {
			   k=false;
			// "Arhivo no existe";
		}
		return(k);
	}

	bool eliminar(fstream &fes, int nroReg){
		bool k = false;
		if (fes.is_open() == true) {
			fes.seekg(getTamBytesRegistro() * (nroReg - 1), ios::beg);
			fes.read(reinterpret_cast<char *>(&Nombre), sizeof(Nombre));
			if (fes.eof() == false) 
			{
				fes.read(reinterpret_cast<char *>(&Apellido), sizeof(Apellido));
				fes.read(reinterpret_cast<char *>(&celular), sizeof(celular));
				fes.read(reinterpret_cast<char *>(&fecha), sizeof(fecha));
				fes.read(reinterpret_cast<char *>(&hora), sizeof(hora));
				fes.read(reinterpret_cast<char *>(&estado), sizeof(estado));
		
				estado = "E";
				fes.seekp(getTamBytesRegistro() * (nroReg - 1), ios::beg);
				fes.write(reinterpret_cast<char *>(&Nombre), sizeof(Nombre));
				fes.write(reinterpret_cast<char *>(&Apellido), sizeof(Apellido));
				fes.write(reinterpret_cast<char *>(&celular), sizeof(celular));
				fes.write(reinterpret_cast<char *>(&fecha), sizeof(fecha));
				fes.write(reinterpret_cast<char *>(&hora), sizeof(hora));
				fes.write(reinterpret_cast<char *>(&estado), sizeof(estado));
				k = true;
			}else {
			         k=false; // registro no existe
			}			
		}else {
			    k=false;
			// "Arhivo no existe";
		}
		return(k);
	}


	bool modificar(fstream &fes, int nroReg){
		bool k = false;
		if (fes.is_open() == true) {
			string nomAux;
			//strcpy(nomAux,nombre);
			nomAux=Nombre;
			fes.seekg(getTamBytesRegistro() * (nroReg - 1), ios::beg);// calculo del tamano
			fes.read(reinterpret_cast<char *>(&Nombre), sizeof(Nombre));
			if (fes.eof() == false) {
				//strcpy(nombre,nomAux);
				Nombre=nomAux;
				estado = "A";
				fes.seekp(getTamBytesRegistro() * (nroReg - 1), ios::beg);
				fes.write(reinterpret_cast<char *>(&Nombre), sizeof(Nombre));
				fes.write(reinterpret_cast<char *>(&Apellido), sizeof(Apellido));
				fes.write(reinterpret_cast<char *>(&celular), sizeof(celular));
				fes.write(reinterpret_cast<char *>(&fecha), sizeof(fecha));
				fes.write(reinterpret_cast<char *>(&hora), sizeof(hora));
				fes.write(reinterpret_cast<char *>(&estado), sizeof(estado));
				k = true;
			}else {
			 k=false; // registro no existe
			}			
		}else {
	           k=false;
			   // "Arhivo no existe";
		}
		return(k);
	}





	bool buscar(ifstream &fentrada, int nroReg) {
		bool k = false;
		if (fentrada.is_open() == true) {
			fentrada.seekg(getTamBytesRegistro() * (nroReg - 1), ios::beg);
			fentrada.read(reinterpret_cast<char *>(&Nombre), sizeof(Nombre));
			fentrada.read(reinterpret_cast<char *>(&Apellido), sizeof(Apellido));
			fentrada.read(reinterpret_cast<char *>(&celular), sizeof(celular));
			fentrada.read(reinterpret_cast<char *>(&fecha), sizeof(fecha));
			fentrada.read(reinterpret_cast<char *>(&hora), sizeof(hora));
			fentrada.read(reinterpret_cast<char *>(&estado), sizeof(estado));

			if (fentrada.eof() == false) {
				k = true;
			}
			else {
				   k=false;
			// "registro no existe o eliminado";
			}
		}
		else {
		   k=false;
			// "Arhivo no existe";
		}
		return(k);
	}


	int getTamBytesRegistro() {
		return(sizeof(Nombre) + sizeof(Apellido) + sizeof(celular) + sizeof(fecha) + sizeof(hora) + sizeof(estado) );
	}
};


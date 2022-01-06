#pragma once
#pragma once
#include <iostream>
#include "conio.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System::Windows::Forms;
using namespace std;
using namespace msclr::interop;


class validaciones
{
public:
	validaciones(void);

	bool soloNumeros(string temp)
	{
		for (int i = 0; i < temp.length(); i++)
		{
			if (!isdigit(temp[i])) return false;
		}
		return true;
	}

	bool soloLetras(string temp)
	{
		for (int i = 0; i < temp.length(); i++){
			if((temp[i]>64&& temp[i]<91)||(temp[i]>96&& temp[i]<123))
				return true;
		}
		return false;
	}

	bool soloDecimal(string temp)
	{
		int numeros = 0, puntos = 0;
		for (int i = 0; i < temp.length(); i++)
		{
			if (isdigit(temp[i])) numeros++;
			if (temp[i] == '.') puntos++;
		}
		if (numeros == temp.length() - 1 && puntos == 1) return true;
		else return false;
	}


	bool verifEntero(TextBox^ elemento){
		string a;
		a=marshal_as<std::string>(elemento->Text);
		if(soloNumeros(a)==true){
			return true;
		}else 
			return false;
	}

	bool verifLetras(TextBox^ elemento){
		string a;
		a=marshal_as<std::string>(elemento->Text);
		if(soloLetras(a)==true)
			return true;
		else 
			return false;

	}
	bool verifLetrasSimbolos(TextBox^ elemento){
		string a;
		a=marshal_as<std::string>(elemento->Text);
		for (int i = 0; i < a.length(); i++){
			if((a[i]>64&& a[i]<91)||(a[i]>96&& a[i]<123)||(a[i]>32&& a[i]<58))
				return true;
		}
		return false;

	}

	bool verifLetrasEspacios(TextBox^ elemento){
		string a;
		a=marshal_as<std::string>(elemento->Text);
		for (int i = 0; i < a.length(); i++){
			if((a[i]>64&& a[i]<91)||(a[i]>96&& a[i]<123)||a[i]==' ')
				return true;
		}
		return false;

	}

	bool verifDecimal(TextBox^ elemento){
		string a;
		a=marshal_as<std::string>(elemento->Text);
		if(soloDecimal(a)==true)
			return true;
		else 
			return false;

	}

	int contarDigit(int a){
		int i=0;
		while(a>0){
			a=a/10;
			i++;
		}
		return i;
	}


	//vehiculo
	bool validCapacidad(TextBox^ elemento){
		if(verifEntero(elemento)==true){
			int a=System::Convert::ToInt32(elemento->Text);
				if(a>0&&a<8)
					return true;
				else 
					return false;
		}else 
			return false;
	}

	bool validAnho(TextBox^ elemento){
		if(verifEntero(elemento)==true){
			int a=System::Convert::ToInt32(elemento->Text);
				if(a>1999&&a<2019)
					return true;
				else 
					return false;
		}else 
			return false;
	}

	bool validTipo(TextBox^ elemento){
		if(verifLetras(elemento)==true){
			string a;
			a=marshal_as<std::string>(elemento->Text);
			if(a=="moto" || a=="auto" || a=="camioneta" || a=="vagoneta" || a=="Moto" || a=="Auto" || a=="Camioneta" || a=="Vagoneta" )
				return true;
			else 
				return false;

		}else 
		return false;
	}

	// clientes( nombres,apellidos,email)

	bool validCarnet(TextBox^ elemento){
		if(verifEntero(elemento)==true){
			int a=System::Convert::ToInt32(elemento->Text);
				if(contarDigit(a)>4 && contarDigit(a)<9)
					return true;
				else 
					return false;
		}else 
			return false;
	}
	bool validTelf(TextBox^ elemento){
		if(verifEntero(elemento)==true){
			int a=System::Convert::ToInt32(elemento->Text);
				if(contarDigit(a)==8)
					return true;
				else 
					return false;
		}else 
			return false;
	}
	bool validEdad(TextBox^ elemento){
		if(verifEntero(elemento)==true){
			int a=System::Convert::ToInt32(elemento->Text);
				if(a>17 && a <99)
					return true;
				else 
					return false;
		}else 
			return false;
	}
	bool validDominio(TextBox^ elemento){
		if(verifLetras(elemento)==true)
			return true;
		else 
			return false;
	}
	bool validEmail(TextBox^ elemento){
		if(verifLetrasSimbolos(elemento)==true)
			return true;
		else 
			return false;
	}
	bool validNombreApellido(TextBox^ elemento){
		if(verifLetrasEspacios(elemento)==true)
			return true;
		else 
			return false;
	}

	string SepararHastaA( string A)
	{
		int pos = A.find("@");
		string B  = A.substr(0,pos);
		return B;
	}

	string SepararAntesCom(string A)
	{
		int pos = A.find("@");
		string B = A.substr(pos+1,A.length()-1);
		int pos2 = B.find(".");
		string C = B.substr(0,pos2);
		return C;
	}

	/*bool validSueldo(TextBox^ elemento){
		if(verifEntero(elemento)==true){
			int a=System::Convert::ToDouble(elemento->Text);
				if(a>100 && a <10000)
					return true;
				else 
					return false;
		}else 
			return false;
	}*/

	string recortarDia(string A){
		int pos = A.find("/");
		string B = A.substr(0,pos);
		return B;
	}

	string recortarMes(string A){
		int pos = A.find("/");
		string B = A.substr(pos+1,A.length());
		int pos2 = B.find("/");
		string C = B.substr(0,pos2);
		return C;
	}

	string recortarAnho(string A){
		int pos = A.find("/");
		string B = A.substr(pos+1,A.length());
		int pos2 = B.find("/");
		string C = B.substr(pos2+1,B.length());
		return C;

}

};


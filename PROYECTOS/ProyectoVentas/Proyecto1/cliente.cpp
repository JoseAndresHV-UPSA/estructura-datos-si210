#include "stdafx.h"
#include "cliente.h"

cliente::cliente(void)
{
	idCliente=0;
	nombre[0]=' ';
	apellidos[0]=' ';
	email[0]=' ';
	telefono=0;	
	estado='E';
}

void cliente::setIdCliente(int n)
{
	idCliente=n;
}
int cliente::getIdCliente()
{
	return idCliente;
}

void cliente::setNombre(char *t)
{
	strcat(nombre,t);
}
string cliente::getNombre()
{
	string t(nombre);
	return t;
}

void cliente::setApellidos(char *t)
{
	strcat(apellidos,t);
}

string cliente::getApellidos()
{
	string t(apellidos);
	return t;
}

void cliente::setEmail(char *t)
{
	strcat(email,t);
}

string cliente::getEmail()
{
	string t(email);
	return t;
}

void cliente::setTelefono(int n)
{
	telefono=n;
}

int cliente::getTelefono()
{
	return telefono;
}

void cliente::setEstado(char t)
{
	estado=t;
}

char cliente::getEstado()
{
	return estado;
}

int cliente::generarIdCliente()
{
    FILE *ptr;
    int n = 1;
    ptr = fopen("cliente.dat", "rb");
    if (ptr != NULL)
    {
        fseek(ptr, 0, SEEK_END);
        n = ftell(ptr) / sizeof(*this) + 1;
        fclose(ptr);
    }
    return n;
}

void cliente::cargar(TextBox^ tnombre,TextBox^ tapellidos,TextBox^ temail,TextBox^ ttelefono)
{
	string n,a,e;
	n=marshal_as<std::string>(tnombre->Text);
	a=marshal_as<std::string>(tapellidos->Text);
	e=marshal_as<std::string>(temail->Text);		
	strcpy(nombre,n.c_str());
	strcpy(apellidos,a.c_str());
	strcpy(email,e.c_str());
	setTelefono(System::Convert::ToInt32(ttelefono->Text));
	setIdCliente(generarIdCliente());
	setEstado('A');
}

void cliente::resetGrilla(DataGridView^ grilla_b_cliente)
{
	grilla_b_cliente->RowCount=1;
	grilla_b_cliente->ColumnCount=5;
}


void cliente::mostrar(DataGridView^ grilla_b_cliente)
{
	resetGrilla(grilla_b_cliente);

	FILE *ptr;
	int i=0;
	ptr=fopen("cliente.dat","rb");
	if(ptr!=NULL){ 	
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				objetoGrilla(grilla_b_cliente,i);
				i++;
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
}

void cliente::objetoGrilla(DataGridView^ grilla_b_cliente,int i)
{
	grilla_b_cliente->RowCount=10;
	grilla_b_cliente->ColumnCount=5;
	grilla_b_cliente->Rows[i]->Cells[0]->Value=System::Convert::ToString(getIdCliente());
	grilla_b_cliente->Rows[i]->Cells[1]->Value=marshal_as<System::String^>(getNombre());
	grilla_b_cliente->Rows[i]->Cells[2]->Value=marshal_as<System::String^>(getApellidos());
	grilla_b_cliente->Rows[i]->Cells[3]->Value=marshal_as<System::String^>(getEmail());
	grilla_b_cliente->Rows[i]->Cells[4]->Value=System::Convert::ToString(getTelefono());
}

void cliente::guardar()
{
	FILE *ptr;
	ptr=fopen("cliente.dat","ab");
	fwrite(&*this,sizeof(*this),1,ptr);
	fclose(ptr);
}

void cliente::modificarCliente(TextBox^ tmodificar,TextBox^ tnombre,TextBox^ tapellidos,TextBox^ temail,TextBox^ ttelefono)
{
    int id;
	string email;
	id=System::Convert::ToInt32(tmodificar->Text);
    FILE *ptr;
	ptr= fopen("cliente.dat", "r+b");
    if (ptr != NULL)
    {
			
			fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
			fread(&*this, sizeof(*this), 1, ptr);
			if(getEstado()=='A')
			{
				tnombre->Text=marshal_as<System::String^>(getNombre());
				tapellidos->Text=marshal_as<System::String^>(getApellidos());
				temail->Text=marshal_as<System::String^>(getEmail());
				ttelefono->Text=System::Convert::ToString(getTelefono());
			}		
			fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
			fwrite(&*this, sizeof(*this), 1, ptr);
			fclose(ptr);     
    }
    else cout << "[Archivo no existe]" << endl;
}

void cliente::guardarModificado(TextBox^ tmodificar,TextBox^ tnombre,TextBox^ tapellidos,TextBox^ temail,TextBox^ ttelefono)
{
	int id;
	string n,a,e,f;
	string x,y,z;
	id=System::Convert::ToInt32(tmodificar->Text);
    FILE *ptr ;
	ptr= fopen("cliente.dat", "r+b");
    if (ptr != NULL)
    {
        fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
        fread(&*this, sizeof(*this), 1, ptr);
		string n,a,e;
		n=marshal_as<std::string>(tnombre->Text);
		a=marshal_as<std::string>(tapellidos->Text);
		e=marshal_as<std::string>(temail->Text);
	    strcpy(nombre,n.c_str());
	    strcpy(apellidos,a.c_str()); 
	    strcpy(email,e.c_str());
	    setTelefono(System::Convert::ToInt32(ttelefono->Text));
        fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
        fwrite(&*this, sizeof(*this), 1, ptr);
        fclose(ptr);
    }
    else cout << "[Archivo no existe]" << endl;
}

void cliente::eliminarCliente(TextBox^ teliminar)
{
    int id;
	id=System::Convert::ToInt32(teliminar->Text);
    FILE *ptr ;
	ptr= fopen("cliente.dat", "r+b");
    if (ptr != NULL)
    {
        fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
        fread(&*this, sizeof(*this), 1, ptr);
        setEstado('E');
        fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
        fwrite(&*this, sizeof(*this), 1, ptr);
        fclose(ptr);
    }
    else cout << "[Archivo no existe]" << endl;
}

void cliente::buscarCliente(TextBox^ tbuscar,DataGridView^ grilla_b_cliente)
{
    resetGrilla(grilla_b_cliente);
	int id;
	id=System::Convert::ToInt32(tbuscar->Text);
	FILE*ptr;
	int i=0;
	ptr=fopen("cliente.dat","rb");
	if(ptr!=NULL){ 	
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdCliente())
				{
				  objetoGrilla(grilla_b_cliente,i);
				  i++;
				  //return ;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
}

void cliente::buscarClienteApellido(TextBox^ tbuscar,DataGridView^ grilla_b_cliente)
{
    resetGrilla(grilla_b_cliente);
	string n;
	n=marshal_as<std::string>(tbuscar->Text);
	FILE*ptr;
	int i=0;
	ptr=fopen("cliente.dat","rb");
	if(ptr!=NULL){	
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(n==getApellidos())
				{
				  objetoGrilla(grilla_b_cliente,i);
				  i++;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
}

bool cliente::verificarIdExiste(TextBox^ tmodificar){
	int id;
	id=System::Convert::ToInt32(tmodificar->Text);
	FILE*ptr;
	int i=0;
	ptr=fopen("cliente.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdCliente())
				{
				  return true;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
	return false;
}

cliente cliente::retornarId(int n)
{
	cliente a;
	int id=System::Convert::ToInt32(n);
	FILE*ptr;
	int i=0;
	ptr=fopen("cliente.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdCliente())
				{
				  a=*this;
				  i++;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
	return a;
}

cliente cliente::retornarApellidos(string n)
{
	cliente a;	
	FILE*ptr;
	int i=0;
	ptr=fopen("cliente.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(n==getApellidos())
				{
				  a=*this;
				  i++;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
	return a;
}

void cliente::buscar_id_cliente(TextBox^ tbuscar,DataGridView^ grilla_cliente)
{
	resetGrilla(grilla_cliente);
	int id;
	id=System::Convert::ToInt32(tbuscar->Text);
	FILE*ptr;
	int i=0;
	ptr=fopen("cliente.dat","rb");
	if(ptr!=NULL){ 

		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdCliente())
				{
					objetoGrilla(grilla_cliente,i);
					i++;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
}

cliente cliente::obtenerNombreCliente(int id){
	cliente p;
	FILE*ptr;
	int i=0;
	ptr=fopen("cliente.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdCliente())
				{
					p=*this;
					i++;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
	return p;
}
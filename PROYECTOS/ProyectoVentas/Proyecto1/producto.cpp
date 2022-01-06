#include "StdAfx.h"
#include "producto.h"

producto::producto(void)
{
	idProducto=0;
	nombre[0]=' ';
	precio=0;	
	estado='E';
}

void producto::setIdProducto(int n)
{
	idProducto=n;
}
int producto::getIdProducto()
{
	return idProducto;
}

void producto::setNombre(char *t)
{
	strcat(nombre,t);
}
string producto::getNombre()
{
	string t(nombre);
	return t;
}

void producto::setPrecio(int n)
{
	precio=n;
}

int producto::getPrecio()
{
	return precio;
}

void producto::setEstado(char t)
{
	estado=t;
}

char producto::getEstado()
{
	return estado;
}

int producto::generarIdProducto()
{
    FILE *ptr;
    int n = 1;
    ptr = fopen("producto.dat", "rb");
    if (ptr != NULL)
    {
        fseek(ptr, 0, SEEK_END);
        n = ftell(ptr) / sizeof(*this) + 1;
        fclose(ptr);
    }
    return n;
}

void producto::cargar(TextBox^ tnombre,TextBox^ tprecio)
{
	string n;
	n=marshal_as<std::string>(tnombre->Text);		
	strcpy(nombre,n.c_str());
	setPrecio(System::Convert::ToInt32(tprecio->Text));
	setIdProducto(generarIdProducto());
	setEstado('A');
}

void producto::resetGrilla(DataGridView^ grilla_b_producto)
{
	grilla_b_producto->RowCount=1;
	grilla_b_producto->ColumnCount=3;
}

void producto::mostrar(DataGridView^ grilla_b_producto)
{
	resetGrilla(grilla_b_producto);
	FILE*ptr;
	int i=0;
	ptr=fopen("producto.dat","rb");
	if(ptr!=NULL){ 
	
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				objetoGrilla(grilla_b_producto,i);
				i++;
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
}

void producto::objetoGrilla(DataGridView^ grilla_b_producto,int i)
{
	grilla_b_producto->RowCount=10;
	grilla_b_producto->ColumnCount=3;
	grilla_b_producto->Rows[i]->Cells[0]->Value=System::Convert::ToString(getIdProducto());
	grilla_b_producto->Rows[i]->Cells[1]->Value=marshal_as<System::String^>(getNombre());
	grilla_b_producto->Rows[i]->Cells[2]->Value=System::Convert::ToString(getPrecio());
}

void producto::guardar()
{
	FILE*ptr;
	ptr=fopen("producto.dat","ab");
	fwrite(&*this,sizeof(*this),1,ptr);
	fclose(ptr);
}

void producto::modificarProducto(TextBox^ tmodificar,TextBox^ tnombre,TextBox^ tprecio)
{
    int id;
	string email;
	id=System::Convert::ToInt32(tmodificar->Text);
    FILE *ptr;
	ptr= fopen("producto.dat", "r+b");
    if (ptr != NULL)
    {
			
			fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
			fread(&*this, sizeof(*this), 1, ptr);
			if(getEstado()=='A')
			{
				tnombre->Text=marshal_as<System::String^>(getNombre());
				tprecio->Text=System::Convert::ToString(getPrecio());
			}		
			fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
			fwrite(&*this, sizeof(*this), 1, ptr);
			fclose(ptr);
       
    }
    else cout << "[Archivo no existe]" << endl;
}

void producto::guardarModificado(TextBox^ tmodificar,TextBox^ tnombre,TextBox^ tprecio)
{
	int id;
	string n,f;
	string x,y,z;
	id=System::Convert::ToInt32(tmodificar->Text);
    FILE *ptr ;
	ptr= fopen("producto.dat", "r+b");
    if (ptr != NULL)
    {
        fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
        fread(&*this, sizeof(*this), 1, ptr);
		string n;
		n=marshal_as<std::string>(tnombre->Text);		
	    strcpy(nombre,n.c_str());
	    setPrecio(System::Convert::ToInt32(tprecio->Text));
        fseek(ptr, (id - 1) * sizeof(*this), SEEK_SET);
        fwrite(&*this, sizeof(*this), 1, ptr);
        fclose(ptr);
    }
    else cout << "[Archivo no existe]" << endl;
}


void producto::eliminarProducto(TextBox^ teliminar)
{
    int id;
	id=System::Convert::ToInt32(teliminar->Text);
    FILE *ptr ;
	ptr= fopen("producto.dat", "r+b");
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

void producto::buscarProducto(TextBox^ tbuscar,DataGridView^ grilla_b_producto)
{
    resetGrilla(grilla_b_producto);
	int id;
	id=System::Convert::ToInt32(tbuscar->Text);
	FILE*ptr;
	int i=0;
	ptr=fopen("producto.dat","rb");
	if(ptr!=NULL){ 	
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdProducto())
				{
				  objetoGrilla(grilla_b_producto,i);
				  i++;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
}

bool producto::verificarIdExiste(TextBox^ tmodificar){
	int id;
	id=System::Convert::ToInt32(tmodificar->Text);
	FILE*ptr;
	int i=0;
	ptr=fopen("producto.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdProducto())
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

producto producto::retornarId(int n)
{
	producto a;
	int id=System::Convert::ToInt32(n);
	FILE*ptr;
	int i=0;
	ptr=fopen("producto.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdProducto())
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

producto producto::retornarPrecio(int n)
{
	producto a;
	int id=System::Convert::ToInt32(n);
	FILE*ptr;
	int i=0;
	ptr=fopen("producto.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getPrecio())
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
void producto::buscar_id_producto(TextBox^ tbuscar,DataGridView^ grilla_producto)
{
	resetGrilla(grilla_producto);
	int id;
	id=System::Convert::ToInt32(tbuscar->Text);
	FILE*ptr;
	int i=0;
	ptr=fopen("producto.dat","rb");
	if(ptr!=NULL){ 

		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdProducto())
				{
					objetoGrilla(grilla_producto,i);
					i++;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
}

producto producto::obtenerNombreProducto(int id){
	producto p;
	FILE*ptr;
	int i=0;
	ptr=fopen("producto.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdProducto())
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




























































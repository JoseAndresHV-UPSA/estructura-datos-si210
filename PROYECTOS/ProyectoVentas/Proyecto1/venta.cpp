#include "StdAfx.h"
#include "venta.h"
#include "cliente.h"

venta::venta(void)
{
	idVenta=0;
	fecha[0]=' ';
	monto=0;
	idCliente=0;
	estado='E';
}

void venta::setIdVenta(int n)
{
	idVenta=n;
}
int venta::getIdVenta()
{
	return idVenta;
}

void venta::setFecha(char *t)
{
	strcat(fecha,t);
}
string venta::getFecha()
{
	string t(fecha);
	return t;
}
void venta::setMonto(int n)
{
	monto=n;
}

int venta::getMonto()
{
	return monto;
}

void venta::setIdCliente(int n)
{
	idCliente=n;
}
int venta::getIdCliente()
{
	return idCliente;
}
void venta::setEstado(char t)
{
	estado=t;
}

char venta::getEstado()
{
	return estado;
}

int venta::generarIdVenta()
{
    FILE *ptr;
    int n = 1;
    ptr = fopen("venta.dat", "rb");
    if (ptr != NULL)
    {
        fseek(ptr, 0, SEEK_END);
        n = ftell(ptr) / sizeof(*this) + 1;
        fclose(ptr);
    }
    return n;
}

void venta::cargar(TextBox^ tfecha,TextBox^ tmonto,TextBox^ tidcliente)
{
	string n;
	n=marshal_as<std::string>(tfecha->Text);
	strcpy(fecha,n.c_str());
	setMonto(System::Convert::ToInt32(tmonto->Text));
	setIdCliente(System::Convert::ToInt32(tidcliente->Text));
	setIdVenta(generarIdVenta());
	setEstado('A');
}

void venta::guardar()
{
	FILE*ptr;
	ptr=fopen("venta.dat","ab");
	fwrite(&*this,sizeof(*this),1,ptr);
	fclose(ptr);
}

venta venta::retornarId(int n)
{
	venta a;
	int id=System::Convert::ToInt32(n);
	FILE*ptr;
	int i=0;
	ptr=fopen("venta.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdVenta())
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

int venta::retornarUltimoId()
{
	int cod;
	//int id=System::Convert::ToInt32(n);
	FILE*ptr;
	int i=0;
	ptr=fopen("venta.dat","rb");
	if(ptr!=NULL){ 
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				cod=getIdVenta();
				i++;
				
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
	return cod;
}

void venta::resetGrilla(DataGridView^ grilla_b_venta)
{
	grilla_b_venta->RowCount=1;
	grilla_b_venta->ColumnCount=5;
}
void venta::objetoGrilla(DataGridView^ grilla_b_venta,int i)
{
	cliente c;
	c=c.obtenerNombreCliente(getIdCliente());
	grilla_b_venta->RowCount=30;
	grilla_b_venta->ColumnCount=5;
	grilla_b_venta->Rows[i]->Cells[0]->Value=System::Convert::ToString(getIdVenta());
	grilla_b_venta->Rows[i]->Cells[1]->Value=marshal_as<System::String^>(getFecha());
	grilla_b_venta->Rows[i]->Cells[2]->Value=System::Convert::ToString(getMonto());
	grilla_b_venta->Rows[i]->Cells[3]->Value=System::Convert::ToString(getIdCliente());
	grilla_b_venta->Rows[i]->Cells[4]->Value=marshal_as<System::String^>(c.getNombre()+" "+c.getApellidos());
}
void venta::mostrar(DataGridView^ grilla_b_venta)
{
	resetGrilla(grilla_b_venta);
	FILE*ptr;
	int i=0;
	ptr=fopen("venta.dat","rb");
	if(ptr!=NULL){ 
	
		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				objetoGrilla(grilla_b_venta,i);
				i++;
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
}

void venta::buscar_id_venta(TextBox^ tbuscar,DataGridView^ grilla_venta)
{
	resetGrilla(grilla_venta);
	int id;
	id=System::Convert::ToInt32(tbuscar->Text);
	FILE*ptr;
	int i=0;
	ptr=fopen("venta.dat","rb");
	if(ptr!=NULL){ 

		fread(&*this, sizeof(*this), 1, ptr);
		while (feof(ptr)==false) {
			if(getEstado()=='A')
			{
				if(id==getIdVenta())
				{
					objetoGrilla(grilla_venta,i);
					i++;
				}
			}
			fread (&*this, sizeof(*this), 1, ptr);
		}
	}
	fclose(ptr);
}




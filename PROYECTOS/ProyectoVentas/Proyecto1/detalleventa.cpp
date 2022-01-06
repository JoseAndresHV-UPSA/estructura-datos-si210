#include "StdAfx.h"
#include "detalleventa.h"
#include "producto.h"

detalleventa::detalleventa(void)
{
	idVenta=0;
	idProducto=0;	
	cantidad=0;
	precioVenta=0;
}

void detalleventa::setIdVenta(int n)
{
	idVenta=n;
}
int detalleventa::getIdVenta()
{
	return idVenta;
}

void detalleventa::setIdProducto(int n)
{
	idProducto=n;
}
int detalleventa::getIdProducto()
{
	return idProducto;
}

void detalleventa::setCantidad(int n)
{
	cantidad=n;
}

int detalleventa::getCantidad()
{
	return cantidad;
}

void detalleventa::setPrecioVenta(int n)
{
	precioVenta=n;
}

int detalleventa::getPrecioVenta()
{
	return precioVenta;
}
void detalleventa::cargar(int tidventa,int tidproducto,int tcantidad,int tprecioventa)
{	
	setIdVenta(tidventa);
	setIdProducto(tidproducto);
	setCantidad(tcantidad);
	setPrecioVenta(tprecioventa);
}

void detalleventa::guardar()
{
	FILE*ptr;
	ptr=fopen("detalleventa.dat","ab");
	fwrite(&*this,sizeof(*this),1,ptr);
	fclose(ptr);
}



void detalleventa::resetGrilla(DataGridView^ grilla_b_detalleventa)
{
	grilla_b_detalleventa->RowCount=1;
	grilla_b_detalleventa->ColumnCount=6;
}

void detalleventa::objetoGrilla(DataGridView^ grilla_b_detalleventa,int i)
{
	producto p;
	p=p.obtenerNombreProducto(getIdProducto());
	grilla_b_detalleventa->RowCount=30;
	grilla_b_detalleventa->ColumnCount=6;
	grilla_b_detalleventa->Rows[i]->Cells[0]->Value=System::Convert::ToString(getIdVenta());
	grilla_b_detalleventa->Rows[i]->Cells[1]->Value=System::Convert::ToString(getIdProducto());
	grilla_b_detalleventa->Rows[i]->Cells[2]->Value=marshal_as<System::String^>(p.getNombre()); 
	grilla_b_detalleventa->Rows[i]->Cells[3]->Value=System::Convert::ToString(getPrecioVenta());
	grilla_b_detalleventa->Rows[i]->Cells[4]->Value=System::Convert::ToString(getCantidad());
	grilla_b_detalleventa->Rows[i]->Cells[5]->Value=System::Convert::ToString(getCantidad()*getPrecioVenta());
}
void detalleventa::mostrar(TextBox^ tbuscar,DataGridView^ grilla_b_detalleventa)
{
	int id;
	id=System::Convert::ToInt32(tbuscar->Text);
	resetGrilla(grilla_b_detalleventa);
	FILE*ptr;
	int i=0;
	ptr=fopen("detalleventa.dat","rb");
	if(ptr!=NULL){ 
	   
			fread(&*this, sizeof(*this), 1, ptr);
			while (feof(ptr)==false) {
				if(getIdVenta()==id)
				{
					objetoGrilla(grilla_b_detalleventa,i);
					i++;
				}								
					
				fread (&*this, sizeof(*this), 1, ptr);
			}
		
	}
	fclose(ptr);
}

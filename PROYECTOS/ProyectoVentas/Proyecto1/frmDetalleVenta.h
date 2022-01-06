#pragma once
#include "venta.h"
#include "detalleventa.h"
#include "producto.h"
#include "cliente.h"
#include "frmBusquedaVenta.h"


//public: System::Data::DataTable myDataTable = gcnew DataTable();

namespace Proyecto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for frmDetalleVenta
	/// </summary>
	public ref class frmDetalleVenta : public System::Windows::Forms::Form
	{
	public:
		frmDetalleVenta(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmDetalleVenta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnGuardar;
	private: System::Windows::Forms::DataGridView^  grilla_detalle;
	private: System::Windows::Forms::DataGridView^  grilla_producto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;








	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtIdCliente;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtNombre;






	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtTotal;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtFecha;
	private: System::Windows::Forms::Button^  btnBuscarCliente;
	private: System::Windows::Forms::TextBox^  txtIdClienteCodigo;



	private: System::Windows::Forms::Button^  btnVerProducto;
	private: System::Windows::Forms::Button^  btnVerDetalle;
	private: System::Windows::Forms::Button^  btnBuscarVenta;
	private: System::Windows::Forms::TextBox^  txtTelefono;






	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDetalleVenta::typeid));
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->grilla_detalle = (gcnew System::Windows::Forms::DataGridView());
			this->grilla_producto = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtIdCliente = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtFecha = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscarCliente = (gcnew System::Windows::Forms::Button());
			this->txtIdClienteCodigo = (gcnew System::Windows::Forms::TextBox());
			this->btnVerProducto = (gcnew System::Windows::Forms::Button());
			this->btnVerDetalle = (gcnew System::Windows::Forms::Button());
			this->btnBuscarVenta = (gcnew System::Windows::Forms::Button());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_detalle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_producto))->BeginInit();
			this->SuspendLayout();
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(114, 293);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 29;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &frmDetalleVenta::btnGuardar_Click);
			// 
			// grilla_detalle
			// 
			this->grilla_detalle->AllowUserToAddRows = false;
			this->grilla_detalle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_detalle->Location = System::Drawing::Point(19, 123);
			this->grilla_detalle->Name = L"grilla_detalle";
			this->grilla_detalle->Size = System::Drawing::Size(625, 157);
			this->grilla_detalle->TabIndex = 30;
			this->grilla_detalle->Visible = false;
			this->grilla_detalle->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmDetalleVenta::grilla_detalle_CellEndEdit);
			this->grilla_detalle->SelectionChanged += gcnew System::EventHandler(this, &frmDetalleVenta::grilla_detalle_SelectionChanged);
			// 
			// grilla_producto
			// 
			this->grilla_producto->AllowUserToDeleteRows = false;
			this->grilla_producto->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_producto->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column1, 
				this->Column2, this->Column3});
			this->grilla_producto->Location = System::Drawing::Point(25, 123);
			this->grilla_producto->Name = L"grilla_producto";
			this->grilla_producto->ReadOnly = true;
			this->grilla_producto->Size = System::Drawing::Size(632, 141);
			this->grilla_producto->TabIndex = 37;
			this->grilla_producto->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDetalleVenta::grilla_producto_MouseClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id Producto";
			this->Column1->MaxInputLength = 16767;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Descripcion";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio";
			this->Column3->MaxInputLength = 10;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Productos";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(350, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 13);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Detalle de Venta";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(22, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 102;
			this->label5->Text = L"Id Cliente";
			// 
			// txtIdCliente
			// 
			this->txtIdCliente->Location = System::Drawing::Point(79, 38);
			this->txtIdCliente->Name = L"txtIdCliente";
			this->txtIdCliente->Size = System::Drawing::Size(61, 20);
			this->txtIdCliente->TabIndex = 101;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(28, 66);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 103;
			this->label4->Text = L"Nombre";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(79, 62);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->ReadOnly = true;
			this->txtNombre->Size = System::Drawing::Size(220, 20);
			this->txtNombre->TabIndex = 104;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(421, 293);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 106;
			this->label6->Text = L"Total Bs.:";
			// 
			// txtTotal
			// 
			this->txtTotal->Location = System::Drawing::Point(489, 290);
			this->txtTotal->Name = L"txtTotal";
			this->txtTotal->ReadOnly = true;
			this->txtTotal->Size = System::Drawing::Size(90, 20);
			this->txtTotal->TabIndex = 107;
			this->txtTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 108;
			this->label7->Text = L"Fecha";
			// 
			// txtFecha
			// 
			this->txtFecha->Location = System::Drawing::Point(79, 10);
			this->txtFecha->Name = L"txtFecha";
			this->txtFecha->ReadOnly = true;
			this->txtFecha->Size = System::Drawing::Size(150, 20);
			this->txtFecha->TabIndex = 109;
			// 
			// btnBuscarCliente
			// 
			this->btnBuscarCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnBuscarCliente->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnBuscarCliente.Image")));
			this->btnBuscarCliente->Location = System::Drawing::Point(145, 33);
			this->btnBuscarCliente->Name = L"btnBuscarCliente";
			this->btnBuscarCliente->Size = System::Drawing::Size(35, 28);
			this->btnBuscarCliente->TabIndex = 110;
			this->btnBuscarCliente->UseVisualStyleBackColor = true;
			this->btnBuscarCliente->Click += gcnew System::EventHandler(this, &frmDetalleVenta::btnBuscarCliente_Click);
			// 
			// txtIdClienteCodigo
			// 
			this->txtIdClienteCodigo->Location = System::Drawing::Point(186, 38);
			this->txtIdClienteCodigo->Name = L"txtIdClienteCodigo";
			this->txtIdClienteCodigo->Size = System::Drawing::Size(61, 20);
			this->txtIdClienteCodigo->TabIndex = 111;
			this->txtIdClienteCodigo->Visible = false;
			// 
			// btnVerProducto
			// 
			this->btnVerProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVerProducto->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnVerProducto.Image")));
			this->btnVerProducto->Location = System::Drawing::Point(92, 88);
			this->btnVerProducto->Name = L"btnVerProducto";
			this->btnVerProducto->Size = System::Drawing::Size(38, 29);
			this->btnVerProducto->TabIndex = 112;
			this->btnVerProducto->UseVisualStyleBackColor = true;
			this->btnVerProducto->Click += gcnew System::EventHandler(this, &frmDetalleVenta::btnVerProducto_Click);
			// 
			// btnVerDetalle
			// 
			this->btnVerDetalle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVerDetalle->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnVerDetalle.Image")));
			this->btnVerDetalle->Location = System::Drawing::Point(458, 88);
			this->btnVerDetalle->Name = L"btnVerDetalle";
			this->btnVerDetalle->Size = System::Drawing::Size(38, 29);
			this->btnVerDetalle->TabIndex = 113;
			this->btnVerDetalle->UseVisualStyleBackColor = true;
			this->btnVerDetalle->Click += gcnew System::EventHandler(this, &frmDetalleVenta::btnVerDetalle_Click);
			// 
			// btnBuscarVenta
			// 
			this->btnBuscarVenta->Location = System::Drawing::Point(247, 293);
			this->btnBuscarVenta->Name = L"btnBuscarVenta";
			this->btnBuscarVenta->Size = System::Drawing::Size(75, 23);
			this->btnBuscarVenta->TabIndex = 114;
			this->btnBuscarVenta->Text = L"Buscar";
			this->btnBuscarVenta->UseVisualStyleBackColor = true;
			this->btnBuscarVenta->Click += gcnew System::EventHandler(this, &frmDetalleVenta::btnBuscarVenta_Click);
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(318, 63);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(100, 20);
			this->txtTelefono->TabIndex = 115;
			// 
			// frmDetalleVenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(698, 336);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->btnBuscarVenta);
			this->Controls->Add(this->btnVerDetalle);
			this->Controls->Add(this->btnVerProducto);
			this->Controls->Add(this->txtIdClienteCodigo);
			this->Controls->Add(this->btnBuscarCliente);
			this->Controls->Add(this->txtFecha);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtTotal);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtIdCliente);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->grilla_producto);
			this->Controls->Add(this->grilla_detalle);
			this->Controls->Add(this->btnGuardar);
			this->Name = L"frmDetalleVenta";
			this->Text = L"Venta";
			this->Load += gcnew System::EventHandler(this, &frmDetalleVenta::frmDetalleVenta_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_detalle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_producto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void btnGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
			    GuardarCabecera();
				GuardarDetalle();
				MessageBox::Show( "Venta Registrada correctamente",
         "Venta", MessageBoxButtons::OK,MessageBoxIcon::Information );
				CrearDataTable();
				montoTotal=0;
				txtTotal->Text=System::Convert::ToString(montoTotal);
			 }
void GuardarCabecera(){
            try
            {
				if(txtIdClienteCodigo->Text->Trim()!="")
				{
					venta v;
					v.cargar(txtFecha,txtTotal,txtIdClienteCodigo);				
					v.guardar();
				}
				else
				{
					MessageBox::Show( "Debe seleccionar un cliente",
         "Información", MessageBoxButtons::OK,MessageBoxIcon::Information );
				}
            }
            catch (Exception^ ex)
            { 
				 MessageBox::Show(ex->Message);
			}
        }
void GuardarDetalle(){
			
            venta v;
			int idUltimo=v.retornarUltimoId();
			//MessageBox::Show( "IdVenta: "+System::Convert::ToString(idUltimo),"Información", MessageBoxButtons::OK,MessageBoxIcon::Information );
			
			int idproducto;
			int cantidad;
			int precioventa;
			detalleventa d;
			for each(DataRow ^adr in myDataTable->Rows){  
				idproducto = System::Convert::ToInt32(adr["idProducto"]->ToString());   
				cantidad = System::Convert::ToInt32(adr["cantidad"]->ToString()); 
				precioventa = System::Convert::ToInt32(adr["precio"]->ToString());
				d.cargar(idUltimo,idproducto,cantidad,precioventa);
				d.guardar();

			} 
        }


    //VARIABLE GLOBAL
	System::Data::DataTable^ myDataTable;
	int montoTotal;
	int sumaTotal;
private: void CrearDataTable(){
    // Create new DataTable.
   myDataTable= gcnew DataTable();     
    // Declare DataColumn and DataRow variables.
    System::Data::DataColumn^ myDataColumn;    
    // Create new DataColumn, set DataType, ColumnName and add to DataTable. 
	// Crear columna Id del producto.
    myDataColumn = gcnew DataColumn();
    myDataColumn->DataType = System::Type::GetType("System.Int32");
    myDataColumn->ColumnName = "idProducto";
    myDataTable->Columns->Add(myDataColumn);
    // Crear columna nombre del producto.
    myDataColumn = gcnew DataColumn();
    myDataColumn->DataType = Type::GetType("System.String");
    myDataColumn->ColumnName = "nombre";
    myDataTable->Columns->Add(myDataColumn);
	// Crear columna cantidad del producto.
	myDataColumn = gcnew DataColumn();
    myDataColumn->DataType = Type::GetType("System.Int32");
    myDataColumn->ColumnName = "cantidad";
    myDataTable->Columns->Add(myDataColumn);
	// Crear columna precio del producto.
	myDataColumn = gcnew DataColumn();
    myDataColumn->DataType = Type::GetType("System.Int32");
    myDataColumn->ColumnName = "precio";
    myDataTable->Columns->Add(myDataColumn);
	// Crear columna sub-total.
	myDataColumn = gcnew DataColumn();
    myDataColumn->DataType = Type::GetType("System.Int32");
    myDataColumn->ColumnName = "subtotal";
    myDataTable->Columns->Add(myDataColumn);

    grilla_detalle->DataSource = myDataTable;

	for each(DataGridViewColumn^ c in grilla_detalle->Columns)
	{
		if (c->Name != "cantidad")
             c->ReadOnly = true;
	}

	txtTotal->Text = System::Convert::ToString(sumaTotal);
                
 }

void ActualizarDataGridViewDetalle()
        {
            sumaTotal = 0;
            for each(DataGridViewRow^ row in grilla_detalle->Rows)
            {
                row->Cells[4]->Value = System::Convert::ToInt32(row->Cells[2]->Value)* System::Convert::ToInt32(row->Cells[3]->Value);
                sumaTotal = sumaTotal + System::Convert::ToInt32(row->Cells[4]->Value);
            }
            txtTotal->Text = System::Convert::ToString(sumaTotal);
        }
private: System::Void frmDetalleVenta_Load(System::Object^  sender, System::EventArgs^  e) {
		
		CrearDataTable();
		producto p;
		p.mostrar(grilla_producto);
		
		montoTotal=0;
		sumaTotal=0;
		txtTotal->Text=System::Convert::ToString(montoTotal);
		System::DateTime datetime=DateTime::Today;
		txtFecha->Text=datetime.ToString("d");

	}
     
private: System::Void grilla_producto_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		try
		{
			System::Data::DataRow^ newReg;
            newReg = myDataTable->NewRow();
            newReg["idProducto"] = System::Convert::ToInt32(grilla_producto->SelectedRows[0]->Cells[0]->Value->ToString());
            newReg["nombre"] = grilla_producto->SelectedRows[0]->Cells[1]->Value->ToString();
            newReg["cantidad"] = 1;
            newReg["precio"] = System::Convert::ToInt32(grilla_producto->SelectedRows[0]->Cells[2]->Value->ToString());
            newReg["subtotal"] = System::Convert::ToInt32(newReg["precio"]->ToString()) * System::Convert::ToInt32(newReg["cantidad"]->ToString());
			myDataTable->Rows->Add(newReg);
			montoTotal=montoTotal+ System::Convert::ToInt32(newReg["subtotal"]->ToString());
			txtTotal->Text=System::Convert::ToString(montoTotal);

			grilla_producto->Visible=false;
			grilla_detalle->Visible=true;
		}		
		catch (Exception^ ex)
        { 
			MessageBox::Show("Debe seleccionar la fila del registro del producto","Producto", MessageBoxButtons::OK,MessageBoxIcon::Information);
		}
		
           
	}
private: System::Void btnVerProducto_Click(System::Object^  sender, System::EventArgs^  e) {
			 grilla_producto->Visible=true;
			 grilla_detalle->Visible=false;
		 }
private: System::Void btnVerDetalle_Click(System::Object^  sender, System::EventArgs^  e) {
			 grilla_producto->Visible=false;
			 grilla_detalle->Visible=true;
		 }
private: System::Void btnBuscarCliente_Click(System::Object^  sender, System::EventArgs^  e) {
		if(txtIdCliente->Text!="")
		{
			cliente a;
			String^ nombre;
			String^ apellidos;
			int i=System::Convert::ToInt32(txtIdCliente->Text);
			a=a.retornarId(i);
			if(a.getIdCliente()!=0)
			{
				int x=a.getIdCliente();
				txtIdClienteCodigo->Text=System::Convert::ToString(a.getIdCliente());
				nombre=marshal_as<System::String^>(a.getNombre());
				apellidos=marshal_as<System::String^>(a.getApellidos());
				txtNombre->Text=nombre + " "+apellidos;
				txtTelefono->Text=System::Convert::ToString(a.getTelefono());				
			}
			else
			{
				MessageBox::Show("El cliente ha sido eliminado.","Información", MessageBoxButtons::OK,MessageBoxIcon::Information);
			}
		}
		else
		{
			MessageBox::Show("Debe ingresar el id del Cliente","Información", MessageBoxButtons::OK,MessageBoxIcon::Information );
			txtIdCliente->Focus();
		}
						
}
private: System::Void btnBuscarVenta_Click(System::Object^  sender, System::EventArgs^  e) {
			 frmBusquedaVenta dv;
			 dv.ShowDialog();
		 }
private: System::Void grilla_detalle_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
			if (grilla_detalle->SelectedRows->Count == 0)
            {
                return;
            }
            else
            {
                grilla_detalle->CurrentCell = grilla_detalle->CurrentRow->Cells["cantidad"];
                grilla_detalle->BeginEdit(true);        
            }
		 }
private: System::Void grilla_detalle_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 ActualizarDataGridViewDetalle();
		 }
};
}

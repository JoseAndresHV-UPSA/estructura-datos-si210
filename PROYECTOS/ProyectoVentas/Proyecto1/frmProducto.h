#pragma once
#include "producto.h"

namespace Proyecto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	
	//public ref class MessageBox

	/// <summary>
	/// Summary for frmProducto
	/// </summary>
	public ref class frmProducto : public System::Windows::Forms::Form
	{
	public:
		frmProducto(void)
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
		~frmProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnNuevo;
	protected: 
	private: System::Windows::Forms::RadioButton^  rbtTodo;
	private: System::Windows::Forms::RadioButton^  rbtId;
	private: System::Windows::Forms::Button^  btnModificar;
	private: System::Windows::Forms::DataGridView^  grilla_producto;







	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Button^  btnGuardar;
	private: System::Windows::Forms::TextBox^  txtPrecio;

	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtBuscar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::Button^  btnBuscar;
	private: System::Windows::Forms::TextBox^  txtIdProducto;
	private: System::Windows::Forms::TextBox^  txtPrecio2;
	private: System::Windows::Forms::TextBox^  txtPrecio1;
	private: System::Windows::Forms::Label^  label2;

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
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->rbtTodo = (gcnew System::Windows::Forms::RadioButton());
			this->rbtId = (gcnew System::Windows::Forms::RadioButton());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->grilla_producto = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->txtPrecio = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtIdProducto = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecio2 = (gcnew System::Windows::Forms::TextBox());
			this->txtPrecio1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_producto))->BeginInit();
			this->SuspendLayout();
			// 
			// btnNuevo
			// 
			this->btnNuevo->Location = System::Drawing::Point(37, 101);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(75, 23);
			this->btnNuevo->TabIndex = 3;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = true;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &frmProducto::btnNuevo_Click);
			// 
			// rbtTodo
			// 
			this->rbtTodo->AutoSize = true;
			this->rbtTodo->Location = System::Drawing::Point(152, 134);
			this->rbtTodo->Name = L"rbtTodo";
			this->rbtTodo->Size = System::Drawing::Size(50, 17);
			this->rbtTodo->TabIndex = 9;
			this->rbtTodo->Text = L"Todo";
			this->rbtTodo->UseVisualStyleBackColor = true;
			this->rbtTodo->CheckedChanged += gcnew System::EventHandler(this, &frmProducto::rbtTodo_CheckedChanged);
			// 
			// rbtId
			// 
			this->rbtId->AutoSize = true;
			this->rbtId->Checked = true;
			this->rbtId->Location = System::Drawing::Point(106, 134);
			this->rbtId->Name = L"rbtId";
			this->rbtId->Size = System::Drawing::Size(36, 17);
			this->rbtId->TabIndex = 8;
			this->rbtId->TabStop = true;
			this->rbtId->Text = L"ID";
			this->rbtId->UseVisualStyleBackColor = true;
			this->rbtId->CheckedChanged += gcnew System::EventHandler(this, &frmProducto::rbtId_CheckedChanged);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(218, 101);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 5;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &frmProducto::btnModificar_Click);
			// 
			// grilla_producto
			// 
			this->grilla_producto->AllowUserToDeleteRows = false;
			this->grilla_producto->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_producto->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Column1, 
				this->Column2, this->Column3});
			this->grilla_producto->Location = System::Drawing::Point(27, 199);
			this->grilla_producto->Name = L"grilla_producto";
			this->grilla_producto->ReadOnly = true;
			this->grilla_producto->Size = System::Drawing::Size(448, 257);
			this->grilla_producto->TabIndex = 36;
			this->grilla_producto->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmProducto::grilla_producto_MouseClick);
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(61, 36);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 34;
			this->label5->Text = L"Descripcion";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(86, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 33;
			this->label4->Text = L"Precio";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Busqueda por:";
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(127, 101);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 4;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &frmProducto::btnGuardar_Click);
			// 
			// txtPrecio
			// 
			this->txtPrecio->Location = System::Drawing::Point(127, 58);
			this->txtPrecio->Name = L"txtPrecio";
			this->txtPrecio->Size = System::Drawing::Size(75, 20);
			this->txtPrecio->TabIndex = 2;
			this->txtPrecio->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(127, 32);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(187, 20);
			this->txtNombre->TabIndex = 1;
			// 
			// txtBuscar
			// 
			this->txtBuscar->Location = System::Drawing::Point(218, 133);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(133, 20);
			this->txtBuscar->TabIndex = 10;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(310, 101);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 6;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &frmProducto::btnEliminar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(400, 101);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(75, 23);
			this->btnBuscar->TabIndex = 7;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &frmProducto::btnBuscar_Click);
			// 
			// txtIdProducto
			// 
			this->txtIdProducto->Location = System::Drawing::Point(127, 6);
			this->txtIdProducto->Name = L"txtIdProducto";
			this->txtIdProducto->Size = System::Drawing::Size(75, 20);
			this->txtIdProducto->TabIndex = 43;
			this->txtIdProducto->Visible = false;
			// 
			// txtPrecio2
			// 
			this->txtPrecio2->Location = System::Drawing::Point(285, 166);
			this->txtPrecio2->Name = L"txtPrecio2";
			this->txtPrecio2->Size = System::Drawing::Size(66, 20);
			this->txtPrecio2->TabIndex = 44;
			// 
			// txtPrecio1
			// 
			this->txtPrecio1->Location = System::Drawing::Point(218, 166);
			this->txtPrecio1->Name = L"txtPrecio1";
			this->txtPrecio1->Size = System::Drawing::Size(57, 20);
			this->txtPrecio1->TabIndex = 45;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(116, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 46;
			this->label2->Text = L"Rango de precio";
			// 
			// frmProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(552, 456);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtPrecio1);
			this->Controls->Add(this->txtPrecio2);
			this->Controls->Add(this->txtIdProducto);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->rbtTodo);
			this->Controls->Add(this->rbtId);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->grilla_producto);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->txtPrecio);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtBuscar);
			this->Name = L"frmProducto";
			this->Text = L"REGISTRO DE PRODUCTOS";
			this->Load += gcnew System::EventHandler(this, &frmProducto::frmProducto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_producto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
    if((txtNombre->Text->Trim()!="")&&(txtPrecio->Text->Trim()!=""))
	{
		String^ s;
		s=txtPrecio->Text;
		if(EsUnNumero(s))
		{
			producto p;
			p.cargar(txtNombre,txtPrecio);
			p.guardar();
			limpiar();
			MessageBox::Show( "Registro creado corréctamente",
         "Producto", MessageBoxButtons::OK,MessageBoxIcon::Information);
			p.mostrar(grilla_producto);
		}
		else
		{
			MessageBox::Show( "Ingresar número en precio de producto",
         "Información", MessageBoxButtons::OK,MessageBoxIcon::Information );
		}
		
		//int c=System::Convert::ToInt32(txtPrecio->Text)
	}
	else
	{
		MessageBox::Show( "Ingresar nombre y precio de producto",
         "Información", MessageBoxButtons::OK,MessageBoxIcon::Information );
	}
}

bool EsUnNumero(String^ numero)
{
  int i;
  int tam=numero->Length;
  for( i=0; i<tam; i++ )
  {
    // En cuanto un caracter no sea numérico
     if(numero[i]<48 || numero[i]>57)
	 {
		 return false;
	 }
  }

  return true;
}
private: System::Void btnBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
	producto p;
	//string n=marshal_as<std::string>(txtBuscar->Text);		
	if(rbtId->Checked)
	{
		if(txtBuscar->Text!="")
		{
			p.buscar_id_producto(txtBuscar,grilla_producto);
			limpiar();
		}
		else
		{
			MessageBox::Show( "Ingresar el id del producto para la búsqueda",
         "Información", MessageBoxButtons::OK,MessageBoxIcon::Information);
		}
		
	}
	else
		if(rbtTodo->Checked)
		{
			p.mostrar(grilla_producto);
			limpiar();
		}
}
private: System::Void frmProducto_Load(System::Object^  sender, System::EventArgs^  e) {
       txtNombre->Focus();
}
private: System::Void btnModificar_Click(System::Object^  sender, System::EventArgs^  e) {
	    producto p;
		if(txtIdProducto->Text!="")
		{
			p.guardarModificado(txtIdProducto,txtNombre,txtPrecio);
			limpiar();
			p.mostrar(grilla_producto);
		}
		else
		{
			MessageBox::Show("No se ha seleccionado ningún producto","Producto", MessageBoxButtons::OK,MessageBoxIcon::Information );
		}
	}	

private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {
	  producto p;	
	  if(txtIdProducto->Text!="")
		{
			if(p.verificarIdExiste(txtIdProducto)==true)
			{
				p.eliminarProducto(txtIdProducto);		 
				limpiar();
				p.mostrar(grilla_producto);
			}
		}
	  else
		{
			MessageBox::Show("No se ha seleccionado ningún producto","Producto", MessageBoxButtons::OK,MessageBoxIcon::Information );
		}
	
	}

void limpiar()
{
	 txtNombre->Text="";
	 txtPrecio->Text="";
	 txtBuscar->Text="";
	 txtIdProducto->Text="";
	 txtNombre->Focus();
}


private: System::Void btnNuevo_Click(System::Object^  sender, System::EventArgs^  e) {
	limpiar();
	txtNombre->Focus();
}

private: System::Void rbtId_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	txtBuscar->Enabled=true;
}


private: System::Void rbtTodo_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 txtBuscar->Enabled=false;
		 }
private: System::Void grilla_producto_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		try
		{
			txtIdProducto->Text=grilla_producto->SelectedRows[0]->Cells[0]->Value->ToString();
			txtNombre->Text=grilla_producto->SelectedRows[0]->Cells[1]->Value->ToString();
			txtPrecio->Text=grilla_producto->SelectedRows[0]->Cells[2]->Value->ToString();		 
		}
		catch (Exception^ ex)
        { 
			MessageBox::Show("Debe seleccionar la fila del registro del producto","Producto", MessageBoxButtons::OK,MessageBoxIcon::Information);
		}			
	}
};
}

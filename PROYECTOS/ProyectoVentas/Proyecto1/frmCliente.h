#pragma once
#include "cliente.h"

namespace Proyecto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmCliente
	/// </summary>
	public ref class frmCliente : public System::Windows::Forms::Form
	{
	public:
		frmCliente(void)
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
		~frmCliente()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtBuscar;
	protected: 

	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::TextBox^  txtApellidos;
	private: System::Windows::Forms::Button^  btnGuardar;
	protected: 
	protected: 
		
	private: System::Windows::Forms::TextBox^  txtEmail;
	private: System::Windows::Forms::TextBox^  txtTelefono;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  btnBuscar;
	private: System::Windows::Forms::DataGridView^  grilla_cliente;
	private: System::Windows::Forms::Button^  btnModificar;
	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::RadioButton^  rbtId;
	private: System::Windows::Forms::RadioButton^  rbtTodo;

	private: System::Windows::Forms::Button^  btnNuevo;
	private: System::Windows::Forms::TextBox^  txtIdCliente;
	private: System::Windows::Forms::RadioButton^  rbtTel;





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
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->txtApellidos = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtTelefono = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->grilla_cliente = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->rbtId = (gcnew System::Windows::Forms::RadioButton());
			this->rbtTodo = (gcnew System::Windows::Forms::RadioButton());
			this->btnNuevo = (gcnew System::Windows::Forms::Button());
			this->txtIdCliente = (gcnew System::Windows::Forms::TextBox());
			this->rbtTel = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_cliente))->BeginInit();
			this->SuspendLayout();
			// 
			// txtBuscar
			// 
			this->txtBuscar->Location = System::Drawing::Point(312, 192);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(257, 20);
			this->txtBuscar->TabIndex = 12;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(104, 43);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(100, 20);
			this->txtNombre->TabIndex = 1;
			// 
			// txtApellidos
			// 
			this->txtApellidos->Location = System::Drawing::Point(104, 69);
			this->txtApellidos->Name = L"txtApellidos";
			this->txtApellidos->Size = System::Drawing::Size(100, 20);
			this->txtApellidos->TabIndex = 2;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(107, 164);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 6;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &frmCliente::txtGuardar_Click);
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(104, 94);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(100, 20);
			this->txtEmail->TabIndex = 3;
			// 
			// txtTelefono
			// 
			this->txtTelefono->Location = System::Drawing::Point(103, 121);
			this->txtTelefono->Name = L"txtTelefono";
			this->txtTelefono->Size = System::Drawing::Size(100, 20);
			this->txtTelefono->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 199);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Busqueda por:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Apellidos";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Nombre";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(50, 124);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Telefono";
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(377, 164);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(75, 23);
			this->btnBuscar->TabIndex = 9;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &frmCliente::button1_Click);
			// 
			// grilla_cliente
			// 
			this->grilla_cliente->AllowUserToDeleteRows = false;
			this->grilla_cliente->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_cliente->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column1, 
				this->Column2, this->Column3, this->Column5, this->Column7});
			this->grilla_cliente->Location = System::Drawing::Point(7, 226);
			this->grilla_cliente->Name = L"grilla_cliente";
			this->grilla_cliente->ReadOnly = true;
			this->grilla_cliente->Size = System::Drawing::Size(632, 187);
			this->grilla_cliente->TabIndex = 19;
			this->grilla_cliente->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmCliente::grilla_cliente_MouseClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id Cliente";
			this->Column1->MaxInputLength = 16767;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nombre";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Apellidos";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Email";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 120;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Telefono";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(198, 164);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 7;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &frmCliente::btnModificar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(287, 164);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 8;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &frmCliente::btnEliminar_Click);
			// 
			// rbtId
			// 
			this->rbtId->AutoSize = true;
			this->rbtId->Checked = true;
			this->rbtId->Location = System::Drawing::Point(97, 197);
			this->rbtId->Name = L"rbtId";
			this->rbtId->Size = System::Drawing::Size(36, 17);
			this->rbtId->TabIndex = 10;
			this->rbtId->TabStop = true;
			this->rbtId->Text = L"ID";
			this->rbtId->UseVisualStyleBackColor = true;
			this->rbtId->CheckedChanged += gcnew System::EventHandler(this, &frmCliente::rbtId_CheckedChanged);
			// 
			// rbtTodo
			// 
			this->rbtTodo->AutoSize = true;
			this->rbtTodo->Location = System::Drawing::Point(230, 197);
			this->rbtTodo->Name = L"rbtTodo";
			this->rbtTodo->Size = System::Drawing::Size(50, 17);
			this->rbtTodo->TabIndex = 11;
			this->rbtTodo->Text = L"Todo";
			this->rbtTodo->UseVisualStyleBackColor = true;
			this->rbtTodo->CheckedChanged += gcnew System::EventHandler(this, &frmCliente::rbtPaterno_CheckedChanged);
			// 
			// btnNuevo
			// 
			this->btnNuevo->Location = System::Drawing::Point(17, 164);
			this->btnNuevo->Name = L"btnNuevo";
			this->btnNuevo->Size = System::Drawing::Size(75, 23);
			this->btnNuevo->TabIndex = 5;
			this->btnNuevo->Text = L"Nuevo";
			this->btnNuevo->UseVisualStyleBackColor = true;
			this->btnNuevo->Click += gcnew System::EventHandler(this, &frmCliente::btnNuevo_Click);
			// 
			// txtIdCliente
			// 
			this->txtIdCliente->Location = System::Drawing::Point(105, 17);
			this->txtIdCliente->Name = L"txtIdCliente";
			this->txtIdCliente->Size = System::Drawing::Size(75, 20);
			this->txtIdCliente->TabIndex = 25;
			this->txtIdCliente->Visible = false;
			// 
			// rbtTel
			// 
			this->rbtTel->AutoSize = true;
			this->rbtTel->Location = System::Drawing::Point(139, 197);
			this->rbtTel->Name = L"rbtTel";
			this->rbtTel->Size = System::Drawing::Size(67, 17);
			this->rbtTel->TabIndex = 26;
			this->rbtTel->TabStop = true;
			this->rbtTel->Text = L"Telefono";
			this->rbtTel->UseVisualStyleBackColor = true;
			// 
			// frmCliente
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(646, 425);
			this->Controls->Add(this->rbtTel);
			this->Controls->Add(this->txtIdCliente);
			this->Controls->Add(this->btnNuevo);
			this->Controls->Add(this->rbtTodo);
			this->Controls->Add(this->rbtId);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->grilla_cliente);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtTelefono);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->txtApellidos);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->txtBuscar);
			this->Name = L"frmCliente";
			this->Text = L"REGISTRO DE CLIENTES";
			this->Load += gcnew System::EventHandler(this, &frmCliente::frmCliente_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_cliente))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtGuardar_Click(System::Object^  sender, System::EventArgs^  e) {
	   if((txtNombre->Text->Trim()!="")&&(txtApellidos->Text->Trim()!=""))
	   {
		    cliente c;
			c.cargar(txtNombre,txtApellidos,txtEmail,txtTelefono);
			c.guardar();
			limpiar();
			
			MessageBox::Show( "Registro creado corréctamente",
            "Cliente", MessageBoxButtons::OK,MessageBoxIcon::Information);
			c.mostrar(grilla_cliente);
	   }
	   else
		{
			MessageBox::Show( "Ingresar nombre y apellidos",
         "Información", MessageBoxButtons::OK,MessageBoxIcon::Information);
		}
			
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	cliente c;
	//string n=marshal_as<std::string>(txtBuscar->Text);		
	if(rbtId->Checked)
	{
		if(txtBuscar->Text!="")
		{
			c.buscar_id_cliente(txtBuscar,grilla_cliente);
			limpiar();
		}
		else
		{
			MessageBox::Show( "Ingresar el id del cliente para la búsqueda",
         "Información", MessageBoxButtons::OK,MessageBoxIcon::Information);
		}
	}



   if(rbtTodo->Checked)
   {
		c.mostrar(grilla_cliente);
		limpiar();
   }


 }

private: System::Void frmCliente_Load(System::Object^  sender, System::EventArgs^  e) {
			txtNombre->Focus();
		 }
private: System::Void btnModificar_Click(System::Object^  sender, System::EventArgs^  e) {
		   cliente c;		   
			if(txtIdCliente->Text!="")
			{
				c.guardarModificado(txtIdCliente,txtNombre,txtApellidos,txtEmail,txtTelefono);
				limpiar();
				c.mostrar(grilla_cliente);
			}
			else
			{
				MessageBox::Show("No se ha seleccionado ningún cliente","Cliente", MessageBoxButtons::OK,MessageBoxIcon::Information);
			}
		  									
		 }
private: System::Void btnEliminar_Click(System::Object^  sender, System::EventArgs^  e) {
		cliente c; 	
		if(txtIdCliente->Text!="")
			{
				if(c.verificarIdExiste(txtIdCliente)==true)
				{
					c.eliminarCliente(txtIdCliente);
					limpiar();
					c.mostrar(grilla_cliente);
				}					
			}
		else
			{
				MessageBox::Show("No se ha seleccionado ningún cliente","Cliente", MessageBoxButtons::OK,MessageBoxIcon::Information);
			}
	}

private: System::Void rbtPaterno_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 txtBuscar->Enabled=false;
		 }
private: System::Void rbtId_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 txtBuscar->Enabled=true;
	  }

void limpiar()
{
	 txtNombre->Text="";
	 txtApellidos->Text="";
	 txtEmail->Text="";
	 txtTelefono->Text="";
	 txtBuscar->Text="";
	 txtIdCliente->Text="";
	 txtNombre->Focus();
}

private: System::Void btnNuevo_Click(System::Object^  sender, System::EventArgs^  e) {
		limpiar();
		txtNombre->Focus();
	}

private: System::Void grilla_cliente_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		 try
		 {
			txtIdCliente->Text=grilla_cliente->SelectedRows[0]->Cells[0]->Value->ToString();
			txtNombre->Text=grilla_cliente->SelectedRows[0]->Cells[1]->Value->ToString();
			txtApellidos->Text=grilla_cliente->SelectedRows[0]->Cells[2]->Value->ToString();
			txtEmail->Text=grilla_cliente->SelectedRows[0]->Cells[3]->Value->ToString();
			txtTelefono->Text=grilla_cliente->SelectedRows[0]->Cells[4]->Value->ToString();
		 }
		catch (Exception^ ex)
        { 
			MessageBox::Show("Debe seleccionar la fila del registro del cliente","Cliente", MessageBoxButtons::OK,MessageBoxIcon::Information);
		}
	}
};
}

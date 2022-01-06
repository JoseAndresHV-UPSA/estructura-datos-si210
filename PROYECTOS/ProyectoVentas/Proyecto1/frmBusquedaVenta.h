#pragma once

#include "venta.h"
#include "detalleventa.h"
#include "producto.h"
#include "cliente.h"
#include "frmBusquedaVenta.h"

namespace Proyecto1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmBusquedaVenta
	/// </summary>
	public ref class frmBusquedaVenta : public System::Windows::Forms::Form
	{
	public:
		frmBusquedaVenta(void)
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
		~frmBusquedaVenta()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  rbtTodo;
	protected: 
	private: System::Windows::Forms::RadioButton^  rbtId;
	private: System::Windows::Forms::Button^  btnBuscar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtBuscar;
	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::TextBox^  txtIdVenta;
	private: System::Windows::Forms::TextBox^  txtFecha;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtNombre;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  grilla_venta;




	private: System::Windows::Forms::DataGridView^  grilla_detalleventa;




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IdVenta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IdProducto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cantidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  subTotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NombreCliente;





















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
			this->rbtTodo = (gcnew System::Windows::Forms::RadioButton());
			this->rbtId = (gcnew System::Windows::Forms::RadioButton());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->txtIdVenta = (gcnew System::Windows::Forms::TextBox());
			this->txtFecha = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->grilla_venta = (gcnew System::Windows::Forms::DataGridView());
			this->grilla_detalleventa = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->IdVenta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IdProducto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->subTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NombreCliente = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_venta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_detalleventa))->BeginInit();
			this->SuspendLayout();
			// 
			// rbtTodo
			// 
			this->rbtTodo->AutoSize = true;
			this->rbtTodo->Location = System::Drawing::Point(151, 120);
			this->rbtTodo->Name = L"rbtTodo";
			this->rbtTodo->Size = System::Drawing::Size(50, 17);
			this->rbtTodo->TabIndex = 28;
			this->rbtTodo->Text = L"Todo";
			this->rbtTodo->UseVisualStyleBackColor = true;
			// 
			// rbtId
			// 
			this->rbtId->AutoSize = true;
			this->rbtId->Checked = true;
			this->rbtId->Location = System::Drawing::Point(109, 120);
			this->rbtId->Name = L"rbtId";
			this->rbtId->Size = System::Drawing::Size(36, 17);
			this->rbtId->TabIndex = 27;
			this->rbtId->TabStop = true;
			this->rbtId->Text = L"ID";
			this->rbtId->UseVisualStyleBackColor = true;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(268, 89);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(75, 23);
			this->btnBuscar->TabIndex = 26;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &frmBusquedaVenta::btnBuscar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Busqueda por:";
			// 
			// txtBuscar
			// 
			this->txtBuscar->Location = System::Drawing::Point(207, 118);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(122, 20);
			this->txtBuscar->TabIndex = 24;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(187, 89);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 29;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// txtIdVenta
			// 
			this->txtIdVenta->Location = System::Drawing::Point(109, 12);
			this->txtIdVenta->Name = L"txtIdVenta";
			this->txtIdVenta->ReadOnly = true;
			this->txtIdVenta->Size = System::Drawing::Size(61, 20);
			this->txtIdVenta->TabIndex = 119;
			this->txtIdVenta->Visible = false;
			// 
			// txtFecha
			// 
			this->txtFecha->Location = System::Drawing::Point(109, 38);
			this->txtFecha->Name = L"txtFecha";
			this->txtFecha->ReadOnly = true;
			this->txtFecha->Size = System::Drawing::Size(121, 20);
			this->txtFecha->TabIndex = 117;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(68, 42);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 13);
			this->label7->TabIndex = 116;
			this->label7->Text = L"Fecha";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(109, 64);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->ReadOnly = true;
			this->txtNombre->Size = System::Drawing::Size(220, 20);
			this->txtNombre->TabIndex = 115;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 67);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 13);
			this->label4->TabIndex = 114;
			this->label4->Text = L"Nombre Cliente";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(59, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 113;
			this->label5->Text = L"Id Venta";
			// 
			// grilla_venta
			// 
			this->grilla_venta->AllowUserToDeleteRows = false;
			this->grilla_venta->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_venta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column1, 
				this->Column2, this->Column3, this->Column5, this->NombreCliente});
			this->grilla_venta->Location = System::Drawing::Point(15, 147);
			this->grilla_venta->Name = L"grilla_venta";
			this->grilla_venta->ReadOnly = true;
			this->grilla_venta->Size = System::Drawing::Size(744, 113);
			this->grilla_venta->TabIndex = 120;
			this->grilla_venta->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmBusquedaVenta::grilla_venta_MouseClick);
			// 
			// grilla_detalleventa
			// 
			this->grilla_detalleventa->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_detalleventa->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->IdVenta, 
				this->IdProducto, this->Nombre, this->Precio, this->Cantidad, this->subTotal});
			this->grilla_detalleventa->Location = System::Drawing::Point(15, 291);
			this->grilla_detalleventa->Name = L"grilla_detalleventa";
			this->grilla_detalleventa->Size = System::Drawing::Size(744, 109);
			this->grilla_detalleventa->TabIndex = 121;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 272);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 122;
			this->label2->Text = L"Detalle de Venta";
			// 
			// IdVenta
			// 
			this->IdVenta->HeaderText = L"IdVenta";
			this->IdVenta->Name = L"IdVenta";
			// 
			// IdProducto
			// 
			this->IdProducto->HeaderText = L"IdProducto";
			this->IdProducto->Name = L"IdProducto";
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			// 
			// Precio
			// 
			this->Precio->HeaderText = L"Precio";
			this->Precio->Name = L"Precio";
			// 
			// Cantidad
			// 
			this->Cantidad->HeaderText = L"Cantidad";
			this->Cantidad->Name = L"Cantidad";
			// 
			// subTotal
			// 
			this->subTotal->HeaderText = L"subTotal";
			this->subTotal->Name = L"subTotal";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Id Venta";
			this->Column1->MaxInputLength = 16767;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 80;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Fecha";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Monto";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 150;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Id Cliente";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 120;
			// 
			// NombreCliente
			// 
			this->NombreCliente->HeaderText = L"NombreCliente";
			this->NombreCliente->Name = L"NombreCliente";
			this->NombreCliente->ReadOnly = true;
			// 
			// frmBusquedaVenta
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(771, 412);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->grilla_detalleventa);
			this->Controls->Add(this->grilla_venta);
			this->Controls->Add(this->txtIdVenta);
			this->Controls->Add(this->txtFecha);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtNombre);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->rbtTodo);
			this->Controls->Add(this->rbtId);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtBuscar);
			this->Name = L"frmBusquedaVenta";
			this->Text = L"Busqueda de Venta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_venta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_detalleventa))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
				venta v;
				string n=marshal_as<std::string>(txtBuscar->Text);		
				if(rbtId->Checked)
				{					
					v.buscar_id_venta(txtBuscar,grilla_venta);
					//limpiar();
				}
				else
				  if(rbtTodo->Checked)
				  {
					txtBuscar->Text=""; 
					v.mostrar(grilla_venta);
					//limpiar();
				  }
			 }
private: System::Void grilla_venta_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			try
			{
				txtIdVenta->Text=grilla_venta->SelectedRows[0]->Cells[0]->Value->ToString();
				if(txtIdVenta->Text!="")
				{
					grilla_detalleventa->Rows->Clear();
					grilla_detalleventa->Refresh();
					detalleventa dv;
					dv.mostrar(txtIdVenta,grilla_detalleventa);
				}				
			}
			catch (Exception^ ex)
			{ 
				MessageBox::Show("Debe seleccionar la fila del registro de la venta","Venta", MessageBoxButtons::OK,MessageBoxIcon::Information);
			}

		 }
};
}

#pragma once

namespace SistemaControldeInventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmClientesProveedores
	/// </summary>
	public ref class frmClientesProveedores : public System::Windows::Forms::Form
	{
	public:
		frmClientesProveedores(void)
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
		~frmClientesProveedores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbTitulo;
	protected: 
	private: System::Windows::Forms::RadioButton^  rbtnCliente;
	private: System::Windows::Forms::RadioButton^  rbtnProveedor;
	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::Button^  btnGuardar;

	private: System::Windows::Forms::Label^  lbNombre;

	private: System::Windows::Forms::TextBox^  tbNombre;
	private: System::Windows::Forms::Label^  lbListaClientes;
	private: System::Windows::Forms::Label^  lbListaProveedores;
	private: System::Windows::Forms::DataGridView^  dgvListaClientes;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridView^  dgvListaProveedores;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::Button^  btnVolver;

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
			this->lbTitulo = (gcnew System::Windows::Forms::Label());
			this->rbtnCliente = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnProveedor = (gcnew System::Windows::Forms::RadioButton());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->lbNombre = (gcnew System::Windows::Forms::Label());
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->lbListaClientes = (gcnew System::Windows::Forms::Label());
			this->lbListaProveedores = (gcnew System::Windows::Forms::Label());
			this->dgvListaClientes = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvListaProveedores = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvListaClientes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvListaProveedores))->BeginInit();
			this->SuspendLayout();
			// 
			// lbTitulo
			// 
			this->lbTitulo->AutoSize = true;
			this->lbTitulo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbTitulo->Location = System::Drawing::Point(10, 9);
			this->lbTitulo->Name = L"lbTitulo";
			this->lbTitulo->Size = System::Drawing::Size(534, 32);
			this->lbTitulo->TabIndex = 18;
			this->lbTitulo->Text = L"REGISTRAR CLIENTE / PROVEEDOR";
			this->lbTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// rbtnCliente
			// 
			this->rbtnCliente->AutoSize = true;
			this->rbtnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rbtnCliente->Location = System::Drawing::Point(103, 84);
			this->rbtnCliente->Name = L"rbtnCliente";
			this->rbtnCliente->Size = System::Drawing::Size(72, 21);
			this->rbtnCliente->TabIndex = 19;
			this->rbtnCliente->TabStop = true;
			this->rbtnCliente->Text = L"Cliente";
			this->rbtnCliente->UseVisualStyleBackColor = true;
			// 
			// rbtnProveedor
			// 
			this->rbtnProveedor->AutoSize = true;
			this->rbtnProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rbtnProveedor->Location = System::Drawing::Point(181, 84);
			this->rbtnProveedor->Name = L"rbtnProveedor";
			this->rbtnProveedor->Size = System::Drawing::Size(95, 21);
			this->rbtnProveedor->TabIndex = 20;
			this->rbtnProveedor->TabStop = true;
			this->rbtnProveedor->Text = L"Proveedor";
			this->rbtnProveedor->UseVisualStyleBackColor = true;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(447, 50);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(97, 32);
			this->btnEliminar->TabIndex = 27;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(344, 50);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(97, 32);
			this->btnGuardar->TabIndex = 26;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			// 
			// lbNombre
			// 
			this->lbNombre->AutoSize = true;
			this->lbNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbNombre->Location = System::Drawing::Point(18, 56);
			this->lbNombre->Name = L"lbNombre";
			this->lbNombre->Size = System::Drawing::Size(73, 18);
			this->lbNombre->TabIndex = 24;
			this->lbNombre->Text = L"Nombre:";
			this->lbNombre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(104, 56);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(210, 22);
			this->tbNombre->TabIndex = 22;
			this->tbNombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lbListaClientes
			// 
			this->lbListaClientes->AutoSize = true;
			this->lbListaClientes->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbListaClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbListaClientes->Location = System::Drawing::Point(12, 121);
			this->lbListaClientes->Name = L"lbListaClientes";
			this->lbListaClientes->Size = System::Drawing::Size(231, 29);
			this->lbListaClientes->TabIndex = 28;
			this->lbListaClientes->Text = L" LISTA CLIENTES ";
			this->lbListaClientes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbListaProveedores
			// 
			this->lbListaProveedores->AutoSize = true;
			this->lbListaProveedores->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbListaProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbListaProveedores->Location = System::Drawing::Point(277, 121);
			this->lbListaProveedores->Name = L"lbListaProveedores";
			this->lbListaProveedores->Size = System::Drawing::Size(286, 29);
			this->lbListaProveedores->TabIndex = 29;
			this->lbListaProveedores->Text = L"LISTA PROVEEDORES";
			this->lbListaProveedores->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dgvListaClientes
			// 
			this->dgvListaClientes->AllowUserToAddRows = false;
			this->dgvListaClientes->AllowUserToDeleteRows = false;
			this->dgvListaClientes->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvListaClientes->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaClientes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->Column1});
			this->dgvListaClientes->Location = System::Drawing::Point(21, 163);
			this->dgvListaClientes->Name = L"dgvListaClientes";
			this->dgvListaClientes->RowHeadersVisible = false;
			this->dgvListaClientes->RowTemplate->Height = 24;
			this->dgvListaClientes->Size = System::Drawing::Size(215, 159);
			this->dgvListaClientes->TabIndex = 30;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->Name = L"Column1";
			// 
			// dgvListaProveedores
			// 
			this->dgvListaProveedores->AllowUserToAddRows = false;
			this->dgvListaProveedores->AllowUserToDeleteRows = false;
			this->dgvListaProveedores->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvListaProveedores->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaProveedores->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) {this->dataGridViewTextBoxColumn1});
			this->dgvListaProveedores->Location = System::Drawing::Point(320, 163);
			this->dgvListaProveedores->Name = L"dgvListaProveedores";
			this->dgvListaProveedores->RowHeadersVisible = false;
			this->dgvListaProveedores->RowTemplate->Height = 24;
			this->dgvListaProveedores->Size = System::Drawing::Size(215, 159);
			this->dgvListaProveedores->TabIndex = 31;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVolver->Location = System::Drawing::Point(12, 340);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(97, 32);
			this->btnVolver->TabIndex = 32;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &frmClientesProveedores::btnVolver_Click);
			// 
			// frmClientesProveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 384);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->dgvListaProveedores);
			this->Controls->Add(this->dgvListaClientes);
			this->Controls->Add(this->lbListaProveedores);
			this->Controls->Add(this->lbListaClientes);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->lbNombre);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->rbtnProveedor);
			this->Controls->Add(this->rbtnCliente);
			this->Controls->Add(this->lbTitulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"frmClientesProveedores";
			this->Text = L"CLIENTES Y PROVEEDORES";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvListaClientes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvListaProveedores))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnVolver_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}

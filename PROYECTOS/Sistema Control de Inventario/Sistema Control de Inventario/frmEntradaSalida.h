#pragma once

namespace SistemaControldeInventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmEntradaSalida
	/// </summary>
	public ref class frmEntradaSalida : public System::Windows::Forms::Form
	{
	public:
		frmEntradaSalida(void)
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
		~frmEntradaSalida()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  lbFecha;
	private: System::Windows::Forms::TextBox^  tbFecha;
	private: System::Windows::Forms::RadioButton^  rbtnSalida;

	private: System::Windows::Forms::RadioButton^  rbtnEntrada;
	private: System::Windows::Forms::Label^  lbClienteProveedor;

	private: System::Windows::Forms::CheckedListBox^  clbClienteProveedor;
	private: System::Windows::Forms::CheckedListBox^  clbProducto;
	private: System::Windows::Forms::Label^  lbProducto;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnRegistrar;
	private: System::Windows::Forms::Label^  lbDocumento;
	private: System::Windows::Forms::TextBox^  tbDocumento;
	private: System::Windows::Forms::Button^  btnEliminar;
	private: System::Windows::Forms::Label^  lbTitulo;
	private: System::Windows::Forms::Label^  lbListaClientes;
	private: System::Windows::Forms::DataGridView^  dgvEntradasSalidas;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::Button^  btnVolver;




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
			this->lbFecha = (gcnew System::Windows::Forms::Label());
			this->tbFecha = (gcnew System::Windows::Forms::TextBox());
			this->rbtnSalida = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnEntrada = (gcnew System::Windows::Forms::RadioButton());
			this->lbClienteProveedor = (gcnew System::Windows::Forms::Label());
			this->clbClienteProveedor = (gcnew System::Windows::Forms::CheckedListBox());
			this->clbProducto = (gcnew System::Windows::Forms::CheckedListBox());
			this->lbProducto = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->lbDocumento = (gcnew System::Windows::Forms::Label());
			this->tbDocumento = (gcnew System::Windows::Forms::TextBox());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->lbTitulo = (gcnew System::Windows::Forms::Label());
			this->lbListaClientes = (gcnew System::Windows::Forms::Label());
			this->dgvEntradasSalidas = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvEntradasSalidas))->BeginInit();
			this->SuspendLayout();
			// 
			// lbFecha
			// 
			this->lbFecha->AutoSize = true;
			this->lbFecha->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbFecha->Location = System::Drawing::Point(22, 66);
			this->lbFecha->Name = L"lbFecha";
			this->lbFecha->Size = System::Drawing::Size(59, 18);
			this->lbFecha->TabIndex = 26;
			this->lbFecha->Text = L"Fecha:";
			this->lbFecha->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbFecha
			// 
			this->tbFecha->Location = System::Drawing::Point(100, 66);
			this->tbFecha->Name = L"tbFecha";
			this->tbFecha->Size = System::Drawing::Size(81, 22);
			this->tbFecha->TabIndex = 25;
			this->tbFecha->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// rbtnSalida
			// 
			this->rbtnSalida->AutoSize = true;
			this->rbtnSalida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rbtnSalida->Location = System::Drawing::Point(100, 97);
			this->rbtnSalida->Name = L"rbtnSalida";
			this->rbtnSalida->Size = System::Drawing::Size(68, 21);
			this->rbtnSalida->TabIndex = 28;
			this->rbtnSalida->TabStop = true;
			this->rbtnSalida->Text = L"Salida";
			this->rbtnSalida->UseVisualStyleBackColor = true;
			// 
			// rbtnEntrada
			// 
			this->rbtnEntrada->AutoSize = true;
			this->rbtnEntrada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rbtnEntrada->Location = System::Drawing::Point(22, 97);
			this->rbtnEntrada->Name = L"rbtnEntrada";
			this->rbtnEntrada->Size = System::Drawing::Size(79, 21);
			this->rbtnEntrada->TabIndex = 27;
			this->rbtnEntrada->TabStop = true;
			this->rbtnEntrada->Text = L"Entrada";
			this->rbtnEntrada->UseVisualStyleBackColor = true;
			// 
			// lbClienteProveedor
			// 
			this->lbClienteProveedor->AutoSize = true;
			this->lbClienteProveedor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbClienteProveedor->Location = System::Drawing::Point(240, 45);
			this->lbClienteProveedor->Name = L"lbClienteProveedor";
			this->lbClienteProveedor->Size = System::Drawing::Size(148, 18);
			this->lbClienteProveedor->TabIndex = 30;
			this->lbClienteProveedor->Text = L"Cliente/Proveedor:";
			this->lbClienteProveedor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// clbClienteProveedor
			// 
			this->clbClienteProveedor->FormattingEnabled = true;
			this->clbClienteProveedor->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Cliente 1", L"Cliente 2", L"Cliente 3"});
			this->clbClienteProveedor->Location = System::Drawing::Point(246, 66);
			this->clbClienteProveedor->Name = L"clbClienteProveedor";
			this->clbClienteProveedor->Size = System::Drawing::Size(142, 106);
			this->clbClienteProveedor->TabIndex = 31;
			// 
			// clbProducto
			// 
			this->clbProducto->FormattingEnabled = true;
			this->clbProducto->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Producto 1", L"Producto 2", L"Producto 3"});
			this->clbProducto->Location = System::Drawing::Point(462, 65);
			this->clbProducto->Name = L"clbProducto";
			this->clbProducto->Size = System::Drawing::Size(142, 106);
			this->clbProducto->TabIndex = 33;
			// 
			// lbProducto
			// 
			this->lbProducto->AutoSize = true;
			this->lbProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbProducto->Location = System::Drawing::Point(459, 44);
			this->lbProducto->Name = L"lbProducto";
			this->lbProducto->Size = System::Drawing::Size(82, 18);
			this->lbProducto->TabIndex = 32;
			this->lbProducto->Text = L"Producto:";
			this->lbProducto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(61, 22);
			this->textBox1->TabIndex = 34;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 18);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Cantidad:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(660, 130);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(93, 31);
			this->btnRegistrar->TabIndex = 36;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			// 
			// lbDocumento
			// 
			this->lbDocumento->AutoSize = true;
			this->lbDocumento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbDocumento->Location = System::Drawing::Point(9, 236);
			this->lbDocumento->Name = L"lbDocumento";
			this->lbDocumento->Size = System::Drawing::Size(100, 18);
			this->lbDocumento->TabIndex = 38;
			this->lbDocumento->Text = L"Documento:";
			this->lbDocumento->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbDocumento
			// 
			this->tbDocumento->Location = System::Drawing::Point(12, 259);
			this->tbDocumento->Name = L"tbDocumento";
			this->tbDocumento->Size = System::Drawing::Size(97, 22);
			this->tbDocumento->TabIndex = 37;
			this->tbDocumento->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(12, 287);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(97, 27);
			this->btnEliminar->TabIndex = 39;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// lbTitulo
			// 
			this->lbTitulo->AutoSize = true;
			this->lbTitulo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbTitulo->Location = System::Drawing::Point(12, 9);
			this->lbTitulo->Name = L"lbTitulo";
			this->lbTitulo->Size = System::Drawing::Size(675, 32);
			this->lbTitulo->TabIndex = 19;
			this->lbTitulo->Text = L"            REGISTRAR ENTRADA / SALIDA              ";
			this->lbTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbListaClientes
			// 
			this->lbListaClientes->AutoSize = true;
			this->lbListaClientes->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbListaClientes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbListaClientes->Location = System::Drawing::Point(12, 180);
			this->lbListaClientes->Name = L"lbListaClientes";
			this->lbListaClientes->Size = System::Drawing::Size(686, 32);
			this->lbListaClientes->TabIndex = 40;
			this->lbListaClientes->Text = L"        REGISTROS DE ENTRADAS / SALIDAS        ";
			this->lbListaClientes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dgvEntradasSalidas
			// 
			this->dgvEntradasSalidas->AllowUserToAddRows = false;
			this->dgvEntradasSalidas->AllowUserToDeleteRows = false;
			this->dgvEntradasSalidas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvEntradasSalidas->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5});
			this->dgvEntradasSalidas->Location = System::Drawing::Point(120, 235);
			this->dgvEntradasSalidas->Name = L"dgvEntradasSalidas";
			this->dgvEntradasSalidas->RowHeadersVisible = false;
			this->dgvEntradasSalidas->RowTemplate->Height = 24;
			this->dgvEntradasSalidas->Size = System::Drawing::Size(633, 259);
			this->dgvEntradasSalidas->TabIndex = 41;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Doc";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 60;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Producto";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 120;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Acción";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 80;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Cantidad";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Cliente/Proveedor";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 150;
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVolver->Location = System::Drawing::Point(12, 462);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(97, 32);
			this->btnVolver->TabIndex = 42;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &frmEntradaSalida::btnVolver_Click);
			// 
			// frmEntradaSalida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 513);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->dgvEntradasSalidas);
			this->Controls->Add(this->lbListaClientes);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->lbDocumento);
			this->Controls->Add(this->tbDocumento);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->clbProducto);
			this->Controls->Add(this->lbProducto);
			this->Controls->Add(this->clbClienteProveedor);
			this->Controls->Add(this->lbClienteProveedor);
			this->Controls->Add(this->rbtnSalida);
			this->Controls->Add(this->rbtnEntrada);
			this->Controls->Add(this->lbFecha);
			this->Controls->Add(this->tbFecha);
			this->Controls->Add(this->lbTitulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"frmEntradaSalida";
			this->Text = L"ENTRADAS Y SALIDAS ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvEntradasSalidas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnVolver_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}

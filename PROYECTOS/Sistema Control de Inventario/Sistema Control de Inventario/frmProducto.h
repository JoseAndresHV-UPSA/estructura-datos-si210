#pragma once

namespace SistemaControldeInventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^  tbNombre;
	protected: 
	private: System::Windows::Forms::TextBox^  tbCodigo;
	private: System::Windows::Forms::Label^  lbNombre;
	private: System::Windows::Forms::Label^  lbCodigo;
	private: System::Windows::Forms::Label^  lbTitulo;
	private: System::Windows::Forms::Label^  lbListaProductos;
	private: System::Windows::Forms::Button^  btnGuardar;
	private: System::Windows::Forms::DataGridView^  dgvListaProductos;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::Button^  btnEliminar;
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
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->tbCodigo = (gcnew System::Windows::Forms::TextBox());
			this->lbNombre = (gcnew System::Windows::Forms::Label());
			this->lbCodigo = (gcnew System::Windows::Forms::Label());
			this->lbTitulo = (gcnew System::Windows::Forms::Label());
			this->lbListaProductos = (gcnew System::Windows::Forms::Label());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->dgvListaProductos = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvListaProductos))->BeginInit();
			this->SuspendLayout();
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(120, 54);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(137, 22);
			this->tbNombre->TabIndex = 0;
			this->tbNombre->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// tbCodigo
			// 
			this->tbCodigo->Location = System::Drawing::Point(120, 92);
			this->tbCodigo->Name = L"tbCodigo";
			this->tbCodigo->Size = System::Drawing::Size(137, 22);
			this->tbCodigo->TabIndex = 1;
			this->tbCodigo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lbNombre
			// 
			this->lbNombre->AutoSize = true;
			this->lbNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbNombre->Location = System::Drawing::Point(20, 55);
			this->lbNombre->Name = L"lbNombre";
			this->lbNombre->Size = System::Drawing::Size(73, 18);
			this->lbNombre->TabIndex = 15;
			this->lbNombre->Text = L"Nombre:";
			this->lbNombre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbCodigo
			// 
			this->lbCodigo->AutoSize = true;
			this->lbCodigo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbCodigo->Location = System::Drawing::Point(27, 93);
			this->lbCodigo->Name = L"lbCodigo";
			this->lbCodigo->Size = System::Drawing::Size(67, 18);
			this->lbCodigo->TabIndex = 16;
			this->lbCodigo->Text = L"Código:";
			this->lbCodigo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbTitulo
			// 
			this->lbTitulo->AutoSize = true;
			this->lbTitulo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbTitulo->Location = System::Drawing::Point(11, 9);
			this->lbTitulo->Name = L"lbTitulo";
			this->lbTitulo->Size = System::Drawing::Size(363, 32);
			this->lbTitulo->TabIndex = 17;
			this->lbTitulo->Text = L"REGISTRAR PRODUCTO\r\n";
			this->lbTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbListaProductos
			// 
			this->lbListaProductos->AutoSize = true;
			this->lbListaProductos->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbListaProductos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbListaProductos->Location = System::Drawing::Point(11, 131);
			this->lbListaProductos->Name = L"lbListaProductos";
			this->lbListaProductos->Size = System::Drawing::Size(359, 32);
			this->lbListaProductos->TabIndex = 18;
			this->lbListaProductos->Text = L" LISTA DE PRODUCTOS ";
			this->lbListaProductos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnGuardar->Location = System::Drawing::Point(273, 49);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(97, 32);
			this->btnGuardar->TabIndex = 19;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			// 
			// dgvListaProductos
			// 
			this->dgvListaProductos->AllowUserToAddRows = false;
			this->dgvListaProductos->AllowUserToDeleteRows = false;
			this->dgvListaProductos->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvListaProductos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaProductos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {this->Column1, 
				this->Column2});
			this->dgvListaProductos->Location = System::Drawing::Point(13, 174);
			this->dgvListaProductos->Name = L"dgvListaProductos";
			this->dgvListaProductos->RowHeadersVisible = false;
			this->dgvListaProductos->RowTemplate->Height = 24;
			this->dgvListaProductos->Size = System::Drawing::Size(358, 159);
			this->dgvListaProductos->TabIndex = 20;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Código";
			this->Column2->Name = L"Column2";
			// 
			// btnEliminar
			// 
			this->btnEliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnEliminar->Location = System::Drawing::Point(273, 87);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(97, 32);
			this->btnEliminar->TabIndex = 21;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVolver->Location = System::Drawing::Point(13, 341);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(97, 32);
			this->btnVolver->TabIndex = 33;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &frmProducto::btnVolver_Click);
			// 
			// frmProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 382);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->dgvListaProductos);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->lbListaProductos);
			this->Controls->Add(this->lbTitulo);
			this->Controls->Add(this->lbCodigo);
			this->Controls->Add(this->lbNombre);
			this->Controls->Add(this->tbCodigo);
			this->Controls->Add(this->tbNombre);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"frmProducto";
			this->Text = L"PRODUCTO";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvListaProductos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnVolver_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
};
}

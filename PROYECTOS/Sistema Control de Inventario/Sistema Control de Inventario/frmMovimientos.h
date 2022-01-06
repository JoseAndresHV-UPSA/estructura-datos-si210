#pragma once

namespace SistemaControldeInventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMovimientos
	/// </summary>
	public ref class frmMovimientos : public System::Windows::Forms::Form
	{
	public:
		frmMovimientos(void)
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
		~frmMovimientos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbTitulo;
	private: System::Windows::Forms::RadioButton^  rbtnUEPS;
	private: System::Windows::Forms::RadioButton^  rbtnPEPS;
	private: System::Windows::Forms::DataGridView^  dgvMovimientos;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
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
			this->lbTitulo = (gcnew System::Windows::Forms::Label());
			this->rbtnUEPS = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnPEPS = (gcnew System::Windows::Forms::RadioButton());
			this->dgvMovimientos = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvMovimientos))->BeginInit();
			this->SuspendLayout();
			// 
			// lbTitulo
			// 
			this->lbTitulo->AutoSize = true;
			this->lbTitulo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbTitulo->Location = System::Drawing::Point(12, 9);
			this->lbTitulo->Name = L"lbTitulo";
			this->lbTitulo->Size = System::Drawing::Size(854, 32);
			this->lbTitulo->TabIndex = 20;
			this->lbTitulo->Text = L"                             DETALLE DE MOVIMIENTOS                          ";
			this->lbTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// rbtnUEPS
			// 
			this->rbtnUEPS->AutoSize = true;
			this->rbtnUEPS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rbtnUEPS->Location = System::Drawing::Point(90, 64);
			this->rbtnUEPS->Name = L"rbtnUEPS";
			this->rbtnUEPS->Size = System::Drawing::Size(66, 21);
			this->rbtnUEPS->TabIndex = 30;
			this->rbtnUEPS->TabStop = true;
			this->rbtnUEPS->Text = L"UEPS";
			this->rbtnUEPS->UseVisualStyleBackColor = true;
			// 
			// rbtnPEPS
			// 
			this->rbtnPEPS->AutoSize = true;
			this->rbtnPEPS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->rbtnPEPS->Location = System::Drawing::Point(12, 64);
			this->rbtnPEPS->Name = L"rbtnPEPS";
			this->rbtnPEPS->Size = System::Drawing::Size(65, 21);
			this->rbtnPEPS->TabIndex = 29;
			this->rbtnPEPS->TabStop = true;
			this->rbtnPEPS->Text = L"PEPS";
			this->rbtnPEPS->UseVisualStyleBackColor = true;
			// 
			// dgvMovimientos
			// 
			this->dgvMovimientos->AllowUserToAddRows = false;
			this->dgvMovimientos->AllowUserToDeleteRows = false;
			this->dgvMovimientos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMovimientos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Column1, 
				this->Column6, this->Column2, this->Column3, this->Column4, this->Column5, this->Column7});
			this->dgvMovimientos->Location = System::Drawing::Point(12, 91);
			this->dgvMovimientos->Name = L"dgvMovimientos";
			this->dgvMovimientos->RowHeadersVisible = false;
			this->dgvMovimientos->RowTemplate->Height = 24;
			this->dgvMovimientos->Size = System::Drawing::Size(953, 301);
			this->dgvMovimientos->TabIndex = 42;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Doc";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 60;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Fecha";
			this->Column6->Name = L"Column6";
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
			// Column7
			// 
			this->Column7->HeaderText = L"Stock";
			this->Column7->Name = L"Column7";
			// 
			// btnVolver
			// 
			this->btnVolver->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVolver->Location = System::Drawing::Point(12, 398);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(97, 32);
			this->btnVolver->TabIndex = 43;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &frmMovimientos::btnVolver_Click);
			// 
			// frmMovimientos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(977, 444);
			this->Controls->Add(this->btnVolver);
			this->Controls->Add(this->dgvMovimientos);
			this->Controls->Add(this->rbtnUEPS);
			this->Controls->Add(this->rbtnPEPS);
			this->Controls->Add(this->lbTitulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"frmMovimientos";
			this->Text = L"MOVIMIENTOS";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvMovimientos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnVolver_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
};
}

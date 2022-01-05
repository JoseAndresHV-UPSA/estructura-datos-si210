#pragma once
#include "Operaciones.h"

namespace MATRICES {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	Operaciones matriz1;
	Operaciones matriz2;
	Operaciones matriz3;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLimpiar2;
	protected:
	private: System::Windows::Forms::Button^ btnCargar2;
	private: System::Windows::Forms::Button^ btnLimpiar1;
	private: System::Windows::Forms::Button^ btnCargar1;
	private: System::Windows::Forms::Button^ btnMultiplicar;
	private: System::Windows::Forms::Button^ btnSumar;
	private: System::Windows::Forms::Button^ btnSumarCols;
	private: System::Windows::Forms::Button^ btnSumarFilas;
	private: System::Windows::Forms::Button^ btnOrdenar;
	private: System::Windows::Forms::Button^ btnTranspuesta;
	private: System::Windows::Forms::Button^ btnTriangSup;

	private: System::Windows::Forms::DataGridView^ dgvM3;
	private: System::Windows::Forms::Button^ btnDim2;
	private: System::Windows::Forms::Button^ btnDim1;
	private: System::Windows::Forms::TextBox^ tbC2;
	private: System::Windows::Forms::TextBox^ tbF2;
	private: System::Windows::Forms::TextBox^ tbC1;
	private: System::Windows::Forms::TextBox^ tbF1;
	private: System::Windows::Forms::DataGridView^ dgvM2;
	private: System::Windows::Forms::DataGridView^ dgvM1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnLimpiar2 = (gcnew System::Windows::Forms::Button());
			this->btnCargar2 = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar1 = (gcnew System::Windows::Forms::Button());
			this->btnCargar1 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicar = (gcnew System::Windows::Forms::Button());
			this->btnSumar = (gcnew System::Windows::Forms::Button());
			this->btnSumarCols = (gcnew System::Windows::Forms::Button());
			this->btnSumarFilas = (gcnew System::Windows::Forms::Button());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->btnTranspuesta = (gcnew System::Windows::Forms::Button());
			this->btnTriangSup = (gcnew System::Windows::Forms::Button());
			this->dgvM3 = (gcnew System::Windows::Forms::DataGridView());
			this->btnDim2 = (gcnew System::Windows::Forms::Button());
			this->btnDim1 = (gcnew System::Windows::Forms::Button());
			this->tbC2 = (gcnew System::Windows::Forms::TextBox());
			this->tbF2 = (gcnew System::Windows::Forms::TextBox());
			this->tbC1 = (gcnew System::Windows::Forms::TextBox());
			this->tbF1 = (gcnew System::Windows::Forms::TextBox());
			this->dgvM2 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvM1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLimpiar2
			// 
			this->btnLimpiar2->Location = System::Drawing::Point(650, 154);
			this->btnLimpiar2->Name = L"btnLimpiar2";
			this->btnLimpiar2->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar2->TabIndex = 43;
			this->btnLimpiar2->Text = L"Limpiar";
			this->btnLimpiar2->UseVisualStyleBackColor = true;
			this->btnLimpiar2->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar2_Click);
			// 
			// btnCargar2
			// 
			this->btnCargar2->Location = System::Drawing::Point(651, 125);
			this->btnCargar2->Name = L"btnCargar2";
			this->btnCargar2->Size = System::Drawing::Size(75, 23);
			this->btnCargar2->TabIndex = 42;
			this->btnCargar2->Text = L"Cargar";
			this->btnCargar2->UseVisualStyleBackColor = true;
			this->btnCargar2->Click += gcnew System::EventHandler(this, &MyForm::btnCargar2_Click);
			// 
			// btnLimpiar1
			// 
			this->btnLimpiar1->Location = System::Drawing::Point(256, 156);
			this->btnLimpiar1->Name = L"btnLimpiar1";
			this->btnLimpiar1->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar1->TabIndex = 41;
			this->btnLimpiar1->Text = L"Limpiar";
			this->btnLimpiar1->UseVisualStyleBackColor = true;
			this->btnLimpiar1->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar1_Click);
			// 
			// btnCargar1
			// 
			this->btnCargar1->Location = System::Drawing::Point(257, 127);
			this->btnCargar1->Name = L"btnCargar1";
			this->btnCargar1->Size = System::Drawing::Size(75, 23);
			this->btnCargar1->TabIndex = 40;
			this->btnCargar1->Text = L"Cargar";
			this->btnCargar1->UseVisualStyleBackColor = true;
			this->btnCargar1->Click += gcnew System::EventHandler(this, &MyForm::btnCargar1_Click);
			// 
			// btnMultiplicar
			// 
			this->btnMultiplicar->Location = System::Drawing::Point(495, 296);
			this->btnMultiplicar->Name = L"btnMultiplicar";
			this->btnMultiplicar->Size = System::Drawing::Size(75, 23);
			this->btnMultiplicar->TabIndex = 39;
			this->btnMultiplicar->Text = L"Multiplicar";
			this->btnMultiplicar->UseVisualStyleBackColor = true;
			this->btnMultiplicar->Click += gcnew System::EventHandler(this, &MyForm::btnMultiplicar_Click);
			// 
			// btnSumar
			// 
			this->btnSumar->Location = System::Drawing::Point(401, 296);
			this->btnSumar->Name = L"btnSumar";
			this->btnSumar->Size = System::Drawing::Size(75, 23);
			this->btnSumar->TabIndex = 38;
			this->btnSumar->Text = L"Sumar";
			this->btnSumar->UseVisualStyleBackColor = true;
			this->btnSumar->Click += gcnew System::EventHandler(this, &MyForm::btnSumar_Click);
			// 
			// btnSumarCols
			// 
			this->btnSumarCols->Location = System::Drawing::Point(495, 267);
			this->btnSumarCols->Name = L"btnSumarCols";
			this->btnSumarCols->Size = System::Drawing::Size(75, 23);
			this->btnSumarCols->TabIndex = 37;
			this->btnSumarCols->Text = L"SumarCols";
			this->btnSumarCols->UseVisualStyleBackColor = true;
			this->btnSumarCols->Click += gcnew System::EventHandler(this, &MyForm::btnSumarCols_Click);
			// 
			// btnSumarFilas
			// 
			this->btnSumarFilas->Location = System::Drawing::Point(401, 267);
			this->btnSumarFilas->Name = L"btnSumarFilas";
			this->btnSumarFilas->Size = System::Drawing::Size(75, 23);
			this->btnSumarFilas->TabIndex = 36;
			this->btnSumarFilas->Text = L"SumarFilas";
			this->btnSumarFilas->UseVisualStyleBackColor = true;
			this->btnSumarFilas->Click += gcnew System::EventHandler(this, &MyForm::btnSumarFilas_Click);
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->Location = System::Drawing::Point(590, 238);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(75, 23);
			this->btnOrdenar->TabIndex = 35;
			this->btnOrdenar->Text = L"Ordenar";
			this->btnOrdenar->UseVisualStyleBackColor = true;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &MyForm::btnOrdenar_Click);
			// 
			// btnTranspuesta
			// 
			this->btnTranspuesta->Location = System::Drawing::Point(495, 238);
			this->btnTranspuesta->Name = L"btnTranspuesta";
			this->btnTranspuesta->Size = System::Drawing::Size(75, 23);
			this->btnTranspuesta->TabIndex = 34;
			this->btnTranspuesta->Text = L"Transpuesta";
			this->btnTranspuesta->UseVisualStyleBackColor = true;
			this->btnTranspuesta->Click += gcnew System::EventHandler(this, &MyForm::btnTranspuesta_Click);
			// 
			// btnTriangSup
			// 
			this->btnTriangSup->Location = System::Drawing::Point(401, 238);
			this->btnTriangSup->Name = L"btnTriangSup";
			this->btnTriangSup->Size = System::Drawing::Size(75, 23);
			this->btnTriangSup->TabIndex = 33;
			this->btnTriangSup->Text = L"Triang Sup";
			this->btnTriangSup->UseVisualStyleBackColor = true;
			this->btnTriangSup->Click += gcnew System::EventHandler(this, &MyForm::btnTriangSup_Click);
			// 
			// dgvM3
			// 
			this->dgvM3->AllowUserToAddRows = false;
			this->dgvM3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvM3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvM3->Location = System::Drawing::Point(7, 238);
			this->dgvM3->Name = L"dgvM3";
			this->dgvM3->Size = System::Drawing::Size(243, 165);
			this->dgvM3->TabIndex = 31;
			// 
			// btnDim2
			// 
			this->btnDim2->Location = System::Drawing::Point(650, 64);
			this->btnDim2->Name = L"btnDim2";
			this->btnDim2->Size = System::Drawing::Size(75, 23);
			this->btnDim2->TabIndex = 30;
			this->btnDim2->Text = L"Dimensionar";
			this->btnDim2->UseVisualStyleBackColor = true;
			this->btnDim2->Click += gcnew System::EventHandler(this, &MyForm::btnDim2_Click);
			// 
			// btnDim1
			// 
			this->btnDim1->Location = System::Drawing::Point(257, 64);
			this->btnDim1->Name = L"btnDim1";
			this->btnDim1->Size = System::Drawing::Size(75, 23);
			this->btnDim1->TabIndex = 29;
			this->btnDim1->Text = L"Dimensionar";
			this->btnDim1->UseVisualStyleBackColor = true;
			this->btnDim1->Click += gcnew System::EventHandler(this, &MyForm::btnDim1_Click);
			// 
			// tbC2
			// 
			this->tbC2->Location = System::Drawing::Point(650, 38);
			this->tbC2->Name = L"tbC2";
			this->tbC2->Size = System::Drawing::Size(100, 20);
			this->tbC2->TabIndex = 28;
			// 
			// tbF2
			// 
			this->tbF2->Location = System::Drawing::Point(650, 12);
			this->tbF2->Name = L"tbF2";
			this->tbF2->Size = System::Drawing::Size(100, 20);
			this->tbF2->TabIndex = 27;
			// 
			// tbC1
			// 
			this->tbC1->Location = System::Drawing::Point(256, 38);
			this->tbC1->Name = L"tbC1";
			this->tbC1->Size = System::Drawing::Size(100, 20);
			this->tbC1->TabIndex = 26;
			// 
			// tbF1
			// 
			this->tbF1->Location = System::Drawing::Point(257, 12);
			this->tbF1->Name = L"tbF1";
			this->tbF1->Size = System::Drawing::Size(100, 20);
			this->tbF1->TabIndex = 25;
			// 
			// dgvM2
			// 
			this->dgvM2->AllowUserToAddRows = false;
			this->dgvM2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvM2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvM2->Location = System::Drawing::Point(401, 12);
			this->dgvM2->Name = L"dgvM2";
			this->dgvM2->Size = System::Drawing::Size(243, 165);
			this->dgvM2->TabIndex = 24;
			// 
			// dgvM1
			// 
			this->dgvM1->AllowUserToAddRows = false;
			this->dgvM1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvM1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvM1->Location = System::Drawing::Point(7, 12);
			this->dgvM1->Name = L"dgvM1";
			this->dgvM1->Size = System::Drawing::Size(243, 165);
			this->dgvM1->TabIndex = 23;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 418);
			this->Controls->Add(this->btnLimpiar2);
			this->Controls->Add(this->btnCargar2);
			this->Controls->Add(this->btnLimpiar1);
			this->Controls->Add(this->btnCargar1);
			this->Controls->Add(this->btnMultiplicar);
			this->Controls->Add(this->btnSumar);
			this->Controls->Add(this->btnSumarCols);
			this->Controls->Add(this->btnSumarFilas);
			this->Controls->Add(this->btnOrdenar);
			this->Controls->Add(this->btnTranspuesta);
			this->Controls->Add(this->btnTriangSup);
			this->Controls->Add(this->dgvM3);
			this->Controls->Add(this->btnDim2);
			this->Controls->Add(this->btnDim1);
			this->Controls->Add(this->tbC2);
			this->Controls->Add(this->tbF2);
			this->Controls->Add(this->tbC1);
			this->Controls->Add(this->tbF1);
			this->Controls->Add(this->dgvM2);
			this->Controls->Add(this->dgvM1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnDim1_Click(System::Object^ sender, System::EventArgs^ e) {
		matriz1.dimensionar(dgvM1, tbF1, tbC1);
	}
	private: System::Void btnDim2_Click(System::Object^ sender, System::EventArgs^ e) {
		matriz2.dimensionar(dgvM2, tbF2, tbC2);
	}
	private: System::Void btnCargar1_Click(System::Object^ sender, System::EventArgs^ e) {
		matriz1.guardar(dgvM1);
		matriz1.mostrar(dgvM3);
	}
	private: System::Void btnCargar2_Click(System::Object^ sender, System::EventArgs^ e) {
		matriz2.guardar(dgvM2);
		matriz2.mostrar(dgvM3);
	}
	private: System::Void btnLimpiar1_Click(System::Object^ sender, System::EventArgs^ e) {
		matriz1.limpiar(dgvM1);
	}
	private: System::Void btnLimpiar2_Click(System::Object^ sender, System::EventArgs^ e) {
		matriz2.limpiar(dgvM2);
	}
	private: System::Void btnTriangSup_Click(System::Object^ sender, System::EventArgs^ e) {
		bool b = matriz1.esTriangularSup();
		MessageBox::Show(b ? "Es Triangular Superior" : "No es Triangular Superior");
	}
	private: System::Void btnTranspuesta_Click(System::Object^ sender, System::EventArgs^ e) {
		Matriz t = matriz1.transpuesta();
		matriz3 = Operaciones(t);
		matriz3.mostrar(dgvM3);
	}
	private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
		matriz1.ordenar();
		matriz1.mostrar(dgvM3);
	}
	private: System::Void btnSumarFilas_Click(System::Object^ sender, System::EventArgs^ e) {
		matriz1.sumarFilas();
		matriz1.mostrar(dgvM3);
	}
	private: System::Void btnSumarCols_Click(System::Object^ sender, System::EventArgs^ e) {
		matriz1.sumarColumnas();
		matriz1.mostrar(dgvM3);
	}
	private: System::Void btnSumar_Click(System::Object^ sender, System::EventArgs^ e) {
		Matriz m2 = matriz2.thisMatriz();
		Matriz m3 = matriz1.sumar(m2);
		matriz3 = Operaciones(m3);
		matriz3.mostrar(dgvM3);
	}
	private: System::Void btnMultiplicar_Click(System::Object^ sender, System::EventArgs^ e) {
		Matriz m2 = matriz2.thisMatriz();
		Matriz m3 = matriz1.multiplicar(m2);
		matriz3 = Operaciones(m3);
		matriz3.mostrar(dgvM3);
	}
	};
}

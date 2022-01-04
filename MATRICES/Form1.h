#pragma once
#include "Operaciones.h"
#include <string>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>

	Operaciones m1;
	Operaciones m2;
	Operaciones m3;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvM1;
	private: System::Windows::Forms::DataGridView^ dgvM2;
	private: System::Windows::Forms::TextBox^ tbF1;
	private: System::Windows::Forms::TextBox^ tbC1;
	protected:

	protected:



	private: System::Windows::Forms::TextBox^ tbF2;
	private: System::Windows::Forms::TextBox^ tbC2;
	private: System::Windows::Forms::Button^ btnDim1;
	private: System::Windows::Forms::Button^ btnDim2;




	private: System::Windows::Forms::DataGridView^ dgvM3;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::Button^ btnTriangSup;
	private: System::Windows::Forms::Button^ btnTranspuesta;
	private: System::Windows::Forms::Button^ btnOrdenar;

	private: System::Windows::Forms::Button^ btnSumarFilas;
	private: System::Windows::Forms::Button^ btnSumarCols;
	private: System::Windows::Forms::Button^ btnSumar;
	private: System::Windows::Forms::Button^ btnMultiplicar;










	private: System::Windows::Forms::Button^ btnCargar1;
	private: System::Windows::Forms::Button^ btnLimpiar1;
	private: System::Windows::Forms::Button^ btnLimpiar2;






	private: System::Windows::Forms::Button^ btnCargar2;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgvM1 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvM2 = (gcnew System::Windows::Forms::DataGridView());
			this->tbF1 = (gcnew System::Windows::Forms::TextBox());
			this->tbC1 = (gcnew System::Windows::Forms::TextBox());
			this->tbF2 = (gcnew System::Windows::Forms::TextBox());
			this->tbC2 = (gcnew System::Windows::Forms::TextBox());
			this->btnDim1 = (gcnew System::Windows::Forms::Button());
			this->btnDim2 = (gcnew System::Windows::Forms::Button());
			this->dgvM3 = (gcnew System::Windows::Forms::DataGridView());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->btnTriangSup = (gcnew System::Windows::Forms::Button());
			this->btnTranspuesta = (gcnew System::Windows::Forms::Button());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->btnSumarFilas = (gcnew System::Windows::Forms::Button());
			this->btnSumarCols = (gcnew System::Windows::Forms::Button());
			this->btnSumar = (gcnew System::Windows::Forms::Button());
			this->btnMultiplicar = (gcnew System::Windows::Forms::Button());
			this->btnCargar1 = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar1 = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar2 = (gcnew System::Windows::Forms::Button());
			this->btnCargar2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM3))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvM1
			// 
			this->dgvM1->AllowUserToAddRows = false;
			this->dgvM1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvM1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvM1->Location = System::Drawing::Point(12, 25);
			this->dgvM1->Name = L"dgvM1";
			this->dgvM1->Size = System::Drawing::Size(243, 165);
			this->dgvM1->TabIndex = 0;
			// 
			// dgvM2
			// 
			this->dgvM2->AllowUserToAddRows = false;
			this->dgvM2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvM2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvM2->Location = System::Drawing::Point(406, 25);
			this->dgvM2->Name = L"dgvM2";
			this->dgvM2->Size = System::Drawing::Size(243, 165);
			this->dgvM2->TabIndex = 1;
			// 
			// tbF1
			// 
			this->tbF1->Location = System::Drawing::Point(262, 25);
			this->tbF1->Name = L"tbF1";
			this->tbF1->Size = System::Drawing::Size(100, 20);
			this->tbF1->TabIndex = 2;
			// 
			// tbC1
			// 
			this->tbC1->Location = System::Drawing::Point(261, 51);
			this->tbC1->Name = L"tbC1";
			this->tbC1->Size = System::Drawing::Size(100, 20);
			this->tbC1->TabIndex = 3;
			// 
			// tbF2
			// 
			this->tbF2->Location = System::Drawing::Point(655, 25);
			this->tbF2->Name = L"tbF2";
			this->tbF2->Size = System::Drawing::Size(100, 20);
			this->tbF2->TabIndex = 4;
			// 
			// tbC2
			// 
			this->tbC2->Location = System::Drawing::Point(655, 51);
			this->tbC2->Name = L"tbC2";
			this->tbC2->Size = System::Drawing::Size(100, 20);
			this->tbC2->TabIndex = 5;
			// 
			// btnDim1
			// 
			this->btnDim1->Location = System::Drawing::Point(262, 77);
			this->btnDim1->Name = L"btnDim1";
			this->btnDim1->Size = System::Drawing::Size(75, 23);
			this->btnDim1->TabIndex = 6;
			this->btnDim1->Text = L"Dimensiones";
			this->btnDim1->UseVisualStyleBackColor = true;
			this->btnDim1->Click += gcnew System::EventHandler(this, &Form1::btnDim1_Click);
			// 
			// btnDim2
			// 
			this->btnDim2->Location = System::Drawing::Point(655, 77);
			this->btnDim2->Name = L"btnDim2";
			this->btnDim2->Size = System::Drawing::Size(75, 23);
			this->btnDim2->TabIndex = 7;
			this->btnDim2->Text = L"Dimensiones";
			this->btnDim2->UseVisualStyleBackColor = true;
			this->btnDim2->Click += gcnew System::EventHandler(this, &Form1::btnDim2_Click);
			// 
			// dgvM3
			// 
			this->dgvM3->AllowUserToAddRows = false;
			this->dgvM3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvM3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvM3->Location = System::Drawing::Point(12, 251);
			this->dgvM3->Name = L"dgvM3";
			this->dgvM3->Size = System::Drawing::Size(243, 165);
			this->dgvM3->TabIndex = 8;
			// 
			// btnMostrar
			// 
			this->btnMostrar->Location = System::Drawing::Point(262, 393);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(75, 23);
			this->btnMostrar->TabIndex = 9;
			this->btnMostrar->Text = L"Mostrar";
			this->btnMostrar->UseVisualStyleBackColor = true;
			// 
			// btnTriangSup
			// 
			this->btnTriangSup->Location = System::Drawing::Point(406, 251);
			this->btnTriangSup->Name = L"btnTriangSup";
			this->btnTriangSup->Size = System::Drawing::Size(75, 23);
			this->btnTriangSup->TabIndex = 10;
			this->btnTriangSup->Text = L"Triang Sup";
			this->btnTriangSup->UseVisualStyleBackColor = true;
			this->btnTriangSup->Click += gcnew System::EventHandler(this, &Form1::btnTriangSup_Click);
			// 
			// btnTranspuesta
			// 
			this->btnTranspuesta->Location = System::Drawing::Point(500, 251);
			this->btnTranspuesta->Name = L"btnTranspuesta";
			this->btnTranspuesta->Size = System::Drawing::Size(75, 23);
			this->btnTranspuesta->TabIndex = 11;
			this->btnTranspuesta->Text = L"Transpuesta";
			this->btnTranspuesta->UseVisualStyleBackColor = true;
			this->btnTranspuesta->Click += gcnew System::EventHandler(this, &Form1::btnTranspuesta_Click);
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->Location = System::Drawing::Point(595, 251);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(75, 23);
			this->btnOrdenar->TabIndex = 12;
			this->btnOrdenar->Text = L"Ordenar";
			this->btnOrdenar->UseVisualStyleBackColor = true;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &Form1::btnOrdenar_Click);
			// 
			// btnSumarFilas
			// 
			this->btnSumarFilas->Location = System::Drawing::Point(406, 280);
			this->btnSumarFilas->Name = L"btnSumarFilas";
			this->btnSumarFilas->Size = System::Drawing::Size(75, 23);
			this->btnSumarFilas->TabIndex = 14;
			this->btnSumarFilas->Text = L"SumarFilas";
			this->btnSumarFilas->UseVisualStyleBackColor = true;
			this->btnSumarFilas->Click += gcnew System::EventHandler(this, &Form1::btnSumarFilas_Click);
			// 
			// btnSumarCols
			// 
			this->btnSumarCols->Location = System::Drawing::Point(500, 280);
			this->btnSumarCols->Name = L"btnSumarCols";
			this->btnSumarCols->Size = System::Drawing::Size(75, 23);
			this->btnSumarCols->TabIndex = 15;
			this->btnSumarCols->Text = L"SumarCols";
			this->btnSumarCols->UseVisualStyleBackColor = true;
			this->btnSumarCols->Click += gcnew System::EventHandler(this, &Form1::btnSumarCols_Click);
			// 
			// btnSumar
			// 
			this->btnSumar->Location = System::Drawing::Point(406, 309);
			this->btnSumar->Name = L"btnSumar";
			this->btnSumar->Size = System::Drawing::Size(75, 23);
			this->btnSumar->TabIndex = 16;
			this->btnSumar->Text = L"Sumar";
			this->btnSumar->UseVisualStyleBackColor = true;
			this->btnSumar->Click += gcnew System::EventHandler(this, &Form1::btnSumar_Click);
			// 
			// btnMultiplicar
			// 
			this->btnMultiplicar->Location = System::Drawing::Point(500, 309);
			this->btnMultiplicar->Name = L"btnMultiplicar";
			this->btnMultiplicar->Size = System::Drawing::Size(75, 23);
			this->btnMultiplicar->TabIndex = 17;
			this->btnMultiplicar->Text = L"Multiplicar";
			this->btnMultiplicar->UseVisualStyleBackColor = true;
			this->btnMultiplicar->Click += gcnew System::EventHandler(this, &Form1::btnMultiplicar_Click);
			// 
			// btnCargar1
			// 
			this->btnCargar1->Location = System::Drawing::Point(262, 140);
			this->btnCargar1->Name = L"btnCargar1";
			this->btnCargar1->Size = System::Drawing::Size(75, 23);
			this->btnCargar1->TabIndex = 19;
			this->btnCargar1->Text = L"Cargar";
			this->btnCargar1->UseVisualStyleBackColor = true;
			this->btnCargar1->Click += gcnew System::EventHandler(this, &Form1::btnCargar1_Click);
			// 
			// btnLimpiar1
			// 
			this->btnLimpiar1->Location = System::Drawing::Point(261, 169);
			this->btnLimpiar1->Name = L"btnLimpiar1";
			this->btnLimpiar1->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar1->TabIndex = 20;
			this->btnLimpiar1->Text = L"Limpiar";
			this->btnLimpiar1->UseVisualStyleBackColor = true;
			this->btnLimpiar1->Click += gcnew System::EventHandler(this, &Form1::btnLimpiar1_Click);
			// 
			// btnLimpiar2
			// 
			this->btnLimpiar2->Location = System::Drawing::Point(655, 167);
			this->btnLimpiar2->Name = L"btnLimpiar2";
			this->btnLimpiar2->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar2->TabIndex = 22;
			this->btnLimpiar2->Text = L"Limpiar";
			this->btnLimpiar2->UseVisualStyleBackColor = true;
			this->btnLimpiar2->Click += gcnew System::EventHandler(this, &Form1::btnLimpiar2_Click);
			// 
			// btnCargar2
			// 
			this->btnCargar2->Location = System::Drawing::Point(656, 138);
			this->btnCargar2->Name = L"btnCargar2";
			this->btnCargar2->Size = System::Drawing::Size(75, 23);
			this->btnCargar2->TabIndex = 21;
			this->btnCargar2->Text = L"Cargar";
			this->btnCargar2->UseVisualStyleBackColor = true;
			this->btnCargar2->Click += gcnew System::EventHandler(this, &Form1::btnCargar2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(770, 450);
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
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->dgvM3);
			this->Controls->Add(this->btnDim2);
			this->Controls->Add(this->btnDim1);
			this->Controls->Add(this->tbC2);
			this->Controls->Add(this->tbF2);
			this->Controls->Add(this->tbC1);
			this->Controls->Add(this->tbF1);
			this->Controls->Add(this->dgvM2);
			this->Controls->Add(this->dgvM1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvM3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void dimensionar(DataGridView^ dgv, int f, int c, Operaciones m)
	{
		dgv->RowCount = f;
		dgv->ColumnCount = c;
	}

	private: void cargar(DataGridView^ dgv, Operaciones& m)
	{
		int f = dgv->RowCount, c = dgv->ColumnCount;
		m.setFilas(f);
		m.setColums(c);
		for (int i = 0; i < f; i++)
		{
			for (int j = 0; j < c; j++)
			{
				int val = Convert::ToInt32(dgv->Rows[i]->Cells[j]->Value);
				m.setValor(val, i, j);
			}
		}
	}

	private: void mostrar(DataGridView^ dgv, Operaciones m)
	{
		int f = m.getFilas(), c = m.getColums();
		dimensionar(dgv, f, c, m);
		for (int i = 0; i < f; i++)
		{
			for (int j = 0; j < c; j++)
			{
				int val = m.getValor(i, j);
				dgv->Rows[i]->Cells[j]->Value = val;
			}
		}
	}

	private: void limpiar(DataGridView^ dgv, Operaciones m)
	{
		dgv->RowCount = 0;
		dgv->ColumnCount = 0;
		m.limpiar();
	}

	private: System::Void btnDim1_Click(System::Object^ sender, System::EventArgs^ e) {
		int f = (Convert::ToInt32(tbF1->Text));
		int c = (Convert::ToInt32(tbC1->Text));
		dimensionar(dgvM1, f, c, m1);
	}

	private: System::Void btnDim2_Click(System::Object^ sender, System::EventArgs^ e) {
		int f = (Convert::ToInt32(tbF2->Text));
		int c = (Convert::ToInt32(tbC2->Text));
		dimensionar(dgvM2, f, c, m2);
	}

	private: System::Void btnCargar1_Click(System::Object^ sender, System::EventArgs^ e) {
		cargar(dgvM1, m1);
	}

	private: System::Void btnCargar2_Click(System::Object^ sender, System::EventArgs^ e) {
		cargar(dgvM2, m2);
	}

	private: System::Void btnLimpiar1_Click(System::Object^ sender, System::EventArgs^ e) {
		limpiar(dgvM1, m1);
	}

	private: System::Void btnLimpiar2_Click(System::Object^ sender, System::EventArgs^ e) {
		limpiar(dgvM2, m2);
	}

	private: System::Void btnTriangSup_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show((m1.esTriangularSup() ? "Es Triangular Superior" : "No es Triangular Superior"));
	}

	private: System::Void btnTranspuesta_Click(System::Object^ sender, System::EventArgs^ e) {
		m3 = m1.transpuesta();
		mostrar(dgvM3, m3);
	}
	private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
		m1.ordenar();
		mostrar(dgvM1, m1);
	}

	private: System::Void btnSumarFilas_Click(System::Object^ sender, System::EventArgs^ e) {
		m1.sumarFilas();
		mostrar(dgvM1, m1);
	}

	private: System::Void btnSumarCols_Click(System::Object^ sender, System::EventArgs^ e) {
		m1.sumarColums();
		mostrar(dgvM1, m1);
	}

	private: System::Void btnSumar_Click(System::Object^ sender, System::EventArgs^ e) {
		m3 = m1.sumar(m2);
		mostrar(dgvM3, m3);
	}

	private: System::Void btnMultiplicar_Click(System::Object^ sender, System::EventArgs^ e) {
		m3 = m1.multiplicar (m2);
		mostrar(dgvM3, m3);
	}
};
}

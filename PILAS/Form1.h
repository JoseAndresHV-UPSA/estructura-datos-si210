#pragma once
#include "Operaciones.h"

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>

	Operaciones p1;
	Operaciones p2;

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
	private: System::Windows::Forms::DataGridView^ dgvP1;


	private: System::Windows::Forms::DataGridView^ dgvP2;

	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::TextBox^ tbDato;
	private: System::Windows::Forms::Button^ btnTam;
	private: System::Windows::Forms::Button^ btnCargar;
	private: System::Windows::Forms::TextBox^ tbTam;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnOrdenar;
	private: System::Windows::Forms::Button^ btnInvertida;

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
			this->dgvP1 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvP2 = (gcnew System::Windows::Forms::DataGridView());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->tbDato = (gcnew System::Windows::Forms::TextBox());
			this->btnTam = (gcnew System::Windows::Forms::Button());
			this->btnCargar = (gcnew System::Windows::Forms::Button());
			this->tbTam = (gcnew System::Windows::Forms::TextBox());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->btnInvertida = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvP1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvP2))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvP1
			// 
			this->dgvP1->AllowUserToAddRows = false;
			this->dgvP1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvP1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvP1->Location = System::Drawing::Point(12, 23);
			this->dgvP1->Name = L"dgvP1";
			this->dgvP1->Size = System::Drawing::Size(185, 356);
			this->dgvP1->TabIndex = 0;
			// 
			// dgvP2
			// 
			this->dgvP2->AllowUserToAddRows = false;
			this->dgvP2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvP2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvP2->Location = System::Drawing::Point(410, 23);
			this->dgvP2->Name = L"dgvP2";
			this->dgvP2->Size = System::Drawing::Size(185, 356);
			this->dgvP2->TabIndex = 3;
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(309, 107);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(75, 23);
			this->btnInsertar->TabIndex = 5;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &Form1::btnInsertar_Click);
			// 
			// tbDato
			// 
			this->tbDato->Location = System::Drawing::Point(203, 107);
			this->tbDato->Name = L"tbDato";
			this->tbDato->Size = System::Drawing::Size(100, 20);
			this->tbDato->TabIndex = 6;
			// 
			// btnTam
			// 
			this->btnTam->Location = System::Drawing::Point(309, 23);
			this->btnTam->Name = L"btnTam";
			this->btnTam->Size = System::Drawing::Size(75, 23);
			this->btnTam->TabIndex = 7;
			this->btnTam->Text = L"Tamano";
			this->btnTam->UseVisualStyleBackColor = true;
			this->btnTam->Click += gcnew System::EventHandler(this, &Form1::btnTam_Click);
			// 
			// btnCargar
			// 
			this->btnCargar->Location = System::Drawing::Point(203, 49);
			this->btnCargar->Name = L"btnCargar";
			this->btnCargar->Size = System::Drawing::Size(75, 23);
			this->btnCargar->TabIndex = 8;
			this->btnCargar->Text = L"Cargar";
			this->btnCargar->UseVisualStyleBackColor = true;
			this->btnCargar->Click += gcnew System::EventHandler(this, &Form1::btnCargar_Click);
			// 
			// tbTam
			// 
			this->tbTam->Location = System::Drawing::Point(203, 23);
			this->tbTam->Name = L"tbTam";
			this->tbTam->Size = System::Drawing::Size(100, 20);
			this->tbTam->TabIndex = 9;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(203, 78);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar->TabIndex = 10;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->Location = System::Drawing::Point(203, 174);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(75, 23);
			this->btnOrdenar->TabIndex = 11;
			this->btnOrdenar->Text = L"Ordenar";
			this->btnOrdenar->UseVisualStyleBackColor = true;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &Form1::btnOrdenar_Click);
			// 
			// btnInvertida
			// 
			this->btnInvertida->Location = System::Drawing::Point(284, 174);
			this->btnInvertida->Name = L"btnInvertida";
			this->btnInvertida->Size = System::Drawing::Size(75, 23);
			this->btnInvertida->TabIndex = 12;
			this->btnInvertida->Text = L"Invertida";
			this->btnInvertida->UseVisualStyleBackColor = true;
			this->btnInvertida->Click += gcnew System::EventHandler(this, &Form1::btnInvertida_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(613, 441);
			this->Controls->Add(this->btnInvertida);
			this->Controls->Add(this->btnOrdenar);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->tbTam);
			this->Controls->Add(this->btnCargar);
			this->Controls->Add(this->btnTam);
			this->Controls->Add(this->tbDato);
			this->Controls->Add(this->btnInsertar);
			this->Controls->Add(this->dgvP2);
			this->Controls->Add(this->dgvP1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvP1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvP2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: void tamano(DataGridView^ dgv, int tam)
	{
		dgv->RowCount = tam;
		dgv->ColumnCount = 1;
	}
	
	private: void cargar(DataGridView^ dgv, Operaciones& p)
	{
		int n = dgv->RowCount;
		for (int i = n - 1; i >= 0; i--)
		{
			int dato = Convert::ToInt32(dgv->Rows[i]->Cells[0]->Value);
			Nodo tmp = Nodo(dato);
			p.insertar(tmp);
		}
	}

	private: void mostrar(DataGridView^ dgv, Operaciones p)
	{
		int n = p.getTope() + 1;
		tamano(dgv, n);
		Pila aux = p.thisPila();
		int i = 0;
		while (!aux.vacia())
		{
			Nodo tmp;
			aux.eliminar(tmp);
			dgv->Rows[i]->Cells[0]->Value = tmp.getDato();
			i++;
		}
	}

	private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		int dato = Convert::ToInt32(tbDato->Text);
		Nodo tmp = Nodo(dato);
		p1.insertar(tmp);
		mostrar(dgvP1, p1);
	}
	private: System::Void btnTam_Click(System::Object^ sender, System::EventArgs^ e) {
		int tam = Convert::ToInt32(tbTam->Text);
		tamano(dgvP1, tam);
	}

	private: System::Void btnCargar_Click(System::Object^ sender, System::EventArgs^ e) {
		cargar(dgvP1, p1);
		mostrar(dgvP2, p1);
	}

	private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
		p1.ordenar();
		mostrar(dgvP2, p1);
	}

	private: System::Void btnInvertida_Click(System::Object^ sender, System::EventArgs^ e) {
		p2 = p1.invertida();
		mostrar(dgvP2, p2);
	}
};
}

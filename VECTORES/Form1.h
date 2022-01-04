#pragma once
#include "Operaciones.h"
#include <string>

using namespace std;

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

	Operaciones op;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();

			this->dgv1->RowCount = 1;
			this->dgv2->RowCount = 1;

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
	private: System::Windows::Forms::DataGridView^ dgv1;
	protected:

	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridView^ dgv2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::TextBox^ tbValor;
	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::TextBox^ tbPos;
	private: System::Windows::Forms::Button^ btnTamano;
	private: System::Windows::Forms::TextBox^ tbTamano;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnOrdenar;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::Button^ btnInvertir;
	private: System::Windows::Forms::Button^ btnEliminarPos;


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
			this->dgv1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tbValor = (gcnew System::Windows::Forms::TextBox());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->tbPos = (gcnew System::Windows::Forms::TextBox());
			this->btnTamano = (gcnew System::Windows::Forms::Button());
			this->tbTamano = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->btnInvertir = (gcnew System::Windows::Forms::Button());
			this->btnEliminarPos = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv2))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv1
			// 
			this->dgv1->AllowUserToAddRows = false;
			this->dgv1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column4, this->Column1,
					this->Column2, this->Column3, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->dgv1->Location = System::Drawing::Point(48, 40);
			this->dgv1->Name = L"dgv1";
			this->dgv1->Size = System::Drawing::Size(519, 61);
			this->dgv1->TabIndex = 0;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"0";
			this->Column4->Name = L"Column4";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"3";
			this->Column3->Name = L"Column3";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"4";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"5";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"6";
			this->Column7->Name = L"Column7";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"7";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"8";
			this->Column9->Name = L"Column9";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"9";
			this->Column10->Name = L"Column10";
			// 
			// dgv2
			// 
			this->dgv2->AllowUserToAddRows = false;
			this->dgv2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9,
					this->dataGridViewTextBoxColumn10
			});
			this->dgv2->Location = System::Drawing::Point(48, 180);
			this->dgv2->Name = L"dgv2";
			this->dgv2->Size = System::Drawing::Size(519, 61);
			this->dgv2->TabIndex = 2;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"0";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"1";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"2";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"3";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"4";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"5";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"6";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"7";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"8";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"9";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// tbValor
			// 
			this->tbValor->Location = System::Drawing::Point(48, 110);
			this->tbValor->Name = L"tbValor";
			this->tbValor->Size = System::Drawing::Size(100, 20);
			this->tbValor->TabIndex = 3;
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(154, 123);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(75, 23);
			this->btnInsertar->TabIndex = 4;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &Form1::btnInsertar_Click);
			// 
			// tbPos
			// 
			this->tbPos->Location = System::Drawing::Point(48, 136);
			this->tbPos->Name = L"tbPos";
			this->tbPos->Size = System::Drawing::Size(100, 20);
			this->tbPos->TabIndex = 5;
			// 
			// btnTamano
			// 
			this->btnTamano->Location = System::Drawing::Point(154, 12);
			this->btnTamano->Name = L"btnTamano";
			this->btnTamano->Size = System::Drawing::Size(75, 23);
			this->btnTamano->TabIndex = 7;
			this->btnTamano->Text = L"Tamano";
			this->btnTamano->UseVisualStyleBackColor = true;
			this->btnTamano->Click += gcnew System::EventHandler(this, &Form1::btnTamano_Click);
			// 
			// tbTamano
			// 
			this->tbTamano->Location = System::Drawing::Point(48, 14);
			this->tbTamano->Name = L"tbTamano";
			this->tbTamano->Size = System::Drawing::Size(100, 20);
			this->tbTamano->TabIndex = 6;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(573, 40);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 8;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Form1::btnGuardar_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(573, 69);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar->TabIndex = 9;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &Form1::btnLimpiar_Click);
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->Location = System::Drawing::Point(261, 123);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(75, 23);
			this->btnOrdenar->TabIndex = 10;
			this->btnOrdenar->Text = L"Ordenar";
			this->btnOrdenar->UseVisualStyleBackColor = true;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &Form1::btnOrdenar_Click);
			// 
			// btnMostrar
			// 
			this->btnMostrar->Location = System::Drawing::Point(573, 180);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(75, 23);
			this->btnMostrar->TabIndex = 11;
			this->btnMostrar->Text = L"Mostrar";
			this->btnMostrar->UseVisualStyleBackColor = true;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &Form1::btnMostrar_Click);
			// 
			// btnInvertir
			// 
			this->btnInvertir->Location = System::Drawing::Point(364, 123);
			this->btnInvertir->Name = L"btnInvertir";
			this->btnInvertir->Size = System::Drawing::Size(75, 23);
			this->btnInvertir->TabIndex = 12;
			this->btnInvertir->Text = L"Invertir";
			this->btnInvertir->UseVisualStyleBackColor = true;
			this->btnInvertir->Click += gcnew System::EventHandler(this, &Form1::btnInvertir_Click);
			// 
			// btnEliminarPos
			// 
			this->btnEliminarPos->Location = System::Drawing::Point(464, 123);
			this->btnEliminarPos->Name = L"btnEliminarPos";
			this->btnEliminarPos->Size = System::Drawing::Size(75, 23);
			this->btnEliminarPos->TabIndex = 13;
			this->btnEliminarPos->Text = L"Eliminar Pos";
			this->btnEliminarPos->UseVisualStyleBackColor = true;
			this->btnEliminarPos->Click += gcnew System::EventHandler(this, &Form1::btnEliminarPos_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 287);
			this->Controls->Add(this->btnEliminarPos);
			this->Controls->Add(this->btnInvertir);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnOrdenar);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->btnTamano);
			this->Controls->Add(this->tbTamano);
			this->Controls->Add(this->tbPos);
			this->Controls->Add(this->btnInsertar);
			this->Controls->Add(this->tbValor);
			this->Controls->Add(this->dgv2);
			this->Controls->Add(this->dgv1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnTamano_Click(System::Object^ sender, System::EventArgs^ e) {
		int tam = (Convert::ToInt32(tbTamano->Text));
		op.tamano(tam);
		dgv1->ColumnCount = tam;
		dgv1->RowCount = 1;
	}

	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = op.tamano();
		for (int i = 0; i < n; i++)
		{
			int val = Convert::ToInt32(dgv1->Rows[0]->Cells[i]->Value);
			op.setValor(val, i);
		}
	}

	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = op.tamano();
		dgv2->ColumnCount = n;
		dgv2->RowCount = 1;
		for (int i = 0; i < n; i++)
		{
			dgv2->Rows[0]->Cells[i]->Value = op.getValor(i);
		}
	}

	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		dgv1->ColumnCount = 0;
		op.limpiar();
	}

	private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		int pos = (Convert::ToInt32(tbPos->Text));
		int val = (Convert::ToInt32(tbValor->Text));
		op.setValor(val, pos);
	}

	private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
		op.ordenar();
	}

	private: System::Void btnInvertir_Click(System::Object^ sender, System::EventArgs^ e) {
		op.invertir();
	}

	private: System::Void btnEliminarPos_Click(System::Object^ sender, System::EventArgs^ e) {
		int pos = (Convert::ToInt32(tbPos->Text));
		op.eliminarPos(pos);
	}

	};
}

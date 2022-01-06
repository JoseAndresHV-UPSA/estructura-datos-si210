#pragma once
#include "Operaciones.h"

namespace PILAS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	Operaciones pila1;
	Operaciones pila2;

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
	private: System::Windows::Forms::Button^ btnInvertida;
	protected:
	private: System::Windows::Forms::Button^ btnOrdenar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::TextBox^ tbTam;
	private: System::Windows::Forms::Button^ btnCargar;
	private: System::Windows::Forms::Button^ btnTam;
	private: System::Windows::Forms::TextBox^ tbDato;
	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::DataGridView^ dgvP2;
	private: System::Windows::Forms::DataGridView^ dgvP1;
	private: System::Windows::Forms::TextBox^ tbNombre;

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
			this->btnInvertida = (gcnew System::Windows::Forms::Button());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->tbTam = (gcnew System::Windows::Forms::TextBox());
			this->btnCargar = (gcnew System::Windows::Forms::Button());
			this->btnTam = (gcnew System::Windows::Forms::Button());
			this->tbDato = (gcnew System::Windows::Forms::TextBox());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->dgvP2 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvP1 = (gcnew System::Windows::Forms::DataGridView());
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvP2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvP1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnInvertida
			// 
			this->btnInvertida->Location = System::Drawing::Point(286, 163);
			this->btnInvertida->Name = L"btnInvertida";
			this->btnInvertida->Size = System::Drawing::Size(75, 23);
			this->btnInvertida->TabIndex = 22;
			this->btnInvertida->Text = L"Invertida";
			this->btnInvertida->UseVisualStyleBackColor = true;
			this->btnInvertida->Click += gcnew System::EventHandler(this, &MyForm::btnInvertida_Click);
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->Location = System::Drawing::Point(205, 163);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(75, 23);
			this->btnOrdenar->TabIndex = 21;
			this->btnOrdenar->Text = L"Ordenar";
			this->btnOrdenar->UseVisualStyleBackColor = true;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &MyForm::btnOrdenar_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(205, 67);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar->TabIndex = 20;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar_Click);
			// 
			// tbTam
			// 
			this->tbTam->Location = System::Drawing::Point(205, 12);
			this->tbTam->Name = L"tbTam";
			this->tbTam->Size = System::Drawing::Size(100, 20);
			this->tbTam->TabIndex = 19;
			// 
			// btnCargar
			// 
			this->btnCargar->Location = System::Drawing::Point(205, 38);
			this->btnCargar->Name = L"btnCargar";
			this->btnCargar->Size = System::Drawing::Size(75, 23);
			this->btnCargar->TabIndex = 18;
			this->btnCargar->Text = L"Cargar";
			this->btnCargar->UseVisualStyleBackColor = true;
			this->btnCargar->Click += gcnew System::EventHandler(this, &MyForm::btnCargar_Click);
			// 
			// btnTam
			// 
			this->btnTam->Location = System::Drawing::Point(311, 12);
			this->btnTam->Name = L"btnTam";
			this->btnTam->Size = System::Drawing::Size(75, 23);
			this->btnTam->TabIndex = 17;
			this->btnTam->Text = L"Tamano";
			this->btnTam->UseVisualStyleBackColor = true;
			this->btnTam->Click += gcnew System::EventHandler(this, &MyForm::btnTam_Click);
			// 
			// tbDato
			// 
			this->tbDato->Location = System::Drawing::Point(205, 96);
			this->tbDato->Name = L"tbDato";
			this->tbDato->Size = System::Drawing::Size(100, 20);
			this->tbDato->TabIndex = 16;
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(311, 107);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(75, 23);
			this->btnInsertar->TabIndex = 15;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &MyForm::btnInsertar_Click);
			// 
			// dgvP2
			// 
			this->dgvP2->AllowUserToAddRows = false;
			this->dgvP2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvP2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvP2->Location = System::Drawing::Point(412, 12);
			this->dgvP2->Name = L"dgvP2";
			this->dgvP2->Size = System::Drawing::Size(185, 356);
			this->dgvP2->TabIndex = 14;
			// 
			// dgvP1
			// 
			this->dgvP1->AllowUserToAddRows = false;
			this->dgvP1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvP1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvP1->Location = System::Drawing::Point(14, 12);
			this->dgvP1->Name = L"dgvP1";
			this->dgvP1->Size = System::Drawing::Size(185, 356);
			this->dgvP1->TabIndex = 13;
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(205, 122);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(100, 20);
			this->tbNombre->TabIndex = 23;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(621, 392);
			this->Controls->Add(this->tbNombre);
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
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvP2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvP1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnTam_Click(System::Object^ sender, System::EventArgs^ e) {
		pila1.dimensionar(dgvP1, tbTam);
	}
	private: System::Void btnCargar_Click(System::Object^ sender, System::EventArgs^ e) {
		pila1.guardar(dgvP1);
		pila1.mostrar(dgvP2);
	}
	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		pila1.limpiar(dgvP1);
	}
	private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		int dato = Convert::ToInt32(tbDato->Text);
		string nombre = marshal_as<string>(Convert::ToString(tbNombre->Text));
		Nodo tmp = Nodo(dato, nombre);
		pila1.insertar(tmp);
		pila1.mostrar(dgvP1);
	}
	private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
		pila1.ordenar();
		pila1.mostrar(dgvP2);
	}
	private: System::Void btnInvertida_Click(System::Object^ sender, System::EventArgs^ e) {
		Pila p2 = pila1.invertida();
		pila2.thisPila(p2);
		pila2.mostrar(dgvP2);
	}
	};
}

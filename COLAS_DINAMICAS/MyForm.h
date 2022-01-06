#pragma once
#include "Operaciones.h"

namespace COLASDINAMICAS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	Operaciones cola1;
	Operaciones cola2;

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
	private: System::Windows::Forms::TextBox^ tbNombre;
	protected:
	private: System::Windows::Forms::TextBox^ tbDato;
	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnInvertir;
	private: System::Windows::Forms::Button^ btnEliminarRepe;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnTamano;
	private: System::Windows::Forms::TextBox^ tbTamano;
	private: System::Windows::Forms::DataGridView^ dgvC2;
	private: System::Windows::Forms::DataGridView^ dgvC1;

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
			this->tbNombre = (gcnew System::Windows::Forms::TextBox());
			this->tbDato = (gcnew System::Windows::Forms::TextBox());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnInvertir = (gcnew System::Windows::Forms::Button());
			this->btnEliminarRepe = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnTamano = (gcnew System::Windows::Forms::Button());
			this->tbTamano = (gcnew System::Windows::Forms::TextBox());
			this->dgvC2 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvC1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvC2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvC1))->BeginInit();
			this->SuspendLayout();
			// 
			// tbNombre
			// 
			this->tbNombre->Location = System::Drawing::Point(273, 114);
			this->tbNombre->Name = L"tbNombre";
			this->tbNombre->Size = System::Drawing::Size(100, 20);
			this->tbNombre->TabIndex = 23;
			// 
			// tbDato
			// 
			this->tbDato->Location = System::Drawing::Point(273, 88);
			this->tbDato->Name = L"tbDato";
			this->tbDato->Size = System::Drawing::Size(100, 20);
			this->tbDato->TabIndex = 22;
			// 
			// btnInsertar
			// 
			this->btnInsertar->Location = System::Drawing::Point(379, 86);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(75, 23);
			this->btnInsertar->TabIndex = 21;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &MyForm::btnInsertar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(460, 86);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 20;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// btnInvertir
			// 
			this->btnInvertir->Location = System::Drawing::Point(93, 241);
			this->btnInvertir->Name = L"btnInvertir";
			this->btnInvertir->Size = System::Drawing::Size(75, 23);
			this->btnInvertir->TabIndex = 19;
			this->btnInvertir->Text = L"Invertido";
			this->btnInvertir->UseVisualStyleBackColor = true;
			this->btnInvertir->Click += gcnew System::EventHandler(this, &MyForm::btnInvertir_Click);
			// 
			// btnEliminarRepe
			// 
			this->btnEliminarRepe->Location = System::Drawing::Point(12, 241);
			this->btnEliminarRepe->Name = L"btnEliminarRepe";
			this->btnEliminarRepe->Size = System::Drawing::Size(75, 23);
			this->btnEliminarRepe->TabIndex = 18;
			this->btnEliminarRepe->Text = L"EliminarRepe";
			this->btnEliminarRepe->UseVisualStyleBackColor = true;
			this->btnEliminarRepe->Click += gcnew System::EventHandler(this, &MyForm::btnEliminarRepe_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Location = System::Drawing::Point(93, 86);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(75, 23);
			this->btnLimpiar->TabIndex = 17;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(12, 86);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 16;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &MyForm::btnGuardar_Click);
			// 
			// btnTamano
			// 
			this->btnTamano->Location = System::Drawing::Point(541, 38);
			this->btnTamano->Name = L"btnTamano";
			this->btnTamano->Size = System::Drawing::Size(75, 23);
			this->btnTamano->TabIndex = 15;
			this->btnTamano->Text = L"Tamano";
			this->btnTamano->UseVisualStyleBackColor = true;
			this->btnTamano->Click += gcnew System::EventHandler(this, &MyForm::btnTamano_Click);
			// 
			// tbTamano
			// 
			this->tbTamano->Location = System::Drawing::Point(541, 12);
			this->tbTamano->Name = L"tbTamano";
			this->tbTamano->Size = System::Drawing::Size(100, 20);
			this->tbTamano->TabIndex = 14;
			// 
			// dgvC2
			// 
			this->dgvC2->AllowUserToAddRows = false;
			this->dgvC2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvC2->Location = System::Drawing::Point(12, 167);
			this->dgvC2->Name = L"dgvC2";
			this->dgvC2->Size = System::Drawing::Size(523, 68);
			this->dgvC2->TabIndex = 13;
			// 
			// dgvC1
			// 
			this->dgvC1->AllowUserToAddRows = false;
			this->dgvC1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvC1->Location = System::Drawing::Point(12, 12);
			this->dgvC1->Name = L"dgvC1";
			this->dgvC1->Size = System::Drawing::Size(523, 68);
			this->dgvC1->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 290);
			this->Controls->Add(this->tbNombre);
			this->Controls->Add(this->tbDato);
			this->Controls->Add(this->btnInsertar);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnInvertir);
			this->Controls->Add(this->btnEliminarRepe);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->btnTamano);
			this->Controls->Add(this->tbTamano);
			this->Controls->Add(this->dgvC2);
			this->Controls->Add(this->dgvC1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvC2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvC1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnTamano_Click(System::Object^ sender, System::EventArgs^ e) {
		cola1.dimensionar(dgvC1, tbTamano);
	}
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		cola1.guardar(dgvC1);
		cola1.mostrar(dgvC2);
	}
	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
		cola1.limpiar(dgvC1);
	}
	private: System::Void btnEliminarRepe_Click(System::Object^ sender, System::EventArgs^ e) {
		cola1.eliminarRepetidos();
		cola1.mostrar(dgvC2);
	}
	private: System::Void btnInvertir_Click(System::Object^ sender, System::EventArgs^ e) {
		ColaDinamica aux = cola1.invertida();
		cola2.thisCola(aux);
		cola2.mostrar(dgvC2);
	}
	private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
		int dato = Convert::ToInt32(tbDato->Text);
		string nombre = marshal_as<string>(Convert::ToString(tbNombre->Text));
		Nodo nodo = Nodo(dato, nombre);
		cola1.enqueue(nodo);
		cola1.mostrar(dgvC1);
	}
	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		cola1.dequeue();
		cola1.mostrar(dgvC1);
	}
	};
}

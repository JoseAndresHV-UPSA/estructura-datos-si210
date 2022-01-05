#pragma once
#include "Operaciones.h"

namespace ENTEROS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	Operaciones entero;
	Operaciones digito;
	Operaciones result;

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbDigito;
	private: System::Windows::Forms::Button^ btnSumaDigs;
	protected:


	private: System::Windows::Forms::Button^ btnRepetidos;

	private: System::Windows::Forms::Button^ btnCapicua;
	private: System::Windows::Forms::Button^ btnEliminarDig;


	private: System::Windows::Forms::Button^ btnOrdenado;

	private: System::Windows::Forms::Button^ btnCantDigs;
	private: System::Windows::Forms::Button^ btnSinRepe;
	private: System::Windows::Forms::Button^ btnCrapulo;



	private: System::Windows::Forms::Button^ btnInvertir;

	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::TextBox^ tbResultado;
	private: System::Windows::Forms::TextBox^ tbEntero;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbDigito = (gcnew System::Windows::Forms::TextBox());
			this->btnSumaDigs = (gcnew System::Windows::Forms::Button());
			this->btnRepetidos = (gcnew System::Windows::Forms::Button());
			this->btnCapicua = (gcnew System::Windows::Forms::Button());
			this->btnEliminarDig = (gcnew System::Windows::Forms::Button());
			this->btnOrdenado = (gcnew System::Windows::Forms::Button());
			this->btnCantDigs = (gcnew System::Windows::Forms::Button());
			this->btnSinRepe = (gcnew System::Windows::Forms::Button());
			this->btnCrapulo = (gcnew System::Windows::Forms::Button());
			this->btnInvertir = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->tbResultado = (gcnew System::Windows::Forms::TextBox());
			this->tbEntero = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(252, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Resultado:";
			// 
			// tbDigito
			// 
			this->tbDigito->Location = System::Drawing::Point(79, 166);
			this->tbDigito->Name = L"tbDigito";
			this->tbDigito->Size = System::Drawing::Size(100, 20);
			this->tbDigito->TabIndex = 26;
			// 
			// btnSumaDigs
			// 
			this->btnSumaDigs->Location = System::Drawing::Point(266, 121);
			this->btnSumaDigs->Name = L"btnSumaDigs";
			this->btnSumaDigs->Size = System::Drawing::Size(75, 23);
			this->btnSumaDigs->TabIndex = 25;
			this->btnSumaDigs->Text = L"Suma Digs";
			this->btnSumaDigs->UseVisualStyleBackColor = true;
			this->btnSumaDigs->Click += gcnew System::EventHandler(this, &MyForm::btnSumaDigs_Click);
			// 
			// btnRepetidos
			// 
			this->btnRepetidos->Location = System::Drawing::Point(185, 121);
			this->btnRepetidos->Name = L"btnRepetidos";
			this->btnRepetidos->Size = System::Drawing::Size(75, 23);
			this->btnRepetidos->TabIndex = 24;
			this->btnRepetidos->Text = L"Repetidos";
			this->btnRepetidos->UseVisualStyleBackColor = true;
			this->btnRepetidos->Click += gcnew System::EventHandler(this, &MyForm::btnRepetidos_Click);
			// 
			// btnCapicua
			// 
			this->btnCapicua->Location = System::Drawing::Point(185, 83);
			this->btnCapicua->Name = L"btnCapicua";
			this->btnCapicua->Size = System::Drawing::Size(75, 23);
			this->btnCapicua->TabIndex = 23;
			this->btnCapicua->Text = L"Capicua";
			this->btnCapicua->UseVisualStyleBackColor = true;
			this->btnCapicua->Click += gcnew System::EventHandler(this, &MyForm::btnCapicua_Click);
			// 
			// btnEliminarDig
			// 
			this->btnEliminarDig->Location = System::Drawing::Point(185, 164);
			this->btnEliminarDig->Name = L"btnEliminarDig";
			this->btnEliminarDig->Size = System::Drawing::Size(75, 23);
			this->btnEliminarDig->TabIndex = 22;
			this->btnEliminarDig->Text = L"Eliminar Dig";
			this->btnEliminarDig->UseVisualStyleBackColor = true;
			this->btnEliminarDig->Click += gcnew System::EventHandler(this, &MyForm::btnEliminarDig_Click);
			// 
			// btnOrdenado
			// 
			this->btnOrdenado->Location = System::Drawing::Point(104, 121);
			this->btnOrdenado->Name = L"btnOrdenado";
			this->btnOrdenado->Size = System::Drawing::Size(75, 23);
			this->btnOrdenado->TabIndex = 21;
			this->btnOrdenado->Text = L"Ordenado";
			this->btnOrdenado->UseVisualStyleBackColor = true;
			this->btnOrdenado->Click += gcnew System::EventHandler(this, &MyForm::btnOrdenado_Click);
			// 
			// btnCantDigs
			// 
			this->btnCantDigs->Location = System::Drawing::Point(104, 83);
			this->btnCantDigs->Name = L"btnCantDigs";
			this->btnCantDigs->Size = System::Drawing::Size(75, 23);
			this->btnCantDigs->TabIndex = 20;
			this->btnCantDigs->Text = L"Cant Digitos";
			this->btnCantDigs->UseVisualStyleBackColor = true;
			this->btnCantDigs->Click += gcnew System::EventHandler(this, &MyForm::btnCantDigs_Click);
			// 
			// btnSinRepe
			// 
			this->btnSinRepe->Location = System::Drawing::Point(266, 83);
			this->btnSinRepe->Name = L"btnSinRepe";
			this->btnSinRepe->Size = System::Drawing::Size(75, 23);
			this->btnSinRepe->TabIndex = 19;
			this->btnSinRepe->Text = L"Sin Repetir";
			this->btnSinRepe->UseVisualStyleBackColor = true;
			this->btnSinRepe->Click += gcnew System::EventHandler(this, &MyForm::btnSinRepe_Click);
			// 
			// btnCrapulo
			// 
			this->btnCrapulo->Location = System::Drawing::Point(23, 121);
			this->btnCrapulo->Name = L"btnCrapulo";
			this->btnCrapulo->Size = System::Drawing::Size(75, 23);
			this->btnCrapulo->TabIndex = 18;
			this->btnCrapulo->Text = L"Crapulo";
			this->btnCrapulo->UseVisualStyleBackColor = true;
			this->btnCrapulo->Click += gcnew System::EventHandler(this, &MyForm::btnCrapulo_Click);
			// 
			// btnInvertir
			// 
			this->btnInvertir->Location = System::Drawing::Point(23, 83);
			this->btnInvertir->Name = L"btnInvertir";
			this->btnInvertir->Size = System::Drawing::Size(75, 23);
			this->btnInvertir->TabIndex = 17;
			this->btnInvertir->Text = L"Invertido";
			this->btnInvertir->UseVisualStyleBackColor = true;
			this->btnInvertir->Click += gcnew System::EventHandler(this, &MyForm::btnInvertir_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(129, 27);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 16;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &MyForm::btnGuardar_Click);
			// 
			// tbResultado
			// 
			this->tbResultado->Location = System::Drawing::Point(255, 30);
			this->tbResultado->Name = L"tbResultado";
			this->tbResultado->Size = System::Drawing::Size(100, 20);
			this->tbResultado->TabIndex = 15;
			// 
			// tbEntero
			// 
			this->tbEntero->Location = System::Drawing::Point(23, 27);
			this->tbEntero->Name = L"tbEntero";
			this->tbEntero->Size = System::Drawing::Size(100, 20);
			this->tbEntero->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 223);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbDigito);
			this->Controls->Add(this->btnSumaDigs);
			this->Controls->Add(this->btnRepetidos);
			this->Controls->Add(this->btnCapicua);
			this->Controls->Add(this->btnEliminarDig);
			this->Controls->Add(this->btnOrdenado);
			this->Controls->Add(this->btnCantDigs);
			this->Controls->Add(this->btnSinRepe);
			this->Controls->Add(this->btnCrapulo);
			this->Controls->Add(this->btnInvertir);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->tbResultado);
			this->Controls->Add(this->tbEntero);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		entero.guardar(tbEntero);
	}
	private: System::Void btnInvertir_Click(System::Object^ sender, System::EventArgs^ e) {
		Entero n = entero.invertido();
		result = Operaciones(n);
		result.mostrar(tbResultado);
	}
	private: System::Void btnCantDigs_Click(System::Object^ sender, System::EventArgs^ e) {
		Entero n = entero.cantDigitos();
		result = Operaciones(n);
		result.mostrar(tbResultado);
	}
	private: System::Void btnCapicua_Click(System::Object^ sender, System::EventArgs^ e) {
		bool b = entero.esCapicua();
		MessageBox::Show(b ? "Es Capicua" : "No es Capicua");
	}
	private: System::Void btnSinRepe_Click(System::Object^ sender, System::EventArgs^ e) {
		Entero n = entero.sinRepetidos();
		result = Operaciones(n);
		result.mostrar(tbResultado);
	}
	private: System::Void btnCrapulo_Click(System::Object^ sender, System::EventArgs^ e) {
		Entero n = entero.crapulo();
		result = Operaciones(n);
		result.mostrar(tbResultado);
	}
	private: System::Void btnOrdenado_Click(System::Object^ sender, System::EventArgs^ e) {
		Entero n = entero.ordenado();
		result = Operaciones(n);
		result.mostrar(tbResultado);
	}
	private: System::Void btnRepetidos_Click(System::Object^ sender, System::EventArgs^ e) {
		Entero n = entero.repetidos();
		result = Operaciones(n);
		result.mostrar(tbResultado);
	}
	private: System::Void btnSumaDigs_Click(System::Object^ sender, System::EventArgs^ e) {
		Entero n = entero.sumaDigitos();
		result = Operaciones(n);
		result.mostrar(tbResultado);
	}
	private: System::Void btnEliminarDig_Click(System::Object^ sender, System::EventArgs^ e) {
		digito.guardar(tbDigito);
		Entero dig = digito.thisEntero();
		Entero n = entero.eliminarDigito(dig);
		result = Operaciones(n);
		result.mostrar(tbResultado);
	}
	};
}

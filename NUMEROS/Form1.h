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

	Operaciones op;

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
	private: System::Windows::Forms::TextBox^ tbNumero;
	protected:
	private: System::Windows::Forms::TextBox^ tbResultado;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ tbDig;

	private: System::Windows::Forms::Label^ label1;

	protected:

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
			this->tbNumero = (gcnew System::Windows::Forms::TextBox());
			this->tbResultado = (gcnew System::Windows::Forms::TextBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->tbDig = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbNumero
			// 
			this->tbNumero->Location = System::Drawing::Point(14, 21);
			this->tbNumero->Name = L"tbNumero";
			this->tbNumero->Size = System::Drawing::Size(100, 20);
			this->tbNumero->TabIndex = 0;
			// 
			// tbResultado
			// 
			this->tbResultado->Location = System::Drawing::Point(246, 24);
			this->tbResultado->Name = L"tbResultado";
			this->tbResultado->Size = System::Drawing::Size(100, 20);
			this->tbResultado->TabIndex = 1;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(120, 21);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 2;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Form1::btnGuardar_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(14, 77);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Invertido";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(14, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Crapulo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(257, 77);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Sin Repetir";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(95, 77);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Cant Digitos";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(95, 115);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Ordenado";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(176, 158);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Eliminar Dig";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(176, 77);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Capicua";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(176, 115);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 10;
			this->button9->Text = L"Repetidos";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(257, 115);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 11;
			this->button10->Text = L"Suma Digs";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// tbDig
			// 
			this->tbDig->Location = System::Drawing::Point(70, 160);
			this->tbDig->Name = L"tbDig";
			this->tbDig->Size = System::Drawing::Size(100, 20);
			this->tbDig->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(243, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Resultado:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(358, 209);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbDig);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->tbResultado);
			this->Controls->Add(this->tbNumero);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = Convert::ToInt32(tbNumero->Text);
		op.setNumero(num);
		tbResultado->Text = Convert::ToString(num);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int inv = op.invertido();
		tbResultado->Text = Convert::ToString(inv);
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = op.cantDigitos();
		tbResultado->Text = Convert::ToString(n);
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		bool b = op.esCapicua();
		tbResultado->Text = b ? "Es Capicua" : "No es Capicua";
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = op.sinRepetidos();
		tbResultado->Text = Convert::ToString(n);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = op.crapulo();
		tbResultado->Text = Convert::ToString(n);
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = op.ordenado();
		tbResultado->Text = Convert::ToString(n);
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = op.repetidos();
		tbResultado->Text = Convert::ToString(n);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = op.sumaDigitos();
		tbResultado->Text = Convert::ToString(n);
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		int d = Convert::ToInt32(tbDig->Text);
		int n = op.eliminarDigito(d);
		tbResultado->Text = Convert::ToString(n);
	}
	};
}

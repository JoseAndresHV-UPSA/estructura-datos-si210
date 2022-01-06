#pragma once
#include "frmClientesProveedores.h"
#include "frmEntradaSalida.h"
#include "frmMovimientos.h"
#include "frmProducto.h"

namespace SistemaControldeInventario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lbTitulo;
	protected: 
	private: System::Windows::Forms::Button^  btnProducto;
	private: System::Windows::Forms::Button^  btnClientesProveedores;
	private: System::Windows::Forms::Button^  btnEntradaSalida;
	private: System::Windows::Forms::Button^  btnMovimientos;
	private: System::Windows::Forms::Label^  lbProducto;
	private: System::Windows::Forms::Label^  lbClientesProveedores;
	private: System::Windows::Forms::Label^  lbEntradaSalida;
	private: System::Windows::Forms::Label^  lbMovimientos;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lbTitulo = (gcnew System::Windows::Forms::Label());
			this->btnProducto = (gcnew System::Windows::Forms::Button());
			this->btnClientesProveedores = (gcnew System::Windows::Forms::Button());
			this->btnEntradaSalida = (gcnew System::Windows::Forms::Button());
			this->btnMovimientos = (gcnew System::Windows::Forms::Button());
			this->lbProducto = (gcnew System::Windows::Forms::Label());
			this->lbClientesProveedores = (gcnew System::Windows::Forms::Label());
			this->lbEntradaSalida = (gcnew System::Windows::Forms::Label());
			this->lbMovimientos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbTitulo
			// 
			this->lbTitulo->AutoSize = true;
			this->lbTitulo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->lbTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbTitulo->Location = System::Drawing::Point(12, 9);
			this->lbTitulo->Name = L"lbTitulo";
			this->lbTitulo->Size = System::Drawing::Size(414, 76);
			this->lbTitulo->TabIndex = 9;
			this->lbTitulo->Text = L"SISTEMA CONTROL DE \r\nINVENTARIO\r\n";
			this->lbTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnProducto
			// 
			this->btnProducto->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnProducto.BackgroundImage")));
			this->btnProducto->Location = System::Drawing::Point(85, 105);
			this->btnProducto->Name = L"btnProducto";
			this->btnProducto->Size = System::Drawing::Size(100, 100);
			this->btnProducto->TabIndex = 10;
			this->btnProducto->UseVisualStyleBackColor = true;
			this->btnProducto->Click += gcnew System::EventHandler(this, &Form1::btnProducto_Click);
			// 
			// btnClientesProveedores
			// 
			this->btnClientesProveedores->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnClientesProveedores.BackgroundImage")));
			this->btnClientesProveedores->Location = System::Drawing::Point(290, 105);
			this->btnClientesProveedores->Name = L"btnClientesProveedores";
			this->btnClientesProveedores->Size = System::Drawing::Size(100, 100);
			this->btnClientesProveedores->TabIndex = 11;
			this->btnClientesProveedores->UseVisualStyleBackColor = true;
			this->btnClientesProveedores->Click += gcnew System::EventHandler(this, &Form1::btnClientesProveedores_Click);
			// 
			// btnEntradaSalida
			// 
			this->btnEntradaSalida->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnEntradaSalida.BackgroundImage")));
			this->btnEntradaSalida->Location = System::Drawing::Point(85, 275);
			this->btnEntradaSalida->Name = L"btnEntradaSalida";
			this->btnEntradaSalida->Size = System::Drawing::Size(100, 100);
			this->btnEntradaSalida->TabIndex = 12;
			this->btnEntradaSalida->UseVisualStyleBackColor = true;
			this->btnEntradaSalida->Click += gcnew System::EventHandler(this, &Form1::btnEntradaSalida_Click);
			// 
			// btnMovimientos
			// 
			this->btnMovimientos->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnMovimientos.BackgroundImage")));
			this->btnMovimientos->Location = System::Drawing::Point(290, 275);
			this->btnMovimientos->Name = L"btnMovimientos";
			this->btnMovimientos->Size = System::Drawing::Size(100, 100);
			this->btnMovimientos->TabIndex = 13;
			this->btnMovimientos->UseVisualStyleBackColor = true;
			this->btnMovimientos->Click += gcnew System::EventHandler(this, &Form1::btnMovimientos_Click);
			// 
			// lbProducto
			// 
			this->lbProducto->AutoSize = true;
			this->lbProducto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbProducto->Location = System::Drawing::Point(81, 208);
			this->lbProducto->Name = L"lbProducto";
			this->lbProducto->Size = System::Drawing::Size(104, 48);
			this->lbProducto->TabIndex = 14;
			this->lbProducto->Text = L"Registrar\r\nProductos";
			this->lbProducto->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbClientesProveedores
			// 
			this->lbClientesProveedores->AutoSize = true;
			this->lbClientesProveedores->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbClientesProveedores->Location = System::Drawing::Point(278, 208);
			this->lbClientesProveedores->Name = L"lbClientesProveedores";
			this->lbClientesProveedores->Size = System::Drawing::Size(129, 48);
			this->lbClientesProveedores->TabIndex = 15;
			this->lbClientesProveedores->Text = L"Clientes y\r\nProveedores";
			this->lbClientesProveedores->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbEntradaSalida
			// 
			this->lbEntradaSalida->AutoSize = true;
			this->lbEntradaSalida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbEntradaSalida->Location = System::Drawing::Point(63, 378);
			this->lbEntradaSalida->Name = L"lbEntradaSalida";
			this->lbEntradaSalida->Size = System::Drawing::Size(145, 48);
			this->lbEntradaSalida->TabIndex = 16;
			this->lbEntradaSalida->Text = L"Registar \r\nEntrada/Salida";
			this->lbEntradaSalida->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbMovimientos
			// 
			this->lbMovimientos->AutoSize = true;
			this->lbMovimientos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbMovimientos->Location = System::Drawing::Point(278, 378);
			this->lbMovimientos->Name = L"lbMovimientos";
			this->lbMovimientos->Size = System::Drawing::Size(127, 48);
			this->lbMovimientos->TabIndex = 17;
			this->lbMovimientos->Text = L"Mostrar\r\nMovimientos";
			this->lbMovimientos->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 442);
			this->Controls->Add(this->lbMovimientos);
			this->Controls->Add(this->lbEntradaSalida);
			this->Controls->Add(this->lbClientesProveedores);
			this->Controls->Add(this->lbProducto);
			this->Controls->Add(this->btnMovimientos);
			this->Controls->Add(this->btnEntradaSalida);
			this->Controls->Add(this->btnClientesProveedores);
			this->Controls->Add(this->btnProducto);
			this->Controls->Add(this->lbTitulo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"MENÚ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnProducto_Click(System::Object^  sender, System::EventArgs^  e) {
			 frmProducto^ form = gcnew frmProducto();
			 form->Show();
		 }
private: System::Void btnClientesProveedores_Click(System::Object^  sender, System::EventArgs^  e) {
			 frmClientesProveedores^ form = gcnew frmClientesProveedores();
			 form->Show();
		 }
private: System::Void btnEntradaSalida_Click(System::Object^  sender, System::EventArgs^  e) {
			 frmEntradaSalida^ form = gcnew frmEntradaSalida();
			 form->Show();
		 }
private: System::Void btnMovimientos_Click(System::Object^  sender, System::EventArgs^  e) {
			 frmMovimientos^ form = gcnew frmMovimientos();
			 form->Show();
		 }
};
}


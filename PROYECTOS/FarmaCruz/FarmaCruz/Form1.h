#pragma once
#include <iostream>
#include <string>
#include <msclr/marshal_cppstd.h>
#include "AlmArchivos.h"
#include "AlmPersonas.h"
using namespace std;
using namespace msclr::interop;

namespace FarmaCruz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>

	AlmArchivos *medic = new AlmArchivos("Almacenamiento.dat");
	AlmPersonas *per = new AlmPersonas ("Citas.dat");

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
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Button^  btnadi;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Button^  btneliminar;

	private: System::Windows::Forms::Button^  btnmodificar;

	private: System::Windows::Forms::Button^  btnlistarc;

	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::TextBox^  tbuscar;
	private: System::Windows::Forms::Button^  btnbusc;


	private: System::Windows::Forms::Button^  btntam;

	private: System::Windows::Forms::TextBox^  ttamano;

	private: System::Windows::Forms::DataGridView^  grilla2;





	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Button^  btnadicionar;

	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Button^  btnelim;

	private: System::Windows::Forms::Button^  btnmodif;

	private: System::Windows::Forms::Button^  btnListar;

	private: System::Windows::Forms::DataGridView^  grilla2_b;





	private: System::Windows::Forms::DataGridView^  grilla;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  apellido;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  celular;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  hora;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  estado;
	private: System::Windows::Forms::Label^  label7;













	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::TextBox^  txtbuscar;
private: System::Windows::Forms::Button^  btnbuscar;
private: System::Windows::Forms::Button^  btntamano;
private: System::Windows::Forms::TextBox^  txttam;
private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::DataGridView^  grilla_b;

private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;













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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->txtbuscar = (gcnew System::Windows::Forms::TextBox());
			this->btnbuscar = (gcnew System::Windows::Forms::Button());
			this->btntamano = (gcnew System::Windows::Forms::Button());
			this->txttam = (gcnew System::Windows::Forms::TextBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->grilla = (gcnew System::Windows::Forms::DataGridView());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->apellido = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->celular = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->estado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->grilla_b = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnadi = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btneliminar = (gcnew System::Windows::Forms::Button());
			this->btnmodificar = (gcnew System::Windows::Forms::Button());
			this->btnlistarc = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->grilla2_b = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->tbuscar = (gcnew System::Windows::Forms::TextBox());
			this->btnbusc = (gcnew System::Windows::Forms::Button());
			this->btntam = (gcnew System::Windows::Forms::Button());
			this->ttamano = (gcnew System::Windows::Forms::TextBox());
			this->grilla2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->btnadicionar = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->btnelim = (gcnew System::Windows::Forms::Button());
			this->btnmodif = (gcnew System::Windows::Forms::Button());
			this->btnListar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_b))->BeginInit();
			this->panel13->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla2_b))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel1->Controls->Add(this->panel15);
			this->panel1->Controls->Add(this->panel14);
			this->panel1->Controls->Add(this->grilla_b);
			this->panel1->Controls->Add(this->panel13);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->btnadi);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->btneliminar);
			this->panel1->Controls->Add(this->btnmodificar);
			this->panel1->Controls->Add(this->btnlistarc);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(740, 640);
			this->panel1->TabIndex = 0;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::SlateGray;
			this->panel15->Controls->Add(this->txtbuscar);
			this->panel15->Controls->Add(this->btnbuscar);
			this->panel15->Controls->Add(this->btntamano);
			this->panel15->Controls->Add(this->txttam);
			this->panel15->Location = System::Drawing::Point(28, 77);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(169, 214);
			this->panel15->TabIndex = 50;
			// 
			// txtbuscar
			// 
			this->txtbuscar->Location = System::Drawing::Point(21, 117);
			this->txtbuscar->Name = L"txtbuscar";
			this->txtbuscar->Size = System::Drawing::Size(127, 20);
			this->txtbuscar->TabIndex = 21;
			// 
			// btnbuscar
			// 
			this->btnbuscar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnbuscar->FlatAppearance->BorderSize = 0;
			this->btnbuscar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btnbuscar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnbuscar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnbuscar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnbuscar->ForeColor = System::Drawing::Color::White;
			this->btnbuscar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnbuscar->Location = System::Drawing::Point(21, 143);
			this->btnbuscar->Name = L"btnbuscar";
			this->btnbuscar->Size = System::Drawing::Size(127, 43);
			this->btnbuscar->TabIndex = 20;
			this->btnbuscar->Text = L"Buscar";
			this->btnbuscar->UseVisualStyleBackColor = true;
			this->btnbuscar->Click += gcnew System::EventHandler(this, &Form1::btnbuscar_Click);
			// 
			// btntamano
			// 
			this->btntamano->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btntamano->FlatAppearance->BorderSize = 0;
			this->btntamano->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btntamano->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btntamano->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btntamano->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btntamano->ForeColor = System::Drawing::Color::White;
			this->btntamano->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btntamano->Location = System::Drawing::Point(21, 57);
			this->btntamano->Name = L"btntamano";
			this->btntamano->Size = System::Drawing::Size(127, 43);
			this->btntamano->TabIndex = 19;
			this->btntamano->Text = L"Tamano";
			this->btntamano->UseVisualStyleBackColor = true;
			this->btntamano->Click += gcnew System::EventHandler(this, &Form1::btntamano_Click);
			// 
			// txttam
			// 
			this->txttam->Location = System::Drawing::Point(21, 31);
			this->txttam->Name = L"txttam";
			this->txttam->Size = System::Drawing::Size(127, 20);
			this->txttam->TabIndex = 6;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel14->Controls->Add(this->grilla);
			this->panel14->Controls->Add(this->label7);
			this->panel14->Location = System::Drawing::Point(218, 68);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(512, 182);
			this->panel14->TabIndex = 49;
			// 
			// grilla
			// 
			this->grilla->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->grilla->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grilla->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->grilla->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->nombre, this->apellido, 
				this->celular, this->fecha, this->hora, this->estado});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->grilla->DefaultCellStyle = dataGridViewCellStyle2;
			this->grilla->EnableHeadersVisualStyles = false;
			this->grilla->GridColor = System::Drawing::Color::SteelBlue;
			this->grilla->Location = System::Drawing::Point(3, 53);
			this->grilla->Name = L"grilla";
			this->grilla->RowHeadersVisible = false;
			this->grilla->Size = System::Drawing::Size(504, 119);
			this->grilla->TabIndex = 36;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Nombre";
			this->nombre->Name = L"nombre";
			// 
			// apellido
			// 
			this->apellido->HeaderText = L"Apellido";
			this->apellido->Name = L"apellido";
			// 
			// celular
			// 
			this->celular->HeaderText = L"Celular";
			this->celular->Name = L"celular";
			// 
			// fecha
			// 
			this->fecha->HeaderText = L"Fecha";
			this->fecha->Name = L"fecha";
			// 
			// hora
			// 
			this->hora->HeaderText = L"Hora";
			this->hora->Name = L"hora";
			// 
			// estado
			// 
			this->estado->HeaderText = L"Estado";
			this->estado->Name = L"estado";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(181, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(164, 25);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Reservar citas";
			// 
			// grilla_b
			// 
			this->grilla_b->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->grilla_b->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grilla_b->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->grilla_b->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla_b->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->dataGridViewTextBoxColumn6, 
				this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, 
				this->dataGridViewTextBoxColumn11});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->grilla_b->DefaultCellStyle = dataGridViewCellStyle4;
			this->grilla_b->EnableHeadersVisualStyles = false;
			this->grilla_b->GridColor = System::Drawing::Color::SteelBlue;
			this->grilla_b->Location = System::Drawing::Point(226, 256);
			this->grilla_b->Name = L"grilla_b";
			this->grilla_b->RowHeadersVisible = false;
			this->grilla_b->Size = System::Drawing::Size(504, 372);
			this->grilla_b->TabIndex = 48;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Nombre";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Apellido";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Celular";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Fecha";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Hora";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Estado";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::LightSlateGray;
			this->panel13->Controls->Add(this->label1);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel13->Location = System::Drawing::Point(0, 0);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(740, 57);
			this->panel13->TabIndex = 35;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(185, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(329, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CONSULTAS MEDICAS";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel5->Location = System::Drawing::Point(12, 353);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(5, 50);
			this->panel5->TabIndex = 19;
			// 
			// btnadi
			// 
			this->btnadi->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnadi->FlatAppearance->BorderSize = 0;
			this->btnadi->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btnadi->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnadi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnadi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnadi->ForeColor = System::Drawing::Color::White;
			this->btnadi->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnadi.Image")));
			this->btnadi->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnadi->Location = System::Drawing::Point(12, 353);
			this->btnadi->Name = L"btnadi";
			this->btnadi->Size = System::Drawing::Size(185, 50);
			this->btnadi->TabIndex = 18;
			this->btnadi->Text = L"Adicionar usuario";
			this->btnadi->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnadi->UseVisualStyleBackColor = true;
			this->btnadi->Click += gcnew System::EventHandler(this, &Form1::btnadi_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel3->Location = System::Drawing::Point(12, 521);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(5, 50);
			this->panel3->TabIndex = 17;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel4->Location = System::Drawing::Point(12, 465);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(5, 50);
			this->panel4->TabIndex = 16;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel6->Location = System::Drawing::Point(12, 409);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(5, 50);
			this->panel6->TabIndex = 15;
			// 
			// btneliminar
			// 
			this->btneliminar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btneliminar->FlatAppearance->BorderSize = 0;
			this->btneliminar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btneliminar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btneliminar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btneliminar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btneliminar->ForeColor = System::Drawing::Color::White;
			this->btneliminar->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btneliminar.Image")));
			this->btneliminar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btneliminar->Location = System::Drawing::Point(12, 521);
			this->btneliminar->Name = L"btneliminar";
			this->btneliminar->Size = System::Drawing::Size(185, 50);
			this->btneliminar->TabIndex = 14;
			this->btneliminar->Text = L"Eliminar citas";
			this->btneliminar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btneliminar->UseVisualStyleBackColor = true;
			this->btneliminar->Click += gcnew System::EventHandler(this, &Form1::btneliminar_Click);
			// 
			// btnmodificar
			// 
			this->btnmodificar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnmodificar->FlatAppearance->BorderSize = 0;
			this->btnmodificar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btnmodificar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnmodificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnmodificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmodificar->ForeColor = System::Drawing::Color::White;
			this->btnmodificar->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnmodificar.Image")));
			this->btnmodificar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnmodificar->Location = System::Drawing::Point(12, 465);
			this->btnmodificar->Name = L"btnmodificar";
			this->btnmodificar->Size = System::Drawing::Size(185, 50);
			this->btnmodificar->TabIndex = 13;
			this->btnmodificar->Text = L"Modificar citas";
			this->btnmodificar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnmodificar->UseVisualStyleBackColor = true;
			this->btnmodificar->Click += gcnew System::EventHandler(this, &Form1::btnmodificar_Click);
			// 
			// btnlistarc
			// 
			this->btnlistarc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnlistarc->FlatAppearance->BorderSize = 0;
			this->btnlistarc->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btnlistarc->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnlistarc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnlistarc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnlistarc->ForeColor = System::Drawing::Color::White;
			this->btnlistarc->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnlistarc.Image")));
			this->btnlistarc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnlistarc->Location = System::Drawing::Point(12, 409);
			this->btnlistarc->Name = L"btnlistarc";
			this->btnlistarc->Size = System::Drawing::Size(185, 50);
			this->btnlistarc->TabIndex = 12;
			this->btnlistarc->Text = L"Listar clientes";
			this->btnlistarc->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnlistarc->UseVisualStyleBackColor = true;
			this->btnlistarc->Click += gcnew System::EventHandler(this, &Form1::btnlistarc_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSlateGray;
			this->panel2->Controls->Add(this->grilla2_b);
			this->panel2->Controls->Add(this->panel12);
			this->panel2->Controls->Add(this->panel11);
			this->panel2->Controls->Add(this->grilla2);
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->btnadicionar);
			this->panel2->Controls->Add(this->panel8);
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->panel10);
			this->panel2->Controls->Add(this->btnelim);
			this->panel2->Controls->Add(this->btnmodif);
			this->panel2->Controls->Add(this->btnListar);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(740, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(601, 640);
			this->panel2->TabIndex = 1;
			// 
			// grilla2_b
			// 
			this->grilla2_b->BackgroundColor = System::Drawing::Color::LightSlateGray;
			this->grilla2_b->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grilla2_b->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->grilla2_b->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla2_b->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->dataGridViewTextBoxColumn1, 
				this->Column7, this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::LightSlateGray;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->grilla2_b->DefaultCellStyle = dataGridViewCellStyle6;
			this->grilla2_b->EnableHeadersVisualStyles = false;
			this->grilla2_b->GridColor = System::Drawing::Color::SteelBlue;
			this->grilla2_b->Location = System::Drawing::Point(181, 353);
			this->grilla2_b->Name = L"grilla2_b";
			this->grilla2_b->RowHeadersVisible = false;
			this->grilla2_b->Size = System::Drawing::Size(416, 203);
			this->grilla2_b->TabIndex = 35;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Nombre";
			this->Column7->Name = L"Column7";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Cantidad";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Dosis";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Precio Bs.";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Estado";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(46)), 
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->panel12->Controls->Add(this->label2);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(0, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(601, 57);
			this->panel12->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(81, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(465, 31);
			this->label2->TabIndex = 1;
			this->label2->Text = L"MEDICAMENTOS Y MATERIALES";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::SlateGray;
			this->panel11->Controls->Add(this->tbuscar);
			this->panel11->Controls->Add(this->btnbusc);
			this->panel11->Controls->Add(this->btntam);
			this->panel11->Controls->Add(this->ttamano);
			this->panel11->Location = System::Drawing::Point(6, 77);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(169, 214);
			this->panel11->TabIndex = 33;
			// 
			// tbuscar
			// 
			this->tbuscar->Location = System::Drawing::Point(14, 117);
			this->tbuscar->Name = L"tbuscar";
			this->tbuscar->Size = System::Drawing::Size(127, 20);
			this->tbuscar->TabIndex = 21;
			// 
			// btnbusc
			// 
			this->btnbusc->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnbusc->FlatAppearance->BorderSize = 0;
			this->btnbusc->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btnbusc->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnbusc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnbusc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnbusc->ForeColor = System::Drawing::Color::White;
			this->btnbusc->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnbusc->Location = System::Drawing::Point(14, 143);
			this->btnbusc->Name = L"btnbusc";
			this->btnbusc->Size = System::Drawing::Size(127, 43);
			this->btnbusc->TabIndex = 20;
			this->btnbusc->Text = L"Buscar";
			this->btnbusc->UseVisualStyleBackColor = true;
			this->btnbusc->Click += gcnew System::EventHandler(this, &Form1::btnbusc_Click_1);
			// 
			// btntam
			// 
			this->btntam->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btntam->FlatAppearance->BorderSize = 0;
			this->btntam->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btntam->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btntam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btntam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btntam->ForeColor = System::Drawing::Color::White;
			this->btntam->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btntam->Location = System::Drawing::Point(14, 57);
			this->btntam->Name = L"btntam";
			this->btntam->Size = System::Drawing::Size(127, 43);
			this->btntam->TabIndex = 19;
			this->btntam->Text = L"Tamano";
			this->btntam->UseVisualStyleBackColor = true;
			this->btntam->Click += gcnew System::EventHandler(this, &Form1::btntam_Click_1);
			// 
			// ttamano
			// 
			this->ttamano->Location = System::Drawing::Point(14, 31);
			this->ttamano->Name = L"ttamano";
			this->ttamano->Size = System::Drawing::Size(127, 20);
			this->ttamano->TabIndex = 6;
			// 
			// grilla2
			// 
			this->grilla2->BackgroundColor = System::Drawing::Color::LightSlateGray;
			this->grilla2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::HotTrack;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->grilla2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->grilla2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grilla2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->Column1, this->Column6, 
				this->Column2, this->Column4, this->Column3, this->Column5});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::LightSlateGray;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->grilla2->DefaultCellStyle = dataGridViewCellStyle8;
			this->grilla2->EnableHeadersVisualStyles = false;
			this->grilla2->GridColor = System::Drawing::Color::SteelBlue;
			this->grilla2->Location = System::Drawing::Point(181, 88);
			this->grilla2->Name = L"grilla2";
			this->grilla2->RowHeadersVisible = false;
			this->grilla2->Size = System::Drawing::Size(416, 203);
			this->grilla2->TabIndex = 28;
			this->grilla2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::grilla2_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 30;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Nombre";
			this->Column6->Name = L"Column6";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Cantidad";
			this->Column2->Name = L"Column2";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Dosis";
			this->Column4->Name = L"Column4";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Precio Bs.";
			this->Column3->Name = L"Column3";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Estado";
			this->Column5->Name = L"Column5";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel7->Location = System::Drawing::Point(6, 353);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(5, 50);
			this->panel7->TabIndex = 27;
			// 
			// btnadicionar
			// 
			this->btnadicionar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnadicionar->FlatAppearance->BorderSize = 0;
			this->btnadicionar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btnadicionar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnadicionar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnadicionar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnadicionar->ForeColor = System::Drawing::Color::White;
			this->btnadicionar->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnadicionar.Image")));
			this->btnadicionar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnadicionar->Location = System::Drawing::Point(6, 353);
			this->btnadicionar->Name = L"btnadicionar";
			this->btnadicionar->Size = System::Drawing::Size(169, 50);
			this->btnadicionar->TabIndex = 26;
			this->btnadicionar->Text = L"Adicionar nuevo";
			this->btnadicionar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnadicionar->UseVisualStyleBackColor = true;
			this->btnadicionar->Click += gcnew System::EventHandler(this, &Form1::btnadicionar_Click_1);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel8->Location = System::Drawing::Point(6, 521);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(5, 50);
			this->panel8->TabIndex = 25;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel9->Location = System::Drawing::Point(6, 465);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(5, 50);
			this->panel9->TabIndex = 24;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->panel10->Location = System::Drawing::Point(6, 409);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(5, 50);
			this->panel10->TabIndex = 23;
			// 
			// btnelim
			// 
			this->btnelim->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnelim->FlatAppearance->BorderSize = 0;
			this->btnelim->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btnelim->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnelim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnelim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnelim->ForeColor = System::Drawing::Color::White;
			this->btnelim->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnelim.Image")));
			this->btnelim->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnelim->Location = System::Drawing::Point(6, 521);
			this->btnelim->Name = L"btnelim";
			this->btnelim->Size = System::Drawing::Size(169, 50);
			this->btnelim->TabIndex = 22;
			this->btnelim->Text = L"Eliminar";
			this->btnelim->UseVisualStyleBackColor = true;
			this->btnelim->Click += gcnew System::EventHandler(this, &Form1::btnelim_Click_1);
			// 
			// btnmodif
			// 
			this->btnmodif->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnmodif->FlatAppearance->BorderSize = 0;
			this->btnmodif->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btnmodif->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnmodif->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnmodif->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnmodif->ForeColor = System::Drawing::Color::White;
			this->btnmodif->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnmodif.Image")));
			this->btnmodif->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnmodif->Location = System::Drawing::Point(6, 465);
			this->btnmodif->Name = L"btnmodif";
			this->btnmodif->Size = System::Drawing::Size(169, 50);
			this->btnmodif->TabIndex = 21;
			this->btnmodif->Text = L"Modificar";
			this->btnmodif->UseVisualStyleBackColor = true;
			this->btnmodif->Click += gcnew System::EventHandler(this, &Form1::btnmodif_Click_1);
			// 
			// btnListar
			// 
			this->btnListar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnListar->FlatAppearance->BorderSize = 0;
			this->btnListar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGoldenrod;
			this->btnListar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)), 
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnListar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnListar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnListar->ForeColor = System::Drawing::Color::White;
			this->btnListar->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnListar.Image")));
			this->btnListar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnListar->Location = System::Drawing::Point(6, 409);
			this->btnListar->Name = L"btnListar";
			this->btnListar->Size = System::Drawing::Size(169, 50);
			this->btnListar->TabIndex = 20;
			this->btnListar->Text = L"Listar";
			this->btnListar->UseVisualStyleBackColor = true;
			this->btnListar->Click += gcnew System::EventHandler(this, &Form1::btnListar_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1341, 640);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"FarmaCruz";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla_b))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla2_b))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grilla2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void btnelim_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		   grilla2_b->ColumnCount=6;
		   grilla2_b->RowCount=5;
		   medic->Limpiar(grilla2_b);
		   grilla2_b->ColumnCount=6;
		   grilla2_b->RowCount=1;
		   int nroregistro=System::Convert::ToInt32(tbuscar->Text);
		   int nr=medic->eliminarReg(nroregistro,grilla2_b,0);
		   if(nr==-1) {MessageBox::Show("Eliminar","no encontrado");}
		 }
private: System::Void btnadicionar_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 int j=0;
			 int fin=System::Convert::ToInt32(ttamano->Text);
			 while(j<fin)
			 {
				 medic->adicionarNuevo(grilla2,j);
				 j++;
			 }
			 grilla2_b->ColumnCount=6;
			 grilla2_b->RowCount=20;
			 medic->listar(grilla2_b);
		 }
private: System::Void btnListar_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 grilla2_b->ColumnCount=6;
			 grilla2_b->ColumnCount=20;
			 medic->Limpiar(grilla2_b);
			 grilla2_b->ColumnCount=6;
			 grilla2_b->RowCount=20;
			 medic->listar(grilla2_b);
		 }
private: System::Void btnmodif_Click_1(System::Object^  sender, System::EventArgs^  e) {
		   grilla2_b->ColumnCount=6;
		   grilla2_b->RowCount=5;
		   medic->Limpiar(grilla2_b);
		   grilla2_b->ColumnCount=6;
		   grilla2_b->RowCount=1;
		   int nroregistro=System::Convert::ToInt32(tbuscar->Text);
		   int nr=medic->modificarReg(nroregistro,grilla2,0);
		   if(nr==-1) {MessageBox::Show("modificar","no encontrado");}
		 }
private: System::Void btnelim_Click_1(System::Object^  sender, System::EventArgs^  e) {
		   grilla2_b->ColumnCount=6;
		   grilla2_b->RowCount=5;
		   medic->Limpiar(grilla2_b);
		   grilla2_b->ColumnCount=6;
		   grilla2_b->RowCount=1;
		   int nroregistro=System::Convert::ToInt32(tbuscar->Text);
		   int nr=medic->eliminarReg(nroregistro,grilla2_b,0);
		   if(nr==-1) {MessageBox::Show("Eliminar","no encontrado");}
		 }
private: System::Void btntam_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 grilla2->ColumnCount=6;
			 grilla2->RowCount=System::Convert::ToInt32(ttamano->Text);
		 }
private: System::Void btnbusc_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 grilla2_b->ColumnCount=6;
			 grilla2_b->RowCount=20;
			 medic->Limpiar(grilla2_b);
			 grilla2_b->ColumnCount=6;
			 grilla2_b->RowCount=5;
			 int nroregistro=System::Convert::ToInt32(tbuscar->Text);
			 int nr=medic->buscarReg(nroregistro,grilla2_b,5);
			 if (nr==-1) {MessageBox::Show("Atencion", "no encontrado");}
		 }
private: System::Void grilla2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		 }
private: System::Void btntamano_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 grilla->ColumnCount=6;
			 grilla->RowCount=System::Convert::ToInt32(txttam->Text);
		 }
private: System::Void btnbuscar_Click(System::Object^  sender, System::EventArgs^  e) {
			 grilla_b->ColumnCount=6;
			 grilla_b->RowCount=20;
			 per->Limpiar(grilla_b);
			 grilla_b->ColumnCount=6;
			 grilla_b->RowCount=5;
			 int nroregistro=System::Convert::ToInt32(txtbuscar->Text);
			 int nr=per->buscarReg(nroregistro,grilla_b,5);
			 if (nr==-1) {MessageBox::Show("Atencion", "no encontrado");}
		 }
private: System::Void btnadi_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int j=0;
			 int fin=System::Convert::ToInt32(txttam->Text);
			 while(j<fin)
			 {
				 per->adicionarNuevo(grilla,j);
				 j++;
			 }
			 grilla_b->ColumnCount=6;
			 grilla_b->RowCount=20;
			 per->listar(grilla_b);
		 }
private: System::Void btnlistarc_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 grilla_b->ColumnCount=6;
			 grilla_b->ColumnCount=20;
			 per->Limpiar(grilla_b);
			 grilla_b->ColumnCount=6;
			 grilla_b->RowCount=20;
			 per->listar(grilla_b);
		 }
private: System::Void btnmodificar_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		   grilla_b->ColumnCount=6;
		   grilla_b->RowCount=5;
		   per->Limpiar(grilla_b);
		   grilla_b->ColumnCount=6;
		   grilla_b->RowCount=1;
		   int nroregistro=System::Convert::ToInt32(txtbuscar->Text);
		   int nr=per->modificarReg(nroregistro,grilla,0);
		   if(nr==-1) {MessageBox::Show("modificar","no encontrado");}
		 }
private: System::Void btneliminar_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		   grilla_b->ColumnCount=6;
		   grilla_b->RowCount=5;
		   per->Limpiar(grilla_b);
		   grilla_b->ColumnCount=6;
		   grilla_b->RowCount=1;
		   int nroregistro=System::Convert::ToInt32(txtbuscar->Text);
		   int nr=per->eliminarReg(nroregistro,grilla_b,0);
		   if(nr==-1) {MessageBox::Show("Eliminar","no encontrado");}
		 }
};
}


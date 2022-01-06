#pragma once
#include "frmCliente.h"
#include "frmProducto.h"
#include "frmDetalleVenta.h"

namespace Proyecto1 {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  generalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  formulariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  clientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  autosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  reportesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ventaToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->generalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->formulariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->clientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->autosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->generalesToolStripMenuItem, 
				this->formulariosToolStripMenuItem, this->reportesToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(484, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// generalesToolStripMenuItem
			// 
			this->generalesToolStripMenuItem->Name = L"generalesToolStripMenuItem";
			this->generalesToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->generalesToolStripMenuItem->Text = L"Generales";
			// 
			// formulariosToolStripMenuItem
			// 
			this->formulariosToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->clientesToolStripMenuItem, 
				this->autosToolStripMenuItem, this->ventaToolStripMenuItem});
			this->formulariosToolStripMenuItem->Name = L"formulariosToolStripMenuItem";
			this->formulariosToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->formulariosToolStripMenuItem->Text = L"Formularios";
			// 
			// clientesToolStripMenuItem
			// 
			this->clientesToolStripMenuItem->Name = L"clientesToolStripMenuItem";
			this->clientesToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->clientesToolStripMenuItem->Text = L"Clientes";
			this->clientesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::clientesToolStripMenuItem_Click);
			// 
			// autosToolStripMenuItem
			// 
			this->autosToolStripMenuItem->Name = L"autosToolStripMenuItem";
			this->autosToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->autosToolStripMenuItem->Text = L"Producto";
			this->autosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::autosToolStripMenuItem_Click);
			// 
			// reportesToolStripMenuItem
			// 
			this->reportesToolStripMenuItem->Name = L"reportesToolStripMenuItem";
			this->reportesToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->reportesToolStripMenuItem->Text = L"Reportes";
			// 
			// ventaToolStripMenuItem
			// 
			this->ventaToolStripMenuItem->Name = L"ventaToolStripMenuItem";
			this->ventaToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->ventaToolStripMenuItem->Text = L"Venta";
			this->ventaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ventaToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 331);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"SISTEMA DE VENTAS";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clientesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			frmCliente fc;
			fc.ShowDialog();
		}
	private: System::Void autosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			frmProducto fp;
			fp.ShowDialog();
		 }
	private: System::Void ventaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			frmDetalleVenta dv;
			dv.ShowDialog();
		 }
};
}


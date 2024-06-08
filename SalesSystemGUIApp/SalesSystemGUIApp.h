#pragma once
#include "ApartmentForm.h"
#include "LoginForm.h"
#include "ADMIN_interfaz.h"
#include "USER_interfaz.h"
#include "GenerateOrderForm.h"

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class SalesSystemMainForm : public System::Windows::Forms::Form
	{
	public:
		static Usuario^ Usuario; //Variable de clase que permite guadar al usuario autenticado
		SalesSystemMainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~SalesSystemMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ transaccionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ departamentosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trabajadoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuariosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deudasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ maToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ventasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ emergenciasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reporteDeVentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chatToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ estacionamientoToolStripMenuItem;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->departamentosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trabajadoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuariosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->transaccionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deudasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ventasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->estacionamientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->emergenciasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reporteDeVentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->transaccionToolStripMenuItem, this->reporteToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(728, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->departamentosToolStripMenuItem,
					this->trabajadoresToolStripMenuItem, this->usuariosToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			this->mantenimientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::mantenimientoToolStripMenuItem_Click);
			// 
			// departamentosToolStripMenuItem
			// 
			this->departamentosToolStripMenuItem->Name = L"departamentosToolStripMenuItem";
			this->departamentosToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->departamentosToolStripMenuItem->Text = L"Departamentos";
			// 
			// trabajadoresToolStripMenuItem
			// 
			this->trabajadoresToolStripMenuItem->Name = L"trabajadoresToolStripMenuItem";
			this->trabajadoresToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->trabajadoresToolStripMenuItem->Text = L"Trabajadores";
			// 
			// usuariosToolStripMenuItem
			// 
			this->usuariosToolStripMenuItem->Name = L"usuariosToolStripMenuItem";
			this->usuariosToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->usuariosToolStripMenuItem->Text = L"Usuarios";
			// 
			// transaccionToolStripMenuItem
			// 
			this->transaccionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->deudasToolStripMenuItem,
					this->ventasToolStripMenuItem, this->estacionamientoToolStripMenuItem
			});
			this->transaccionToolStripMenuItem->Name = L"transaccionToolStripMenuItem";
			this->transaccionToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->transaccionToolStripMenuItem->Text = L"Transaccion";
			// 
			// deudasToolStripMenuItem
			// 
			this->deudasToolStripMenuItem->Name = L"deudasToolStripMenuItem";
			this->deudasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->deudasToolStripMenuItem->Text = L"Deudas";
			this->deudasToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::deudasToolStripMenuItem_Click_1);
			// 
			// ventasToolStripMenuItem
			// 
			this->ventasToolStripMenuItem->Name = L"ventasToolStripMenuItem";
			this->ventasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ventasToolStripMenuItem->Text = L"Ventas";
			// 
			// estacionamientoToolStripMenuItem
			// 
			this->estacionamientoToolStripMenuItem->Name = L"estacionamientoToolStripMenuItem";
			this->estacionamientoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->estacionamientoToolStripMenuItem->Text = L"Alarma";
			this->estacionamientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::estacionamientoToolStripMenuItem_Click);
			// 
			// reporteToolStripMenuItem
			// 
			this->reporteToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->maToolStripMenuItem,
					this->emergenciasToolStripMenuItem, this->reporteDeVentasToolStripMenuItem
			});
			this->reporteToolStripMenuItem->Name = L"reporteToolStripMenuItem";
			this->reporteToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->reporteToolStripMenuItem->Text = L"Reporte";
			this->reporteToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::reporteToolStripMenuItem_Click);
			// 
			// maToolStripMenuItem
			// 
			this->maToolStripMenuItem->Name = L"maToolStripMenuItem";
			this->maToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->maToolStripMenuItem->Text = L"Mantenimiento";
			this->maToolStripMenuItem->Click += gcnew System::EventHandler(this, &SalesSystemMainForm::maToolStripMenuItem_Click);
			// 
			// emergenciasToolStripMenuItem
			// 
			this->emergenciasToolStripMenuItem->Name = L"emergenciasToolStripMenuItem";
			this->emergenciasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->emergenciasToolStripMenuItem->Text = L"Emergencias";
			// 
			// reporteDeVentasToolStripMenuItem
			// 
			this->reporteDeVentasToolStripMenuItem->Name = L"reporteDeVentasToolStripMenuItem";
			this->reporteDeVentasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->reporteDeVentasToolStripMenuItem->Text = L"Reporte de Ventas";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->chatToolStripMenuItem });
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// chatToolStripMenuItem
			// 
			this->chatToolStripMenuItem->Name = L"chatToolStripMenuItem";
			this->chatToolStripMenuItem->Size = System::Drawing::Size(158, 22);
			this->chatToolStripMenuItem->Text = L"Chat del equipo";
			// 
			// SalesSystemMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(728, 443);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"SalesSystemMainForm";
			this->Text = L"Sistema de Ventas";
			this->Load += gcnew System::EventHandler(this, &SalesSystemMainForm::SalesSystemMainForm_Load);
			this->Shown += gcnew System::EventHandler(this, &SalesSystemMainForm::SalesSystemMainForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void maToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void reporteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void deudasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	//De Roberto:
	//Login y prototipo de mostrar ciertas ventanas para cada usuario, véase Propietario, Inquilino y Personal
	private: System::Void SalesSystemMainForm_Load(System::Object^ sender, System::EventArgs^ e) {

		LoginForm^ loginForm = gcnew LoginForm(this);
		loginForm->ShowDialog();

	}
	private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void deudasToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		ADMIN_interfaz^ ADinterfaz = gcnew ADMIN_interfaz();
		ADinterfaz->MdiParent = this;
		ADinterfaz->Show();
		this->Hide();
	}

	private: System::Void SalesSystemMainForm_Shown(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void estacionamientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	GenerateOrderForm^ generateOrderForm = gcnew GenerateOrderForm();
	generateOrderForm->MdiParent = this;
	generateOrderForm->Show();

}
};
}


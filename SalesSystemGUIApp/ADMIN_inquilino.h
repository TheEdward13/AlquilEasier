#pragma once
#include "ADMIN_inq_recibos.h"
#include "ADMIN_inq_infodep.h"
#include "AddInqui.h"
#include "MOD_Inqui.h"

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ADMIN_inquilino
	/// </summary>
	public ref class ADMIN_inquilino : public System::Windows::Forms::Form
	{
	public:
		ADMIN_inquilino(void)
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
		~ADMIN_inquilino()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	protected:





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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(123, 59);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(284, 68);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Registrar recibos";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ADMIN_inquilino::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(123, 174);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(284, 68);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Mensajes";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(123, 297);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(284, 68);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Agregar inquilino";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ADMIN_inquilino::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(123, 414);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(284, 68);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Modificar inquilino";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &ADMIN_inquilino::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(123, 539);
			this->button5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(284, 68);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Información de departamento";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &ADMIN_inquilino::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(-1, 0);
			this->button6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 29;
			this->button6->Text = L"Atrás";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &ADMIN_inquilino::button6_Click);
			// 
			// ADMIN_inquilino
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(543, 683);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"ADMIN_inquilino";
			this->Text = L"Administrador - inquilinos";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ADMIN_inq_recibos^ inq_recibos = gcnew ADMIN_inq_recibos();
		inq_recibos->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_inquilino::ADMIN_inq_recibosClosed);
		inq_recibos->Show();
		this->Hide();
	}

	void ADMIN_inquilino::AddInquiClosed(System::Object^ sender, FormClosedEventArgs^ e)
	{
		this->Show();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		/*CÓDIGO HACER CLICK Y AGREGAR USUARIO*/
		AddInqui ^ addInqui = gcnew AddInqui();
		addInqui->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_inquilino::AddInquiClosed);
		addInqui->Show();
		this->Hide();
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		ADMIN_inq_infodep^ inq_infodep = gcnew ADMIN_inq_infodep();
		inq_infodep->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_inquilino::ADMIN_inq_infodepClosed);
		inq_infodep->Show();
		this->Hide();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   // Función para mostrar nuevamente ADMIN_interfaz cuando ApartmentForm se cierra
		   void ADMIN_inquilino::ADMIN_inq_recibosClosed(System::Object^ sender, FormClosedEventArgs^ e)
		   {
			   this->Show();
		   }
		   // Función para mostrar nuevamente ADMIN_interfaz cuando ApartmentForm se cierra
		   void ADMIN_inquilino::ADMIN_inq_infodepClosed(System::Object^ sender, FormClosedEventArgs^ e)
		   {
			   this->Show();
		   }
				   void ADMIN_inquilino::MOD_InquiClosed(System::Object^ sender, FormClosedEventArgs^ e)
				   {
					   this->Show();
				   }
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MOD_Inqui^ mod_Inqui = gcnew MOD_Inqui();
		mod_Inqui->FormClosed += gcnew FormClosedEventHandler(this, &ADMIN_inquilino::MOD_InquiClosed);
		mod_Inqui->Show();
		this->Hide();
	}

};
}

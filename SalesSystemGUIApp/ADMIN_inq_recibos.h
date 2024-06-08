#pragma once
#include "ComboBoxItem.h"
#include <ctime>


namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AlquilEasierModel;
	using namespace AlquilEasierService;
	using namespace System::Collections::Generic;
	using namespace std;

	/// <summary>
	/// Resumen de ADMIN_inq_recibos
	/// </summary>
	public ref class ADMIN_inq_recibos : public System::Windows::Forms::Form
	{
	public:
		ADMIN_inq_recibos(void)
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
		~ADMIN_inq_recibos()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:









	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textDeuda;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textAlquiler;
	private: System::Windows::Forms::TextBox^ textAgua;
	private: System::Windows::Forms::TextBox^ textLuz;
	private: System::Windows::Forms::TextBox^ textSecurity;




	private: System::Windows::Forms::TextBox^ textInternet;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dgvApartment;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Piso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumDepa;
	private: System::Windows::Forms::TextBox^ textDep;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;



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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textDeuda = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textAlquiler = (gcnew System::Windows::Forms::TextBox());
			this->textAgua = (gcnew System::Windows::Forms::TextBox());
			this->textLuz = (gcnew System::Windows::Forms::TextBox());
			this->textSecurity = (gcnew System::Windows::Forms::TextBox());
			this->textInternet = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dgvApartment = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Piso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumDepa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textDep = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(313, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Deuda";
			// 
			// textDeuda
			// 
			this->textDeuda->Location = System::Drawing::Point(457, 139);
			this->textDeuda->Name = L"textDeuda";
			this->textDeuda->Size = System::Drawing::Size(132, 20);
			this->textDeuda->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(313, 192);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Alquiler";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(314, 229);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Agua";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(314, 264);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 20);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Luz";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(313, 304);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 20);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Internet";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(313, 347);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 20);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Seguridad";
			// 
			// textAlquiler
			// 
			this->textAlquiler->Location = System::Drawing::Point(475, 192);
			this->textAlquiler->Name = L"textAlquiler";
			this->textAlquiler->Size = System::Drawing::Size(100, 20);
			this->textAlquiler->TabIndex = 15;
			// 
			// textAgua
			// 
			this->textAgua->Location = System::Drawing::Point(475, 229);
			this->textAgua->Name = L"textAgua";
			this->textAgua->Size = System::Drawing::Size(100, 20);
			this->textAgua->TabIndex = 16;
			// 
			// textLuz
			// 
			this->textLuz->Location = System::Drawing::Point(475, 264);
			this->textLuz->Name = L"textLuz";
			this->textLuz->Size = System::Drawing::Size(100, 20);
			this->textLuz->TabIndex = 17;
			// 
			// textSecurity
			// 
			this->textSecurity->Location = System::Drawing::Point(475, 347);
			this->textSecurity->Name = L"textSecurity";
			this->textSecurity->Size = System::Drawing::Size(100, 20);
			this->textSecurity->TabIndex = 18;
			// 
			// textInternet
			// 
			this->textInternet->Location = System::Drawing::Point(475, 304);
			this->textInternet->Name = L"textInternet";
			this->textInternet->Size = System::Drawing::Size(100, 20);
			this->textInternet->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(325, 399);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 30);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(464, 399);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 30);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Limpiar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button2_Click);
			// 
			// dgvApartment
			// 
			this->dgvApartment->AllowUserToOrderColumns = true;
			this->dgvApartment->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvApartment->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvApartment->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Id, this->Piso,
					this->NumDepa
			});
			this->dgvApartment->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvApartment->Location = System::Drawing::Point(38, 37);
			this->dgvApartment->Name = L"dgvApartment";
			this->dgvApartment->RowHeadersVisible = false;
			this->dgvApartment->Size = System::Drawing::Size(213, 429);
			this->dgvApartment->TabIndex = 23;
			this->dgvApartment->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ADMIN_inq_recibos::dataGridView1_CellClick);
			// 
			// Id
			// 
			this->Id->HeaderText = L"Id";
			this->Id->Name = L"Id";
			this->Id->Width = 45;
			// 
			// Piso
			// 
			this->Piso->HeaderText = L"Piso";
			this->Piso->Name = L"Piso";
			this->Piso->Width = 65;
			// 
			// NumDepa
			// 
			this->NumDepa->HeaderText = L"N° Departamento";
			this->NumDepa->Name = L"NumDepa";
			// 
			// textDep
			// 
			this->textDep->Enabled = false;
			this->textDep->ForeColor = System::Drawing::SystemColors::Window;
			this->textDep->Location = System::Drawing::Point(390, 70);
			this->textDep->Name = L"textDep";
			this->textDep->Size = System::Drawing::Size(132, 20);
			this->textDep->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(396, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 20);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Departamento";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(-2, -1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Atrás";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ADMIN_inq_recibos::button3_Click);
			// 
			// ADMIN_inq_recibos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(636, 498);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textDep);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvApartment);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textInternet);
			this->Controls->Add(this->textSecurity);
			this->Controls->Add(this->textLuz);
			this->Controls->Add(this->textAgua);
			this->Controls->Add(this->textAlquiler);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textDeuda);
			this->Controls->Add(this->label5);
			this->Name = L"ADMIN_inq_recibos";
			this->Text = L"Agregar Recibo";
			this->Load += gcnew System::EventHandler(this, &ADMIN_inq_recibos::ADMIN_inq_recibos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double deuda = Convert::ToDouble(textDeuda->Text);
		double alquiler = Convert::ToDouble(textAlquiler->Text);
		double agua = Convert::ToDouble(textAgua->Text);
		double luz = Convert::ToDouble(textLuz->Text);
		double internet = Convert::ToDouble(textInternet->Text);
		double security = Convert::ToDouble(textSecurity->Text);

		std::time_t t = std::time(0);
		std::tm now;
		localtime_s(&now, &t);
		int currentYear = now.tm_year + 1900;
		int currentMonth = now.tm_mon + 1;

		Deudas^ recibo = gcnew Deudas();
		recibo->Deuda = deuda;
		recibo->Alquiler = alquiler;
		recibo->Agua = agua;
		recibo->Luz = luz;
		recibo->Internet = internet;
		recibo->Seguridad = security;
		recibo->Month = currentMonth;
		recibo->Year = currentYear;
	}

		   void showApartment() {
			   List<Departamento^>^ departList = Service::ConsultaDepa();
			   dgvApartment->Rows->Clear();
			   for (int i = 0; i < departList->Count; i++) {
				   dgvApartment->Rows->Add(gcnew array<String^>{
					   "" + departList[i]->Id,
						   "" + departList[i]->Piso,
						   "" + departList[i]->NumDep
				   });
			   }
		   }


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearControls();
	}
		   void ClearControls() {
			   textDeuda->Text = "";
			   textAlquiler->Text = "";
			   textAgua->Text = "";
			   textLuz->Text = "";
			   textInternet->Text = "";
			   textSecurity->Text = "";
		   }
	private: System::Void ADMIN_inq_recibos_Load(System::Object^ sender, System::EventArgs^ e) {
		showApartment();
	}



	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int depaId = Int32::Parse(dgvApartment->Rows[dgvApartment->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

		Departamento^ depa = Service::ConsultaDepaByID(depaId);

		if (depa != nullptr) {
			textDep->Text = "" + depa->NumDep;
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}

#pragma once

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

	/// <summary>
	/// Resumen de AddInqui
	/// </summary>
	public ref class AddInqui : public System::Windows::Forms::Form
	{
	public:
		AddInqui(void)
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
		~AddInqui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button6;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textNombre;

	private: System::Windows::Forms::TextBox^ textApellido;

	private: System::Windows::Forms::TextBox^ textTelf;

	private: System::Windows::Forms::TextBox^ textCorreo;

	private: System::Windows::Forms::TextBox^ textDNI;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dgvApartment;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Piso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumDepa;
	private: System::Windows::Forms::TextBox^ DepAsig;
	private: System::Windows::Forms::Button^ button1;


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
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textNombre = (gcnew System::Windows::Forms::TextBox());
			this->textApellido = (gcnew System::Windows::Forms::TextBox());
			this->textTelf = (gcnew System::Windows::Forms::TextBox());
			this->textCorreo = (gcnew System::Windows::Forms::TextBox());
			this->textDNI = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dgvApartment = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Piso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumDepa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DepAsig = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->BeginInit();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(0, -2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Atrás";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AddInqui::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(116, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 20);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Nuevo Inquilino";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(72, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 20);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Nombres:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(72, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 20);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Apellidos:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(72, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 20);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Teléfono:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(72, 217);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 20);
			this->label5->TabIndex = 35;
			this->label5->Text = L"Correo:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(72, 256);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 36;
			this->label6->Text = L"DNI:";
			// 
			// textNombre
			// 
			this->textNombre->Location = System::Drawing::Point(197, 93);
			this->textNombre->Name = L"textNombre";
			this->textNombre->Size = System::Drawing::Size(100, 20);
			this->textNombre->TabIndex = 37;
			// 
			// textApellido
			// 
			this->textApellido->Location = System::Drawing::Point(197, 138);
			this->textApellido->Name = L"textApellido";
			this->textApellido->Size = System::Drawing::Size(100, 20);
			this->textApellido->TabIndex = 38;
			// 
			// textTelf
			// 
			this->textTelf->Location = System::Drawing::Point(197, 180);
			this->textTelf->Name = L"textTelf";
			this->textTelf->Size = System::Drawing::Size(100, 20);
			this->textTelf->TabIndex = 39;
			// 
			// textCorreo
			// 
			this->textCorreo->Location = System::Drawing::Point(197, 219);
			this->textCorreo->Name = L"textCorreo";
			this->textCorreo->Size = System::Drawing::Size(100, 20);
			this->textCorreo->TabIndex = 40;
			// 
			// textDNI
			// 
			this->textDNI->Location = System::Drawing::Point(197, 256);
			this->textDNI->Name = L"textDNI";
			this->textDNI->Size = System::Drawing::Size(100, 20);
			this->textDNI->TabIndex = 41;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(64, 306);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(189, 20);
			this->label7->TabIndex = 42;
			this->label7->Text = L"Departamento asignado";
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
			this->dgvApartment->Location = System::Drawing::Point(344, 40);
			this->dgvApartment->Name = L"dgvApartment";
			this->dgvApartment->RowHeadersVisible = false;
			this->dgvApartment->Size = System::Drawing::Size(213, 251);
			this->dgvApartment->TabIndex = 43;
			this->dgvApartment->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddInqui::dgvApartment_CellClick);
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
			// DepAsig
			// 
			this->DepAsig->Enabled = false;
			this->DepAsig->Location = System::Drawing::Point(296, 306);
			this->DepAsig->Name = L"DepAsig";
			this->DepAsig->Size = System::Drawing::Size(100, 20);
			this->DepAsig->TabIndex = 44;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(451, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 29);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddInqui::button1_Click);
			// 
			// AddInqui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(590, 371);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DepAsig);
			this->Controls->Add(this->dgvApartment);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textDNI);
			this->Controls->Add(this->textCorreo);
			this->Controls->Add(this->textTelf);
			this->Controls->Add(this->textApellido);
			this->Controls->Add(this->textNombre);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Name = L"AddInqui";
			this->Text = L"AddInqui";
			this->Load += gcnew System::EventHandler(this, &AddInqui::AddInqui_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dgvApartment_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int depaId = Int32::Parse(dgvApartment->Rows[dgvApartment->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

		Departamento^ depa = Service::ConsultaDepaByID(depaId);

		if (depa != nullptr) {
			DepAsig->Text = "" + depa->NumDep;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Usuario^ user = gcnew Usuario();

		user->Nombre = (textNombre->Text);;
		user->Apellido = (textApellido->Text);;
		user->Telefono = (textTelf->Text);
		user->Correo = (textCorreo->Text);
		user->DNI = (textDNI->Text);

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void AddInqui_Load(System::Object^ sender, System::EventArgs^ e) {
		showApartment();
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

	};
}
#pragma once

namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MOD_Inqui
	/// </summary>
	public ref class MOD_Inqui : public System::Windows::Forms::Form
	{
	public:
		MOD_Inqui(void)
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
		~MOD_Inqui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ DepAsig;
	private: System::Windows::Forms::DataGridView^ dgvInquilinos;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Piso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumDepa;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textDNI;
	private: System::Windows::Forms::TextBox^ textCorreo;
	private: System::Windows::Forms::TextBox^ textTelf;
	private: System::Windows::Forms::TextBox^ textApellido;
	private: System::Windows::Forms::TextBox^ textNombre;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;

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
			this->DepAsig = (gcnew System::Windows::Forms::TextBox());
			this->dgvInquilinos = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Piso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumDepa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textDNI = (gcnew System::Windows::Forms::TextBox());
			this->textCorreo = (gcnew System::Windows::Forms::TextBox());
			this->textTelf = (gcnew System::Windows::Forms::TextBox());
			this->textApellido = (gcnew System::Windows::Forms::TextBox());
			this->textNombre = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInquilinos))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(321, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 29);
			this->button1->TabIndex = 61;
			this->button1->Text = L"Modificar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// DepAsig
			// 
			this->DepAsig->Enabled = false;
			this->DepAsig->Location = System::Drawing::Point(470, 326);
			this->DepAsig->Name = L"DepAsig";
			this->DepAsig->Size = System::Drawing::Size(100, 20);
			this->DepAsig->TabIndex = 60;
			// 
			// dgvInquilinos
			// 
			this->dgvInquilinos->AllowUserToOrderColumns = true;
			this->dgvInquilinos->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dgvInquilinos->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvInquilinos->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Id, this->Piso,
					this->NumDepa
			});
			this->dgvInquilinos->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvInquilinos->Location = System::Drawing::Point(36, 72);
			this->dgvInquilinos->Name = L"dgvInquilinos";
			this->dgvInquilinos->RowHeadersVisible = false;
			this->dgvInquilinos->Size = System::Drawing::Size(213, 392);
			this->dgvInquilinos->TabIndex = 59;
			this->dgvInquilinos->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MOD_Inqui::dgvInquilinos_CellClick);
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
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(305, 326);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 20);
			this->label7->TabIndex = 58;
			this->label7->Text = L"Departamento ";
			// 
			// textDNI
			// 
			this->textDNI->Location = System::Drawing::Point(470, 276);
			this->textDNI->Name = L"textDNI";
			this->textDNI->Size = System::Drawing::Size(100, 20);
			this->textDNI->TabIndex = 57;
			// 
			// textCorreo
			// 
			this->textCorreo->Location = System::Drawing::Point(470, 239);
			this->textCorreo->Name = L"textCorreo";
			this->textCorreo->Size = System::Drawing::Size(100, 20);
			this->textCorreo->TabIndex = 56;
			// 
			// textTelf
			// 
			this->textTelf->Location = System::Drawing::Point(470, 200);
			this->textTelf->Name = L"textTelf";
			this->textTelf->Size = System::Drawing::Size(100, 20);
			this->textTelf->TabIndex = 55;
			// 
			// textApellido
			// 
			this->textApellido->Location = System::Drawing::Point(470, 158);
			this->textApellido->Name = L"textApellido";
			this->textApellido->Size = System::Drawing::Size(100, 20);
			this->textApellido->TabIndex = 54;
			// 
			// textNombre
			// 
			this->textNombre->Location = System::Drawing::Point(470, 113);
			this->textNombre->Name = L"textNombre";
			this->textNombre->Size = System::Drawing::Size(100, 20);
			this->textNombre->TabIndex = 53;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(313, 276);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 52;
			this->label6->Text = L"DNI:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(313, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 20);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Correo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(313, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 20);
			this->label4->TabIndex = 50;
			this->label4->Text = L"Teléfono:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(313, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 20);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Apellidos:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(313, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 20);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Nombres:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(404, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 47;
			this->label1->Text = L"Datos";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(-1, -2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 46;
			this->button6->Text = L"Atrás";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MOD_Inqui::button6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(69, 39);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 20);
			this->label8->TabIndex = 62;
			this->label8->Text = L"Lista de Inquilinos";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(464, 385);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 29);
			this->button2->TabIndex = 63;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MOD_Inqui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(609, 511);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DepAsig);
			this->Controls->Add(this->dgvInquilinos);
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
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MOD_Inqui";
			this->Text = L"MOD_Inqui";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvInquilinos))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void dgvInquilinos_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	};
}
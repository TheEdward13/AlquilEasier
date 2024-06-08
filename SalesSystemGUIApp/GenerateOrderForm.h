#pragma once
#include "DepSearchForm.h"
namespace SalesSystemGUIApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de GenerateOrderForm
	/// </summary>
	public ref class GenerateOrderForm : public System::Windows::Forms::Form
	{
	public:
		GenerateOrderForm(void)
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
		~GenerateOrderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtid;

	private: System::Windows::Forms::TextBox^ txtuser;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtdep;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtpark;
	private: System::Windows::Forms::Button^ btnaddpark;
	private: System::Windows::Forms::DataGridView^ dgcorderpark;







	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevaOrdenToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txttime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OrdenDetailId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DepId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ emergency;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GenerateOrderForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->txtuser = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtdep = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtpark = (gcnew System::Windows::Forms::TextBox());
			this->btnaddpark = (gcnew System::Windows::Forms::Button());
			this->dgcorderpark = (gcnew System::Windows::Forms::DataGridView());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevaOrdenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txttime = (gcnew System::Windows::Forms::TextBox());
			this->OrdenDetailId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DepId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UserName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->emergency = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgcorderpark))->BeginInit();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(41, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Location = System::Drawing::Point(41, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Usuario";
			// 
			// txtid
			// 
			this->txtid->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txtid->Location = System::Drawing::Point(132, 49);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(82, 20);
			this->txtid->TabIndex = 4;
			// 
			// txtuser
			// 
			this->txtuser->Location = System::Drawing::Point(132, 79);
			this->txtuser->Name = L"txtuser";
			this->txtuser->Size = System::Drawing::Size(336, 20);
			this->txtuser->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(41, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Departamento";
			// 
			// txtdep
			// 
			this->txtdep->Location = System::Drawing::Point(132, 114);
			this->txtdep->Name = L"txtdep";
			this->txtdep->Size = System::Drawing::Size(82, 20);
			this->txtdep->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Location = System::Drawing::Point(41, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 15);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Alarma";
			// 
			// txtpark
			// 
			this->txtpark->Location = System::Drawing::Point(132, 154);
			this->txtpark->Name = L"txtpark";
			this->txtpark->Size = System::Drawing::Size(82, 20);
			this->txtpark->TabIndex = 9;
			// 
			// btnaddpark
			// 
			this->btnaddpark->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnaddpark->Location = System::Drawing::Point(548, 137);
			this->btnaddpark->Name = L"btnaddpark";
			this->btnaddpark->Size = System::Drawing::Size(168, 36);
			this->btnaddpark->TabIndex = 10;
			this->btnaddpark->Text = L"Agregar registro de alarma";
			this->btnaddpark->UseVisualStyleBackColor = true;
			this->btnaddpark->Click += gcnew System::EventHandler(this, &GenerateOrderForm::btnaddpark_Click);
			// 
			// dgcorderpark
			// 
			this->dgcorderpark->BackgroundColor = System::Drawing::SystemColors::Desktop;
			this->dgcorderpark->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgcorderpark->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->OrdenDetailId,
					this->DepId, this->UserName, this->emergency
			});
			this->dgcorderpark->Location = System::Drawing::Point(39, 202);
			this->dgcorderpark->Name = L"dgcorderpark";
			this->dgcorderpark->Size = System::Drawing::Size(694, 161);
			this->dgcorderpark->TabIndex = 11;
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->nuevaOrdenToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevaOrdenToolStripMenuItem
			// 
			this->nuevaOrdenToolStripMenuItem->Name = L"nuevaOrdenToolStripMenuItem";
			this->nuevaOrdenToolStripMenuItem->Size = System::Drawing::Size(144, 22);
			this->nuevaOrdenToolStripMenuItem->Text = L"Nueva Orden";
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(792, 24);
			this->menuStrip2->TabIndex = 2;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Location = System::Drawing::Point(601, 387);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 15);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Tiempo";
			// 
			// txttime
			// 
			this->txttime->Location = System::Drawing::Point(651, 384);
			this->txttime->Name = L"txttime";
			this->txttime->Size = System::Drawing::Size(82, 20);
			this->txttime->TabIndex = 13;
			// 
			// OrdenDetailId
			// 
			this->OrdenDetailId->HeaderText = L"Num.";
			this->OrdenDetailId->Name = L"OrdenDetailId";
			this->OrdenDetailId->Width = 30;
			// 
			// DepId
			// 
			this->DepId->HeaderText = L"Id.";
			this->DepId->Name = L"DepId";
			this->DepId->Width = 30;
			// 
			// UserName
			// 
			this->UserName->HeaderText = L"Usuario";
			this->UserName->Name = L"UserName";
			// 
			// emergency
			// 
			this->emergency->HeaderText = L"Emergencia";
			this->emergency->Name = L"emergency";
			this->emergency->Width = 50;
			// 
			// GenerateOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(792, 464);
			this->Controls->Add(this->txttime);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgcorderpark);
			this->Controls->Add(this->btnaddpark);
			this->Controls->Add(this->txtpark);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtdep);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtuser);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip2);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Name = L"GenerateOrderForm";
			this->Text = L"GenerateOrderForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgcorderpark))->EndInit();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnaddpark_Click(System::Object^ sender, System::EventArgs^ e) {
		//Buscar el departamento para agregar los detalles del usuario
		DepSearchForm^ depSearchForm = gcnew DepSearchForm();
		depSearchForm->ShowDialog();
	}
};
}

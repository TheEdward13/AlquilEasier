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
	/// Resumen de DepSearchForm
	/// </summary>
	public ref class DepSearchForm : public System::Windows::Forms::Form
	{
	public:
		DepSearchForm(void)
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
		~DepSearchForm()
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
	private: System::Windows::Forms::TextBox^ txtname;



	private: System::Windows::Forms::DataGridView^ dgvdeps;


	private: System::Windows::Forms::Button^ btnsearch;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UserId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dep;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtid = (gcnew System::Windows::Forms::TextBox());
			this->txtname = (gcnew System::Windows::Forms::TextBox());
			this->dgvdeps = (gcnew System::Windows::Forms::DataGridView());
			this->UserId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dep = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnsearch = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvdeps))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre";
			// 
			// txtid
			// 
			this->txtid->Location = System::Drawing::Point(97, 21);
			this->txtid->Name = L"txtid";
			this->txtid->Size = System::Drawing::Size(68, 20);
			this->txtid->TabIndex = 2;
			// 
			// txtname
			// 
			this->txtname->Location = System::Drawing::Point(97, 58);
			this->txtname->Name = L"txtname";
			this->txtname->Size = System::Drawing::Size(229, 20);
			this->txtname->TabIndex = 3;
			// 
			// dgvdeps
			// 
			this->dgvdeps->AllowUserToAddRows = false;
			this->dgvdeps->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvdeps->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->UserId, this->name,
					this->dep
			});
			this->dgvdeps->Location = System::Drawing::Point(30, 153);
			this->dgvdeps->Name = L"dgvdeps";
			this->dgvdeps->RowHeadersVisible = false;
			this->dgvdeps->Size = System::Drawing::Size(510, 164);
			this->dgvdeps->TabIndex = 4;
			this->dgvdeps->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DepSearchForm::dgvdeps_CellClick);
			// 
			// UserId
			// 
			this->UserId->HeaderText = L"Id";
			this->UserId->Name = L"UserId";
			this->UserId->Width = 40;
			// 
			// name
			// 
			this->name->HeaderText = L"Nombre";
			this->name->Name = L"name";
			// 
			// dep
			// 
			this->dep->HeaderText = L"Departamento";
			this->dep->Name = L"dep";
			this->dep->Width = 50;
			// 
			// btnsearch
			// 
			this->btnsearch->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnsearch->Location = System::Drawing::Point(123, 116);
			this->btnsearch->Name = L"btnsearch";
			this->btnsearch->Size = System::Drawing::Size(131, 24);
			this->btnsearch->TabIndex = 5;
			this->btnsearch->Text = L"Buscar";
			this->btnsearch->UseVisualStyleBackColor = true;
			this->btnsearch->Click += gcnew System::EventHandler(this, &DepSearchForm::btnsearch_Click);
			// 
			// btncancel
			// 
			this->btncancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btncancel->Location = System::Drawing::Point(302, 116);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(131, 24);
			this->btncancel->TabIndex = 6;
			this->btncancel->Text = L"Cancelar";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &DepSearchForm::btncancel_Click);
			// 
			// DepSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 362);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnsearch);
			this->Controls->Add(this->dgvdeps);
			this->Controls->Add(this->txtname);
			this->Controls->Add(this->txtid);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"DepSearchForm";
			this->Text = L"DepSearchForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvdeps))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   void AddUserToGrid(Usuario^ user) {
			   dgvdeps->Rows->Add(gcnew array<String^>{"" + user ->Id, user->Name, ""+user->Apellido });

		   }


private: System::Void btnsearch_Click(System::Object^ sender, System::EventArgs^ e) {
	dgvdeps->Rows->Clear();
	if (txtid->Text->Trim()->Equals("")) {
		List<Usuario^>^ userlist = Service::QueryAllUsuariosbyName(txtname->Text->Trim());
		for (int i = 0; i < userlist->Count; i++)
			AddUserToGrid(userlist[i]);
			

	}
	else{
		//No me salio buscarlo por ID
		//Usuario^ user = Service::QueryAllUsuariosbyId(txtid->Text->Trim());
		//AddUserToGrid(user);
	}
}
private: System::Void dgvdeps_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}

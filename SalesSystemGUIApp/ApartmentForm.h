#pragma once
//#include "ADMIN_interfaz.h"


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
	/// Resumen de ApartmentForm
	/// </summary>
	/// 
	public ref class ApartmentForm : public System::Windows::Forms::Form
	{
	public:
		ApartmentForm(void)
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
		~ApartmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtNumDep;
	private: System::Windows::Forms::TextBox^ txtPric;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAlterPhoto;
	private: System::Windows::Forms::DataGridView^ dgvApartment;
	private: System::Windows::Forms::Button^ Clean;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textDimen;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textPiso;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ txtHabilitado;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Piso;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumDepa;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtNumDep = (gcnew System::Windows::Forms::TextBox());
			this->txtPric = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAlterPhoto = (gcnew System::Windows::Forms::Button());
			this->dgvApartment = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Piso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumDepa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Clean = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textDimen = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textPiso = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtHabilitado = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(332, 242);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id: ";
			this->label1->Click += gcnew System::EventHandler(this, &ApartmentForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(332, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Número de departamento: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(335, 427);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Precios de alquiler:";
			this->label3->Click += gcnew System::EventHandler(this, &ApartmentForm::label3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(335, 474);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Estado:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(380, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(205, 162);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ApartmentForm::pictureBox1_Click);
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(522, 241);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 6;
			// 
			// txtNumDep
			// 
			this->txtNumDep->Location = System::Drawing::Point(522, 332);
			this->txtNumDep->Name = L"txtNumDep";
			this->txtNumDep->Size = System::Drawing::Size(100, 20);
			this->txtNumDep->TabIndex = 8;
			// 
			// txtPric
			// 
			this->txtPric->Location = System::Drawing::Point(522, 427);
			this->txtPric->Name = L"txtPric";
			this->txtPric->Size = System::Drawing::Size(100, 20);
			this->txtPric->TabIndex = 9;
			this->txtPric->TextChanged += gcnew System::EventHandler(this, &ApartmentForm::txtPric_TextChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(371, 525);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 23);
			this->btnAdd->TabIndex = 15;
			this->btnAdd->Text = L"Agregar ";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &ApartmentForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(497, 525);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(98, 23);
			this->btnUpdate->TabIndex = 16;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &ApartmentForm::btnUpdate_Click);
			// 
			// btnAlterPhoto
			// 
			this->btnAlterPhoto->Location = System::Drawing::Point(405, 196);
			this->btnAlterPhoto->Name = L"btnAlterPhoto";
			this->btnAlterPhoto->Size = System::Drawing::Size(145, 23);
			this->btnAlterPhoto->TabIndex = 17;
			this->btnAlterPhoto->Text = L"Actualizar Foto";
			this->btnAlterPhoto->UseVisualStyleBackColor = true;
			this->btnAlterPhoto->Click += gcnew System::EventHandler(this, &ApartmentForm::btnAlterPhoto_Click);
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
			this->dgvApartment->Location = System::Drawing::Point(63, 37);
			this->dgvApartment->Name = L"dgvApartment";
			this->dgvApartment->RowHeadersVisible = false;
			this->dgvApartment->Size = System::Drawing::Size(213, 540);
			this->dgvApartment->TabIndex = 18;
			this->dgvApartment->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ApartmentForm::dataGridView1_CellClick);
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
			// Clean
			// 
			this->Clean->Location = System::Drawing::Point(371, 554);
			this->Clean->Name = L"Clean";
			this->Clean->Size = System::Drawing::Size(100, 23);
			this->Clean->TabIndex = 20;
			this->Clean->Text = L"Limpiar";
			this->Clean->UseVisualStyleBackColor = true;
			this->Clean->Click += gcnew System::EventHandler(this, &ApartmentForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(335, 381);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 16);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Metros cuadrados:";
			// 
			// textDimen
			// 
			this->textDimen->Location = System::Drawing::Point(522, 381);
			this->textDimen->Name = L"textDimen";
			this->textDimen->Size = System::Drawing::Size(100, 20);
			this->textDimen->TabIndex = 22;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(497, 554);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Eliminar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ApartmentForm::button1_Click_1);
			// 
			// textPiso
			// 
			this->textPiso->Location = System::Drawing::Point(522, 284);
			this->textPiso->Name = L"textPiso";
			this->textPiso->Size = System::Drawing::Size(100, 20);
			this->textPiso->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(332, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 16);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Piso:";
			// 
			// txtHabilitado
			// 
			this->txtHabilitado->AutoSize = true;
			this->txtHabilitado->Location = System::Drawing::Point(532, 475);
			this->txtHabilitado->Name = L"txtHabilitado";
			this->txtHabilitado->Size = System::Drawing::Size(73, 17);
			this->txtHabilitado->TabIndex = 26;
			this->txtHabilitado->Text = L"Habilitado";
			this->txtHabilitado->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(-2, -2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Atrás";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ApartmentForm::button2_Click);
			// 
			// ApartmentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(647, 618);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtHabilitado);
			this->Controls->Add(this->textPiso);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textDimen);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Clean);
			this->Controls->Add(this->dgvApartment);
			this->Controls->Add(this->btnAlterPhoto);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtPric);
			this->Controls->Add(this->txtNumDep);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Name = L"ApartmentForm";
			this->ShowIcon = false;
			this->Text = L"Registro de departamento";
			this->Load += gcnew System::EventHandler(this, &ApartmentForm::ApartmentForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvApartment))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ApartmentForm_Load(System::Object^ sender, System::EventArgs^ e) {
		showApartment();
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   void ClearControls() {
			   txtId->Text = "";
			   txtNumDep->Text = "";
			   txtPric->Text = "";
			   textDimen->Text = "";
			   textPiso->Text = "";
		   }

	private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Convert::ToInt32(txtId->Text);
		int numdepartamento = Convert::ToInt32(txtNumDep->Text);
		double precio = Convert::ToDouble(txtPric->Text);
		int piso = Convert::ToInt32(textPiso->Text);
		double dimensiones = Convert::ToDouble(textDimen->Text);

		Departamento^ depa = gcnew Departamento();

		depa->Id = id;
		depa->Precio = precio;
		depa->Estado = txtHabilitado->Checked;
		depa->Dimensiones = dimensiones;
		depa->Piso = piso;
		depa->NumDep = numdepartamento;

		if (pictureBox1 != nullptr && pictureBox1->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pictureBox1->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			depa->Photo = ms->ToArray();
		}

		Service::AddApartment(depa);
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


	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		int depaId = Int32::Parse(dgvApartment->Rows[dgvApartment->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

		Departamento^ depa = Service::ConsultaDepaByID(depaId);


		if (depa != nullptr) {
			txtId->Text = Convert::ToString(depa->Id);
			txtPric->Text = "" + depa->Precio;
			textDimen->Text = "" + depa->Dimensiones;
			txtHabilitado->Checked = depa->Estado;
			textPiso->Text = "" + depa->Piso;
			txtNumDep->Text = "" + depa->NumDep;

			if (depa->Photo != nullptr) {
				System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(depa->Photo);
				pictureBox1->Image = Image::FromStream(ms);
			}
			else {
				pictureBox1->Image = nullptr;
				pictureBox1->Invalidate();
			}
		}


	}
	private: System::Void archivoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearControls();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   void SearchAndPutImageOn(PictureBox^ pb) {
			   OpenFileDialog^ opfd = gcnew OpenFileDialog();
			   opfd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
			   if (opfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				   pb->Image = gcnew Bitmap(opfd->FileName);
			   }
		   }
	private: System::Void btnAlterPhoto_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		ofd->Filter = "Image Files (*.jpg;*.jpeg;)|*.jpg;*.jpeg;";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pictureBox1->Image = gcnew Bitmap(ofd->FileName);
		}
	}
	private: System::Void txtPric_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

		int id = Convert::ToInt32(txtId->Text);
		int numDepa = Convert::ToInt32(txtNumDep->Text);
		double dimensiones = Convert::ToDouble(textDimen->Text);
		double precio = Convert::ToDouble(txtPric->Text);
		int piso = Convert::ToInt32(textPiso->Text);
		double metros = Convert::ToDouble(textDimen->Text);
		int numdepartamento = Convert::ToInt32(txtNumDep->Text);

		Departamento^ depa = gcnew Departamento();
		depa->Id = id;
		depa->Precio = precio;
		depa->Estado = txtHabilitado->Checked;
		depa->Dimensiones = dimensiones;
		depa->Piso = piso;
		depa->NumDep = numdepartamento;

		if (pictureBox1 != nullptr && pictureBox1->Image != nullptr) {
			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream();
			pictureBox1->Image->Save(ms, System::Drawing::Imaging::ImageFormat::Jpeg);
			depa->Photo = ms->ToArray();
		}

		Service::ModifyApartment(depa);
		showApartment();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int id = Convert::ToInt32(txtId->Text);
		Service::DeleteApartment(id);
		showApartment();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
	};
}


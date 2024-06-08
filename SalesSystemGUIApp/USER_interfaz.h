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

	/// <summary>
	/// Resumen de USER_interfaz
	/// </summary>
	public ref class USER_interfaz : public System::Windows::Forms::Form
	{
	public:
		USER_interfaz(void)
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
		~USER_interfaz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ToolTip^ toolTip2;
	private: System::Windows::Forms::Button^ bttnCocheraOn;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->bttnCocheraOn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 68);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Deuda acumulada";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(85, 129);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Renta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(363, 129);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Servicios";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(189, 202);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 55);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Recibos";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(189, 289);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 55);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Mensajes";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(189, 380);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 74);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Información del departamento";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// bttnCocheraOn
			// 
			this->bttnCocheraOn->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnCocheraOn->Location = System::Drawing::Point(189, 486);
			this->bttnCocheraOn->Margin = System::Windows::Forms::Padding(4);
			this->bttnCocheraOn->Name = L"bttnCocheraOn";
			this->bttnCocheraOn->Size = System::Drawing::Size(235, 74);
			this->bttnCocheraOn->TabIndex = 6;
			this->bttnCocheraOn->Text = L"Habilitar cochera";
			this->bttnCocheraOn->UseVisualStyleBackColor = true;
			this->bttnCocheraOn->Click += gcnew System::EventHandler(this, &USER_interfaz::bttnCocheraOn_Click);
			// 
			// USER_interfaz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(640, 587);
			this->Controls->Add(this->bttnCocheraOn);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"USER_interfaz";
			this->Text = L"USER_interfaz";
			this->Load += gcnew System::EventHandler(this, &USER_interfaz::USER_interfaz_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void USER_interfaz_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   void ComunicarArduino(int encendido) {

			   try {
				   String^ result = Service::EnviarOnOff(encendido);

				   String^ resultString = result->ToString();

				   // resultString ES LA VARIABLE RETORNADA POR EL ARDUINO, IMPORTANTE!, VALOR VÁLIDO ES != "50\r" 

				   if (resultString->Equals("50\r")) {
					   MessageBox::Show("No se ha logrado iniciar el sistema de cochera.");
				   }
				   else {
					   MessageBox::Show("Se ha activado la cochera, proceda a ingresar por favor");
				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("Ha ocurrido un problema: " + ex->Message);
			   }

		   }

	private: System::Void bttnCocheraOn_Click(System::Object^ sender, System::EventArgs^ e) {

		ComunicarArduino(1);

	}
	private: System::Void bttnCocheraOff_Click(System::Object^ sender, System::EventArgs^ e) {

		//ComunicarArduino(0);

	}
};
}

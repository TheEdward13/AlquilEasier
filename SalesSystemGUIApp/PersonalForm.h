#pragma once

namespace SalesSystemGUIApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace AlquilEasierModel;
    using namespace AlquilEasierService;

    /// <summary>
    /// Resumen de PersonalForm
    /// </summary>
    public ref class PersonalForm : public System::Windows::Forms::Form
    {
    public:
        PersonalForm(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        ~PersonalForm()
        {
            if (components)
            {
                delete components;
            }
        }
























    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ label6;


    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TabPage^ tabPage2;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::ComboBox^ comboBoxPisos;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::DataGridView^ dataGridView1;


    private: System::Windows::Forms::Label^ HoraSalida;



    private: System::Windows::Forms::Label^ HoraIngreso;



    private: System::Windows::Forms::TabControl^ BarraOpciones;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Label^ Fecha;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ cFecha;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ HIngreso;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ HSalida;



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
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->comboBoxPisos = (gcnew System::Windows::Forms::ComboBox());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->HoraSalida = (gcnew System::Windows::Forms::Label());
            this->HoraIngreso = (gcnew System::Windows::Forms::Label());
            this->BarraOpciones = (gcnew System::Windows::Forms::TabControl());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->Fecha = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->cFecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->HIngreso = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->HSalida = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->tabPage2->SuspendLayout();
            this->tabPage1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->BarraOpciones->SuspendLayout();
            this->SuspendLayout();
            // 
            // pictureBox1
            // 
            this->pictureBox1->Location = System::Drawing::Point(-1, -1);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(340, 149);
            this->pictureBox1->TabIndex = 28;
            this->pictureBox1->TabStop = false;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label6->Location = System::Drawing::Point(114, 224);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(99, 20);
            this->label6->TabIndex = 29;
            this->label6->Text = L"Bienvenid@";
            this->label6->Click += gcnew System::EventHandler(this, &PersonalForm::label6_Click);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label7->Location = System::Drawing::Point(101, 346);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(129, 20);
            this->label7->TabIndex = 31;
            this->label7->Text = L"Tipo de usuario:";
            this->label7->Click += gcnew System::EventHandler(this, &PersonalForm::label7_Click);
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->label8->Location = System::Drawing::Point(133, 383);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(67, 20);
            this->label8->TabIndex = 32;
            this->label8->Text = L"Usuario";
            // 
            // tabPage2
            // 
            this->tabPage2->Controls->Add(this->label2);
            this->tabPage2->Controls->Add(this->comboBoxPisos);
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(790, 485);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Registrar Habitaciones Limpias";
            this->tabPage2->UseVisualStyleBackColor = true;
            this->tabPage2->Click += gcnew System::EventHandler(this, &PersonalForm::tabPage2_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(617, 210);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(104, 16);
            this->label2->TabIndex = 29;
            this->label2->Text = L"Selecionar piso:";
            this->label2->Click += gcnew System::EventHandler(this, &PersonalForm::label2_Click);
            // 
            // comboBoxPisos
            // 
            this->comboBoxPisos->FormattingEnabled = true;
            this->comboBoxPisos->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Piso 1", L"Piso 2", L"Piso 3", L"Piso 4",
                    L"Piso 5"
            });
            this->comboBoxPisos->Location = System::Drawing::Point(620, 233);
            this->comboBoxPisos->Name = L"comboBoxPisos";
            this->comboBoxPisos->Size = System::Drawing::Size(121, 24);
            this->comboBoxPisos->TabIndex = 28;
            this->comboBoxPisos->SelectedIndexChanged += gcnew System::EventHandler(this, &PersonalForm::comboBoxPisos_SelectedIndexChanged);
            // 
            // tabPage1
            // 
            this->tabPage1->Controls->Add(this->textBox3);
            this->tabPage1->Controls->Add(this->Fecha);
            this->tabPage1->Controls->Add(this->textBox2);
            this->tabPage1->Controls->Add(this->textBox1);
            this->tabPage1->Controls->Add(this->button2);
            this->tabPage1->Controls->Add(this->dataGridView1);
            this->tabPage1->Controls->Add(this->HoraSalida);
            this->tabPage1->Controls->Add(this->HoraIngreso);
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(790, 485);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Registrar Horario";
            this->tabPage1->UseVisualStyleBackColor = true;
            this->tabPage1->Click += gcnew System::EventHandler(this, &PersonalForm::tabPage1_Click);
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(309, 199);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(144, 24);
            this->button2->TabIndex = 38;
            this->button2->Text = L"Agregar";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &PersonalForm::button2_Click);
            // 
            // dataGridView1
            // 
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->cFecha,
                    this->HIngreso, this->HSalida
            });
            this->dataGridView1->Location = System::Drawing::Point(78, 247);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(638, 189);
            this->dataGridView1->TabIndex = 37;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonalForm::dataGridView1_CellContentClick);
            this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PersonalForm::dataGridView1_CellClick);
            // 
            // HoraSalida
            // 
            this->HoraSalida->AutoSize = true;
            this->HoraSalida->Location = System::Drawing::Point(74, 150);
            this->HoraSalida->Name = L"HoraSalida";
            this->HoraSalida->Size = System::Drawing::Size(99, 16);
            this->HoraSalida->TabIndex = 35;
            this->HoraSalida->Text = L"Hora de salida:";
            this->HoraSalida->Click += gcnew System::EventHandler(this, &PersonalForm::label4_Click);
            // 
            // HoraIngreso
            // 
            this->HoraIngreso->AutoSize = true;
            this->HoraIngreso->Location = System::Drawing::Point(73, 110);
            this->HoraIngreso->Name = L"HoraIngreso";
            this->HoraIngreso->Size = System::Drawing::Size(107, 16);
            this->HoraIngreso->TabIndex = 34;
            this->HoraIngreso->Text = L"Hora de ingreso:";
            this->HoraIngreso->Click += gcnew System::EventHandler(this, &PersonalForm::label3_Click);
            // 
            // BarraOpciones
            // 
            this->BarraOpciones->Controls->Add(this->tabPage1);
            this->BarraOpciones->Controls->Add(this->tabPage2);
            this->BarraOpciones->Location = System::Drawing::Point(345, -1);
            this->BarraOpciones->Name = L"BarraOpciones";
            this->BarraOpciones->SelectedIndex = 0;
            this->BarraOpciones->Size = System::Drawing::Size(798, 514);
            this->BarraOpciones->TabIndex = 27;
            this->BarraOpciones->SelectedIndexChanged += gcnew System::EventHandler(this, &PersonalForm::BarraOpciones_SelectedIndexChanged);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(186, 107);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(313, 22);
            this->textBox1->TabIndex = 39;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(186, 144);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(313, 22);
            this->textBox2->TabIndex = 40;
            // 
            // Fecha
            // 
            this->Fecha->AutoSize = true;
            this->Fecha->Location = System::Drawing::Point(73, 75);
            this->Fecha->Name = L"Fecha";
            this->Fecha->Size = System::Drawing::Size(48, 16);
            this->Fecha->TabIndex = 41;
            this->Fecha->Text = L"Fecha:";
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(127, 69);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(313, 22);
            this->textBox3->TabIndex = 42;
            // 
            // cFecha
            // 
            this->cFecha->HeaderText = L"Fecha";
            this->cFecha->MinimumWidth = 6;
            this->cFecha->Name = L"cFecha";
            this->cFecha->Width = 125;
            // 
            // HIngreso
            // 
            this->HIngreso->HeaderText = L"HoraIngreso";
            this->HIngreso->MinimumWidth = 6;
            this->HIngreso->Name = L"HIngreso";
            this->HIngreso->Width = 250;
            // 
            // HSalida
            // 
            this->HSalida->HeaderText = L"HoraSalida";
            this->HSalida->MinimumWidth = 6;
            this->HSalida->Name = L"HSalida";
            this->HSalida->Width = 250;
            // 
            // PersonalForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1150, 571);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->BarraOpciones);
            this->Name = L"PersonalForm";
            this->Text = L"PersonalForm";
            this->Load += gcnew System::EventHandler(this, &PersonalForm::PersonalForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->tabPage2->ResumeLayout(false);
            this->tabPage2->PerformLayout();
            this->tabPage1->ResumeLayout(false);
            this->tabPage1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->BarraOpciones->ResumeLayout(false);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        CheckedListBox^ currentCheckedListBox; // Variable para almacenar el CheckedListBox actual
        int currentY = 35; // Posición inicial en Y para el CheckedListBox
        List<Departamento^>^ departList = Service::ConsultaDepa();

        void UpdateCheckedListBox(array<String^>^ habitaciones)
        {
            // Si hay un CheckedListBox actual, removerlo
            if (currentCheckedListBox != nullptr)
            {
                this->tabPage2->Controls->Remove(currentCheckedListBox);
            }

            // Crear un nuevo CheckedListBox
            currentCheckedListBox = gcnew CheckedListBox();
            currentCheckedListBox->Size = System::Drawing::Size(this->Width / 2, 320); // Tamaño personalizado
            currentCheckedListBox->Location = System::Drawing::Point(10, currentY); // Posición personalizada

            // Añadir las habitaciones al CheckedListBox
            for (int i = 0; i < habitaciones->Length; i++)
            {
                currentCheckedListBox->Items->Add(habitaciones[i]);
            }

            // Añadir el evento ItemCheck
            currentCheckedListBox->ItemCheck += gcnew ItemCheckEventHandler(this, &PersonalForm::currentCheckedListBox_ItemCheck);

            // Añadir el CheckedListBox a la pestaña
            this->tabPage2->Controls->Add(currentCheckedListBox);
        }

        void currentCheckedListBox_ItemCheck(Object^ sender, ItemCheckEventArgs^ e)
        {
            // Obtener el ítem que se va a cambiar
            String^ selectedItem = currentCheckedListBox->Items[e->Index]->ToString();

            // Mostrar el cuadro de diálogo de confirmación
            System::Windows::Forms::DialogResult result = MessageBox::Show(
                "¿Está seguro de su selección: " + selectedItem + "?",
                "Confirmación",
                MessageBoxButtons::YesNo,
                MessageBoxIcon::Question);

            // Si el usuario selecciona "No", cancelar el cambio
            if (result == System::Windows::Forms::DialogResult::No)
            {
                e->NewValue = e->CurrentValue; // Cancelar el cambio
            }
            else
            {
                int index = e->Index;

                // Mostrar mensaje de confirmación
                MessageBox::Show("La " + selectedItem + " ha sido marcada como limpia y registrada.", "Registro Exitoso", MessageBoxButtons::OK, MessageBoxIcon::Information);
            }
        }

        array<String^>^ GetHabitacionesPorPiso(int piso)
        {
            List<String^>^ habitaciones = gcnew List<String^>();

            // Recorrer la lista de departamentos y extraer las habitaciones del piso especificado
            for (int i = 0; i < departList->Count; i++)
            {
                Departamento^ depa = departList[i];
                if (depa->Piso == piso)
                {
                    habitaciones->Add("Habitación " + depa->NumDep.ToString());
                }
            }

            return habitaciones->ToArray();
        }

    private: System::Void PersonalForm_Load(System::Object^ sender, System::EventArgs^ e) {
        // Configurar la primera pestaña por defecto
        BarraOpciones->SelectedIndex = 0;
        //pictureBox1->Image = Image::FromFile("C:\\ProyectoLPOO\\Logo.png");
        pictureBox1->Size = System::Drawing::Size(252, 149); // Tamaño deseado
        pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;  // Estirar la imagen para que se ajuste al tamaño del PictureBox
        // LABEL PARA NOMBRE Y APELLIDO
        Label^ labelNombreCompleto = gcnew Label();
        labelNombreCompleto->Text = "Nuevo Label";
        labelNombreCompleto->Location = System::Drawing::Point(85, 210);
        labelNombreCompleto->Size = System::Drawing::Size(145, 20);
        labelNombreCompleto->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular);
        // Agregar el Label al formulario
        this->Controls->Add(labelNombreCompleto);
    }

           void comboBoxPisos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
               int pisoSeleccionado = comboBoxPisos->SelectedIndex + 1; // Obtener el piso seleccionado
               UpdateCheckedListBox(GetHabitacionesPorPiso(pisoSeleccionado));
           }

    private: System::Void BarraOpciones_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        // Verificar si la pestaña seleccionada es la segunda pestaña (TabPage2)
        if (BarraOpciones->SelectedTab == tabPage2) {
            // Mostrar los controles para seleccionar el piso y las habitaciones limpias
            comboBoxPisos->Visible = true;
            label2->Visible = true;

            dataGridView1->Visible = false;
            Fecha->Visible = false;
            HoraIngreso->Visible = false;
            HoraSalida->Visible = false;
            textBox1->Visible = false;
            textBox2->Visible = false;
            textBox3->Visible = false;


            // Llenar el ComboBox de pisos
            comboBoxPisos->Items->Clear();
            comboBoxPisos->Items->AddRange(gcnew array<System::String^>{ "Piso 1", "Piso 2", "Piso 3", "Piso 4", "Piso 5" });

            // Por defecto, seleccionar el primer piso
            comboBoxPisos->SelectedIndex = 0;

            // Mostrar las habitaciones limpias del primer piso por defecto
            int pisoSeleccionado = comboBoxPisos->SelectedIndex + 1; // Obtener el piso seleccionado
            UpdateCheckedListBox(GetHabitacionesPorPiso(pisoSeleccionado));
        }
        else {
            // Ocultar los controles cuando no se selecciona tabPage2
            comboBoxPisos->Visible = false;
            label2->Visible = false;

            dataGridView1->Visible = true;
            Fecha->Visible = true;
            HoraIngreso->Visible = true;
            HoraSalida->Visible = true;
            textBox1->Visible = true;
            textBox2->Visible = true;
            textBox3->Visible = true;
        }
    }

    private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void IdDepa_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
    }

           static int ConvertirFecha(String^ fecha) {
               // Extrae día, mes y año de la cadena
               String^ dia = fecha->Substring(0, 2);
               String^ mes = fecha->Substring(3, 2);
               String^ año = fecha->Substring(6, 4);

               // Concatena día, mes y año
               String^ fechaConcatenada = dia + mes + año;

               // Convierte la cadena concatenada a un entero
               int fechaEntera = Convert::ToInt32(fechaConcatenada);

               return fechaEntera;
           }

           static String^ SepararFecha(int fecha) {
               // Convertir el entero a una cadena con formato "DDMMYYYY"
               String^ fechaStr = fecha.ToString("D8");

               // Extraer día, mes y año de la cadena
               String^ dia = fechaStr->Substring(0, 2);
               String^ mes = fechaStr->Substring(2, 2);
               String^ año = fechaStr->Substring(4, 4);

               // Formatear la fecha en "DD/MM/YYYY"
               return dia + "/" + mes + "/" + año;
           }

    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

        String^ horaEntrada = textBox1->Text;
        String^ horaSalida = textBox2->Text;
        int fecha = ConvertirFecha(textBox3->Text);

        Personal^ horario = gcnew Personal();
        horario->HoraEntrada = horaEntrada;
        horario->HoraSalida = horaSalida;
        horario->Fecha = fecha;

        Service::AddHorario(horario);
        showHorario();
    }
           void showHorario() {
               List<Personal^>^ horarioList = Service::ConsultaHorario();
               dataGridView1->Rows->Clear();
               for (int i = 0; i < horarioList->Count; i++) {
                   //String^ fechaSeparada = SepararFecha(horarioList[i]->Fecha); // Extract Fecha property
                   dataGridView1->Rows->Add(gcnew array<String^>{
                       "" + horarioList[i]->Fecha,
                           "" + horarioList[i]->HoraEntrada,
                           "" + horarioList[i]->HoraSalida,
                   });
               }
           }

    private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

        int horarioFecha = Int32::Parse(dataGridView1->Rows[dataGridView1->SelectedCells[0]->RowIndex]->Cells[0]->Value->ToString());

        Personal^ date = Service::ConsultaHorarioPorFecha(horarioFecha);

        if (date != nullptr) {
            textBox3->Text = Convert::ToString(date->Fecha);
            textBox1->Text = "" + date->HoraEntrada;
            textBox2->Text = "" + date->HoraSalida;
        }


    }
    };
}


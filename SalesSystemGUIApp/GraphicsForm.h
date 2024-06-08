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
	/// Resumen de GraphicsForm
	/// </summary>
	public ref class GraphicsForm : public System::Windows::Forms::Form
	{
		array<PointF>^ arrPoints = gcnew array<PointF>(360);
		const int R = 100;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ alarmchart;

		   int counter = 2;
	public:
		GraphicsForm(void)
		{
			InitializeComponent();
			for (int i = 0; i < 360; i++) {
				arrPoints[i] = PointF(pictureBox1->Width / 2 - 360 + i,
					pictureBox1->Height / 2 + R * Math::Sin(3 * Math::PI / 180 * (i - 3 * R)));
			}
			timer1->Start();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~GraphicsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->alarmchart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alarmchart))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(10, 7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(762, 452);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GraphicsForm::pictureBox1_Paint);
			// 
			// timer1
			// 
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &GraphicsForm::timer1_Tick);
			// 
			// alarmchart
			// 
			chartArea1->Name = L"ChartArea1";
			this->alarmchart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->alarmchart->Legends->Add(legend1);
			this->alarmchart->Location = System::Drawing::Point(115, 28);
			this->alarmchart->Name = L"alarmchart";
			this->alarmchart->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Registros";
			this->alarmchart->Series->Add(series1);
			this->alarmchart->Size = System::Drawing::Size(605, 430);
			this->alarmchart->TabIndex = 1;
			this->alarmchart->Text = L"chart1";
			this->alarmchart->Click += gcnew System::EventHandler(this, &GraphicsForm::chart1_Click);
			// 
			// GraphicsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(797, 470);
			this->Controls->Add(this->alarmchart);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"GraphicsForm";
			this->Text = L"GraphicsForm";
			this->Load += gcnew System::EventHandler(this, &GraphicsForm::GraphicsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alarmchart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		Pen^ pen = gcnew Pen(Color::Blue);
		g->DrawLine(pen, 0, pictureBox1->Height / 2, pictureBox1->Width, pictureBox1->Height / 2);
		g->DrawLine(pen, pictureBox1->Width / 2, 0, pictureBox1->Width / 2, pictureBox1->Height);
		g->DrawString("X", gcnew System::Drawing::Font("Arial", 10),
			System::Drawing::Brushes::Black, 0.0, pictureBox1->Bottom / 2);
		g->DrawString("Y", gcnew System::Drawing::Font("Arial", 10),
			System::Drawing::Brushes::Black, pictureBox1->Right / 2, pictureBox1->Top);
		g->DrawCurve(pen, arrPoints, 0, counter - 1);
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (counter < 360) {
			counter++;
			pictureBox1->Invalidate();
		}
		else {
			timer1->Stop();
			timer1->Enabled = false;
		}
	}
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void GraphicsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	List<Alarma^>^ alarmlist = Service::QuearyAllAlarma();
	for (int i = 0; i < alarmlist->Count; i++) {
		alarmchart->Series["Registros"]->Points->Add(alarmlist[i]->Cantidad);
		alarmchart->Series["Registros"]->Points[i]->AxisLabel = ""+alarmlist[i]->Id;
		alarmchart->Series["Registros"]->Points[i]->Label = "" + alarmlist[i]->Cantidad;
	}
}
};
}

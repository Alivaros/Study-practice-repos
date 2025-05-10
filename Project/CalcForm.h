#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// Сводка для CalcForm
	/// </summary>
	public ref class CalcForm : public System::Windows::Forms::Form
	{
	public:
		CalcForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dGVCalcData;
	protected:

	protected:








	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ buttonCalc;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBoxN;

	private: System::Windows::Forms::Label^ label1;







	private: System::Windows::Forms::TextBox^ textBoxAbsoluteErrorDeltaT;

	private: System::Windows::Forms::TextBox^ textBoxDeltaTinSquare;

	private: System::Windows::Forms::TextBox^ textBoxRelativeError;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonHowCalc;
	private: System::Windows::Forms::Button^ buttonGraphic;
	private: System::Windows::Forms::TabPage^ tabPageGraphic;
	private: System::Windows::Forms::TabPage^ tabPageCalc;
	private: System::Windows::Forms::TabControl^ tCCalcPredictionData;
	private: System::Windows::Forms::Label^ labelForecast;
	private: System::Windows::Forms::TextBox^ textBoxAvgRelativeError;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabPage^ tabPageHowCalc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Mounth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PeriodNumberT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumberOfVisitors;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MovingAverageM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AbsoluteErrorDeltaT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DeltaTinSquare;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RelativeError;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartForecast;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;













	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CalcForm::typeid));
			this->dGVCalcData = (gcnew System::Windows::Forms::DataGridView());
			this->Mounth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PeriodNumberT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumberOfVisitors = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MovingAverageM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AbsoluteErrorDeltaT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DeltaTinSquare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RelativeError = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonHowCalc = (gcnew System::Windows::Forms::Button());
			this->buttonGraphic = (gcnew System::Windows::Forms::Button());
			this->buttonCalc = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxAbsoluteErrorDeltaT = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDeltaTinSquare = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRelativeError = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPageGraphic = (gcnew System::Windows::Forms::TabPage());
			this->chartForecast = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPageCalc = (gcnew System::Windows::Forms::TabPage());
			this->textBoxAvgRelativeError = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelForecast = (gcnew System::Windows::Forms::Label());
			this->tCCalcPredictionData = (gcnew System::Windows::Forms::TabControl());
			this->tabPageHowCalc = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVCalcData))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->tabPageGraphic->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartForecast))->BeginInit();
			this->tabPageCalc->SuspendLayout();
			this->tCCalcPredictionData->SuspendLayout();
			this->tabPageHowCalc->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// dGVCalcData
			// 
			this->dGVCalcData->AllowUserToAddRows = false;
			this->dGVCalcData->AllowUserToDeleteRows = false;
			this->dGVCalcData->AllowUserToResizeColumns = false;
			this->dGVCalcData->AllowUserToResizeRows = false;
			this->dGVCalcData->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dGVCalcData->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dGVCalcData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dGVCalcData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGVCalcData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Mounth, this->PeriodNumberT,
					this->NumberOfVisitors, this->MovingAverageM, this->AbsoluteErrorDeltaT, this->DeltaTinSquare, this->RelativeError
			});
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dGVCalcData->DefaultCellStyle = dataGridViewCellStyle4;
			this->dGVCalcData->Dock = System::Windows::Forms::DockStyle::Top;
			this->dGVCalcData->Location = System::Drawing::Point(3, 3);
			this->dGVCalcData->MultiSelect = false;
			this->dGVCalcData->Name = L"dGVCalcData";
			this->dGVCalcData->ReadOnly = true;
			this->dGVCalcData->RowHeadersVisible = false;
			this->dGVCalcData->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dGVCalcData->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->dGVCalcData->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dGVCalcData->ShowCellErrors = false;
			this->dGVCalcData->ShowCellToolTips = false;
			this->dGVCalcData->ShowEditingIcon = false;
			this->dGVCalcData->ShowRowErrors = false;
			this->dGVCalcData->Size = System::Drawing::Size(770, 378);
			this->dGVCalcData->TabIndex = 0;
			// 
			// Mounth
			// 
			this->Mounth->HeaderText = L"Месяц";
			this->Mounth->Name = L"Mounth";
			this->Mounth->ReadOnly = true;
			this->Mounth->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Mounth->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// PeriodNumberT
			// 
			this->PeriodNumberT->HeaderText = L"Номер периода T";
			this->PeriodNumberT->Name = L"PeriodNumberT";
			this->PeriodNumberT->ReadOnly = true;
			this->PeriodNumberT->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->PeriodNumberT->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// NumberOfVisitors
			// 
			this->NumberOfVisitors->HeaderText = L"Количество посетителей y";
			this->NumberOfVisitors->Name = L"NumberOfVisitors";
			this->NumberOfVisitors->ReadOnly = true;
			this->NumberOfVisitors->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->NumberOfVisitors->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// MovingAverageM
			// 
			this->MovingAverageM->HeaderText = L"Скользящая средняя m";
			this->MovingAverageM->Name = L"MovingAverageM";
			this->MovingAverageM->ReadOnly = true;
			this->MovingAverageM->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->MovingAverageM->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// AbsoluteErrorDeltaT
			// 
			this->AbsoluteErrorDeltaT->HeaderText = L"Абсолютная ошибка dt";
			this->AbsoluteErrorDeltaT->Name = L"AbsoluteErrorDeltaT";
			this->AbsoluteErrorDeltaT->ReadOnly = true;
			this->AbsoluteErrorDeltaT->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->AbsoluteErrorDeltaT->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// DeltaTinSquare
			// 
			this->DeltaTinSquare->HeaderText = L"dt^2";
			this->DeltaTinSquare->Name = L"DeltaTinSquare";
			this->DeltaTinSquare->ReadOnly = true;
			this->DeltaTinSquare->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->DeltaTinSquare->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// RelativeError
			// 
			this->RelativeError->HeaderText = L"Относительная ошибка  e";
			this->RelativeError->Name = L"RelativeError";
			this->RelativeError->ReadOnly = true;
			this->RelativeError->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->RelativeError->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox4->Controls->Add(this->buttonHowCalc);
			this->groupBox4->Controls->Add(this->buttonGraphic);
			this->groupBox4->Controls->Add(this->buttonCalc);
			this->groupBox4->Controls->Add(this->buttonExit);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(7, 463);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(773, 86);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Панель управления";
			// 
			// buttonHowCalc
			// 
			this->buttonHowCalc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonHowCalc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonHowCalc->Location = System::Drawing::Point(425, 23);
			this->buttonHowCalc->Name = L"buttonHowCalc";
			this->buttonHowCalc->Size = System::Drawing::Size(200, 55);
			this->buttonHowCalc->TabIndex = 4;
			this->buttonHowCalc->Text = L"Метод скользящей средней";
			this->buttonHowCalc->UseVisualStyleBackColor = true;
			this->buttonHowCalc->Click += gcnew System::EventHandler(this, &CalcForm::buttonHowCalc_Click);
			// 
			// buttonGraphic
			// 
			this->buttonGraphic->Enabled = false;
			this->buttonGraphic->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonGraphic->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGraphic->Location = System::Drawing::Point(197, 23);
			this->buttonGraphic->Name = L"buttonGraphic";
			this->buttonGraphic->Size = System::Drawing::Size(222, 55);
			this->buttonGraphic->TabIndex = 3;
			this->buttonGraphic->Text = L"График фактических и \r\nпрогнозных значений\r\n";
			this->buttonGraphic->UseVisualStyleBackColor = true;
			this->buttonGraphic->Click += gcnew System::EventHandler(this, &CalcForm::buttonGraphic_Click);
			// 
			// buttonCalc
			// 
			this->buttonCalc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonCalc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCalc->Location = System::Drawing::Point(7, 23);
			this->buttonCalc->Name = L"buttonCalc";
			this->buttonCalc->Size = System::Drawing::Size(184, 55);
			this->buttonCalc->TabIndex = 2;
			this->buttonCalc->Text = L"Расчет прогнозных данных";
			this->buttonCalc->UseVisualStyleBackColor = true;
			this->buttonCalc->Click += gcnew System::EventHandler(this, &CalcForm::buttonCalc_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(657, 23);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(108, 55);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Назад";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &CalcForm::buttonExit_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(279, 387);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(78, 26);
			this->textBox2->TabIndex = 12;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L" n =";
			// 
			// textBoxN
			// 
			this->textBoxN->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxN->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxN->Location = System::Drawing::Point(318, 390);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->ReadOnly = true;
			this->textBoxN->Size = System::Drawing::Size(29, 19);
			this->textBoxN->TabIndex = 13;
			this->textBoxN->TabStop = false;
			this->textBoxN->Text = L"3";
			this->textBoxN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 389);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 20);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Величина интервала сглаживания:";
			// 
			// textBoxAbsoluteErrorDeltaT
			// 
			this->textBoxAbsoluteErrorDeltaT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAbsoluteErrorDeltaT->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxAbsoluteErrorDeltaT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAbsoluteErrorDeltaT->Location = System::Drawing::Point(442, 385);
			this->textBoxAbsoluteErrorDeltaT->Name = L"textBoxAbsoluteErrorDeltaT";
			this->textBoxAbsoluteErrorDeltaT->ReadOnly = true;
			this->textBoxAbsoluteErrorDeltaT->Size = System::Drawing::Size(111, 29);
			this->textBoxAbsoluteErrorDeltaT->TabIndex = 15;
			this->textBoxAbsoluteErrorDeltaT->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxDeltaTinSquare
			// 
			this->textBoxDeltaTinSquare->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDeltaTinSquare->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxDeltaTinSquare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxDeltaTinSquare->Location = System::Drawing::Point(552, 385);
			this->textBoxDeltaTinSquare->Name = L"textBoxDeltaTinSquare";
			this->textBoxDeltaTinSquare->ReadOnly = true;
			this->textBoxDeltaTinSquare->Size = System::Drawing::Size(111, 29);
			this->textBoxDeltaTinSquare->TabIndex = 16;
			this->textBoxDeltaTinSquare->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBoxRelativeError
			// 
			this->textBoxRelativeError->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxRelativeError->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxRelativeError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxRelativeError->Location = System::Drawing::Point(662, 385);
			this->textBoxRelativeError->Name = L"textBoxRelativeError";
			this->textBoxRelativeError->ReadOnly = true;
			this->textBoxRelativeError->Size = System::Drawing::Size(111, 29);
			this->textBoxRelativeError->TabIndex = 17;
			this->textBoxRelativeError->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(387, 389);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 20);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Итого:";
			// 
			// tabPageGraphic
			// 
			this->tabPageGraphic->Controls->Add(this->chartForecast);
			this->tabPageGraphic->Location = System::Drawing::Point(4, 5);
			this->tabPageGraphic->Name = L"tabPageGraphic";
			this->tabPageGraphic->Padding = System::Windows::Forms::Padding(3);
			this->tabPageGraphic->Size = System::Drawing::Size(776, 452);
			this->tabPageGraphic->TabIndex = 1;
			this->tabPageGraphic->Text = L"График фактических и прогнозных значений";
			this->tabPageGraphic->UseVisualStyleBackColor = true;
			// 
			// chartForecast
			// 
			chartArea2->AxisX->Maximum = 12;
			chartArea2->AxisX->Minimum = 1;
			chartArea2->AxisY->Maximum = 300;
			chartArea2->Name = L"ChartArea1";
			this->chartForecast->ChartAreas->Add(chartArea2);
			this->chartForecast->Dock = System::Windows::Forms::DockStyle::Fill;
			this->chartForecast->Location = System::Drawing::Point(3, 3);
			this->chartForecast->Name = L"chartForecast";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->Color = System::Drawing::Color::Blue;
			series4->Name = L"Факт_знач_лин";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series5->Color = System::Drawing::Color::Blue;
			series5->Name = L"Факт_знач_точк";
			series6->BorderWidth = 6;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Color = System::Drawing::Color::Blue;
			series6->Name = L"Прогноз_знач";
			this->chartForecast->Series->Add(series4);
			this->chartForecast->Series->Add(series5);
			this->chartForecast->Series->Add(series6);
			this->chartForecast->Size = System::Drawing::Size(770, 446);
			this->chartForecast->TabIndex = 0;
			this->chartForecast->Text = L"chart1";
			// 
			// tabPageCalc
			// 
			this->tabPageCalc->Controls->Add(this->textBoxAvgRelativeError);
			this->tabPageCalc->Controls->Add(this->textBox3);
			this->tabPageCalc->Controls->Add(this->label3);
			this->tabPageCalc->Controls->Add(this->labelForecast);
			this->tabPageCalc->Controls->Add(this->textBoxRelativeError);
			this->tabPageCalc->Controls->Add(this->textBoxDeltaTinSquare);
			this->tabPageCalc->Controls->Add(this->textBoxAbsoluteErrorDeltaT);
			this->tabPageCalc->Controls->Add(this->textBoxN);
			this->tabPageCalc->Controls->Add(this->textBox2);
			this->tabPageCalc->Controls->Add(this->dGVCalcData);
			this->tabPageCalc->Controls->Add(this->label1);
			this->tabPageCalc->Controls->Add(this->label2);
			this->tabPageCalc->Location = System::Drawing::Point(4, 5);
			this->tabPageCalc->Name = L"tabPageCalc";
			this->tabPageCalc->Padding = System::Windows::Forms::Padding(3);
			this->tabPageCalc->Size = System::Drawing::Size(776, 452);
			this->tabPageCalc->TabIndex = 0;
			this->tabPageCalc->Text = L"Расчетные данные";
			this->tabPageCalc->UseVisualStyleBackColor = true;
			// 
			// textBoxAvgRelativeError
			// 
			this->textBoxAvgRelativeError->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxAvgRelativeError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBoxAvgRelativeError->Location = System::Drawing::Point(342, 420);
			this->textBoxAvgRelativeError->Name = L"textBoxAvgRelativeError";
			this->textBoxAvgRelativeError->ReadOnly = true;
			this->textBoxAvgRelativeError->Size = System::Drawing::Size(43, 19);
			this->textBoxAvgRelativeError->TabIndex = 22;
			this->textBoxAvgRelativeError->TabStop = false;
			this->textBoxAvgRelativeError->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Symbol", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->textBox3->Location = System::Drawing::Point(309, 416);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(78, 27);
			this->textBox3->TabIndex = 21;
			this->textBox3->TabStop = false;
			this->textBox3->Text = L" e =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(3, 418);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(307, 20);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Средняя относительная ошибка равна";
			// 
			// labelForecast
			// 
			this->labelForecast->AutoSize = true;
			this->labelForecast->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelForecast->Location = System::Drawing::Point(388, 420);
			this->labelForecast->Name = L"labelForecast";
			this->labelForecast->Size = System::Drawing::Size(277, 20);
			this->labelForecast->TabIndex = 19;
			this->labelForecast->Text = L"< 10 => точность прогноза высокая\r\n";
			this->labelForecast->Visible = false;
			// 
			// tCCalcPredictionData
			// 
			this->tCCalcPredictionData->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tCCalcPredictionData->Controls->Add(this->tabPageCalc);
			this->tCCalcPredictionData->Controls->Add(this->tabPageGraphic);
			this->tCCalcPredictionData->Controls->Add(this->tabPageHowCalc);
			this->tCCalcPredictionData->ItemSize = System::Drawing::Size(0, 1);
			this->tCCalcPredictionData->Location = System::Drawing::Point(0, 0);
			this->tCCalcPredictionData->Name = L"tCCalcPredictionData";
			this->tCCalcPredictionData->SelectedIndex = 0;
			this->tCCalcPredictionData->Size = System::Drawing::Size(784, 461);
			this->tCCalcPredictionData->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tCCalcPredictionData->TabIndex = 19;
			this->tCCalcPredictionData->TabStop = false;
			// 
			// tabPageHowCalc
			// 
			this->tabPageHowCalc->BackColor = System::Drawing::Color::White;
			this->tabPageHowCalc->Controls->Add(this->pictureBox1);
			this->tabPageHowCalc->Controls->Add(this->pictureBox4);
			this->tabPageHowCalc->Controls->Add(this->pictureBox6);
			this->tabPageHowCalc->Controls->Add(this->pictureBox8);
			this->tabPageHowCalc->Controls->Add(this->pictureBox7);
			this->tabPageHowCalc->Controls->Add(this->pictureBox5);
			this->tabPageHowCalc->Controls->Add(this->pictureBox3);
			this->tabPageHowCalc->Controls->Add(this->pictureBox2);
			this->tabPageHowCalc->Location = System::Drawing::Point(4, 5);
			this->tabPageHowCalc->Name = L"tabPageHowCalc";
			this->tabPageHowCalc->Size = System::Drawing::Size(776, 452);
			this->tabPageHowCalc->TabIndex = 2;
			this->tabPageHowCalc->Text = L"Метод скользящей средней";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(346, 326);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(422, 123);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(10, 7);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(416, 239);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(408, 216);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(184, 104);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(598, 216);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(170, 104);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &CalcForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(218, 216);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(184, 104);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &CalcForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(8, 326);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(332, 123);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(432, 7);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(336, 203);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(786, 193);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(288, 189);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->tCCalcPredictionData);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CalcForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Расчет прогнозных данных";
			this->Load += gcnew System::EventHandler(this, &CalcForm::CalcForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVCalcData))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->tabPageGraphic->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartForecast))->EndInit();
			this->tabPageCalc->ResumeLayout(false);
			this->tabPageCalc->PerformLayout();
			this->tCCalcPredictionData->ResumeLayout(false);
			this->tabPageHowCalc->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CalcForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonCalc_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonGraphic_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonHowCalc_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

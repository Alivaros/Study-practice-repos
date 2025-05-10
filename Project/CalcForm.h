#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Mounth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PeriodNumberT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumberOfVisitors;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ MovingAverageM;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AbsoluteErrorDeltaT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DeltaTinSquare;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RelativeError;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ buttonCalc;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBoxN;

	private: System::Windows::Forms::Label^ label1;





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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dGVCalcData = (gcnew System::Windows::Forms::DataGridView());
			this->Mounth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PeriodNumberT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumberOfVisitors = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MovingAverageM = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AbsoluteErrorDeltaT = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DeltaTinSquare = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RelativeError = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonCalc = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVCalcData))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// dGVCalcData
			// 
			this->dGVCalcData->AllowUserToAddRows = false;
			this->dGVCalcData->AllowUserToDeleteRows = false;
			this->dGVCalcData->AllowUserToOrderColumns = true;
			this->dGVCalcData->AllowUserToResizeColumns = false;
			this->dGVCalcData->AllowUserToResizeRows = false;
			this->dGVCalcData->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dGVCalcData->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dGVCalcData->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dGVCalcData->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGVCalcData->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Mounth, this->PeriodNumberT,
					this->NumberOfVisitors, this->MovingAverageM, this->AbsoluteErrorDeltaT, this->DeltaTinSquare, this->RelativeError
			});
			this->dGVCalcData->Location = System::Drawing::Point(12, 12);
			this->dGVCalcData->MultiSelect = false;
			this->dGVCalcData->Name = L"dGVCalcData";
			this->dGVCalcData->ReadOnly = true;
			this->dGVCalcData->RowHeadersVisible = false;
			this->dGVCalcData->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dGVCalcData->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dGVCalcData->ShowCellErrors = false;
			this->dGVCalcData->ShowCellToolTips = false;
			this->dGVCalcData->ShowEditingIcon = false;
			this->dGVCalcData->Size = System::Drawing::Size(631, 253);
			this->dGVCalcData->TabIndex = 0;
			// 
			// Mounth
			// 
			this->Mounth->HeaderText = L"Месяц";
			this->Mounth->Name = L"Mounth";
			this->Mounth->ReadOnly = true;
			// 
			// PeriodNumberT
			// 
			this->PeriodNumberT->HeaderText = L"Номер периода T";
			this->PeriodNumberT->Name = L"PeriodNumberT";
			this->PeriodNumberT->ReadOnly = true;
			// 
			// NumberOfVisitors
			// 
			this->NumberOfVisitors->HeaderText = L"Количество посетителей y";
			this->NumberOfVisitors->Name = L"NumberOfVisitors";
			this->NumberOfVisitors->ReadOnly = true;
			// 
			// MovingAverageM
			// 
			this->MovingAverageM->HeaderText = L"Скользящая средняя m";
			this->MovingAverageM->Name = L"MovingAverageM";
			this->MovingAverageM->ReadOnly = true;
			// 
			// AbsoluteErrorDeltaT
			// 
			this->AbsoluteErrorDeltaT->HeaderText = L"Абсолютная ошибка dt";
			this->AbsoluteErrorDeltaT->Name = L"AbsoluteErrorDeltaT";
			this->AbsoluteErrorDeltaT->ReadOnly = true;
			// 
			// DeltaTinSquare
			// 
			this->DeltaTinSquare->HeaderText = L"dt^2";
			this->DeltaTinSquare->Name = L"DeltaTinSquare";
			this->DeltaTinSquare->ReadOnly = true;
			// 
			// RelativeError
			// 
			this->RelativeError->HeaderText = L"Относительная ошибка  e";
			this->RelativeError->Name = L"RelativeError";
			this->RelativeError->ReadOnly = true;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox4->Controls->Add(this->buttonCalc);
			this->groupBox4->Controls->Add(this->buttonExit);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->Location = System::Drawing::Point(522, 350);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(246, 195);
			this->groupBox4->TabIndex = 10;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Панель управления";
			// 
			// buttonCalc
			// 
			this->buttonCalc->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonCalc->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCalc->Location = System::Drawing::Point(40, 71);
			this->buttonCalc->Name = L"buttonCalc";
			this->buttonCalc->Size = System::Drawing::Size(180, 48);
			this->buttonCalc->TabIndex = 2;
			this->buttonCalc->Text = L"Расчет";
			this->buttonCalc->UseVisualStyleBackColor = true;
			this->buttonCalc->Click += gcnew System::EventHandler(this, &CalcForm::buttonCalc_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(40, 141);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(180, 48);
			this->buttonExit->TabIndex = 0;
			this->buttonExit->Text = L"Назад";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &CalcForm::buttonExit_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(307, 279);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(89, 29);
			this->textBox2->TabIndex = 12;
			this->textBox2->TabStop = false;
			this->textBox2->Text = L" n =";
			// 
			// textBoxN
			// 
			this->textBoxN->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxN->Location = System::Drawing::Point(356, 279);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->ReadOnly = true;
			this->textBoxN->Size = System::Drawing::Size(40, 29);
			this->textBoxN->TabIndex = 13;
			this->textBoxN->TabStop = false;
			this->textBoxN->Text = L"3";
			this->textBoxN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(24, 281);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 21);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Величина интервала сглаживания:";
			// 
			// CalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(772, 549);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->dGVCalcData);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CalcForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonCalc_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);


};
}

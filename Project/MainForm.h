#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label7;
	protected:
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonInfo;
	private: System::Windows::Forms::Button^ buttonExit;

	private: System::Windows::Forms::Button^ buttonApp;


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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonInfo = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonApp = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(324, 429);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 23);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Курган 2025 г.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(498, 274);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(138, 23);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Белоусов К. А.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(497, 339);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(139, 23);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Семахин А. М.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(102, 339);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(228, 23);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Проверил преподаватель";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(102, 274);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(358, 23);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Выполнил студент группы ИТ-0940323";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(289, 166);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 33);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Учебная праткика";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(102, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(604, 23);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Кафедра «Программное обеспечение автоматизированных систем»";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(126, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(510, 23);
			this->label2->TabIndex = 19;
			this->label2->Text = L"ФГБОУ ВО «Курганский государственный университет»";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(107, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(571, 23);
			this->label1->TabIndex = 18;
			this->label1->Text = L"МИНИСТЕРСТВО НАУКИ И ВЫСШЕГО ОБРАЗОВАНИЯ РФ";
			// 
			// buttonInfo
			// 
			this->buttonInfo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonInfo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonInfo->Location = System::Drawing::Point(430, 489);
			this->buttonInfo->Name = L"buttonInfo";
			this->buttonInfo->Size = System::Drawing::Size(135, 60);
			this->buttonInfo->TabIndex = 17;
			this->buttonInfo->Text = L"О программе";
			this->buttonInfo->UseVisualStyleBackColor = true;
			this->buttonInfo->Click += gcnew System::EventHandler(this, &MainForm::buttonInfo_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(571, 489);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(135, 60);
			this->buttonExit->TabIndex = 16;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MainForm::buttonExit_Click);
			// 
			// buttonApp
			// 
			this->buttonApp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonApp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonApp->Location = System::Drawing::Point(289, 489);
			this->buttonApp->Name = L"buttonApp";
			this->buttonApp->Size = System::Drawing::Size(135, 60);
			this->buttonApp->TabIndex = 15;
			this->buttonApp->Text = L"Приложение";
			this->buttonApp->UseVisualStyleBackColor = true;
			this->buttonApp->Click += gcnew System::EventHandler(this, &MainForm::buttonApp_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonInfo);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->buttonApp);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Информационное окно";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonApp_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonInfo_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
};
}

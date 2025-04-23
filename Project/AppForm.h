#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	/// <summary>
	/// Сводка для AppForm
	/// </summary>
	public ref class AppForm : public System::Windows::Forms::Form
	{
	public:
		AppForm(void)
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
		~AppForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl;
	private: System::Windows::Forms::TabPage^ tabAuthorization;
	private: System::Windows::Forms::TabPage^ tabDatabase;



	protected:


	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonLogIn;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ userInputPassword;

	private: System::Windows::Forms::TextBox^ userInputLogin;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ userChoiceType;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ buttonSignIn;


	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Actions;

	private: System::Windows::Forms::ToolStripMenuItem^ DB_Exit;

	private: System::Windows::Forms::ToolStripMenuItem^ DB_Download;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Add;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Update;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Delete;
	private: System::Windows::Forms::ToolStripMenuItem^ TAB;












	private: System::Windows::Forms::ToolStripMenuItem^ TAB_Product;
	private: System::Windows::Forms::ToolStripMenuItem^ TAB_Customers;
	private: System::Windows::Forms::ToolStripMenuItem^ TAB_Employeer;



	private: System::Windows::Forms::ToolStripMenuItem^ расчетToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EmployeerID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FirstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SurName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Position;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HireDate;
































	public:
	private:









































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
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabAuthorization = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSignIn = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonLogIn = (gcnew System::Windows::Forms::Button());
			this->userInputLogin = (gcnew System::Windows::Forms::TextBox());
			this->userChoiceType = (gcnew System::Windows::Forms::ComboBox());
			this->userInputPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabDatabase = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->EmployeerID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FirstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SurName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Position = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HireDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->DB_Actions = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Download = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Add = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Update = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Delete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TAB = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TAB_Product = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TAB_Customers = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TAB_Employeer = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->расчетToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl->SuspendLayout();
			this->tabAuthorization->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabDatabase->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl->Controls->Add(this->tabAuthorization);
			this->tabControl->Controls->Add(this->tabDatabase);
			this->tabControl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl->ItemSize = System::Drawing::Size(0, 1);
			this->tabControl->Location = System::Drawing::Point(0, 0);
			this->tabControl->Multiline = true;
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(784, 561);
			this->tabControl->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl->TabIndex = 0;
			this->tabControl->TabStop = false;
			// 
			// tabAuthorization
			// 
			this->tabAuthorization->Controls->Add(this->groupBox2);
			this->tabAuthorization->Controls->Add(this->groupBox1);
			this->tabAuthorization->Location = System::Drawing::Point(4, 5);
			this->tabAuthorization->Name = L"tabAuthorization";
			this->tabAuthorization->Padding = System::Windows::Forms::Padding(3);
			this->tabAuthorization->Size = System::Drawing::Size(772, 548);
			this->tabAuthorization->TabIndex = 0;
			this->tabAuthorization->Text = L"Аутентификация";
			this->tabAuthorization->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonSignIn);
			this->groupBox2->Controls->Add(this->buttonExit);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F));
			this->groupBox2->Location = System::Drawing::Point(501, 316);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(267, 213);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Панель управления";
			// 
			// buttonSignIn
			// 
			this->buttonSignIn->Enabled = false;
			this->buttonSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonSignIn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSignIn->Location = System::Drawing::Point(53, 55);
			this->buttonSignIn->Name = L"buttonSignIn";
			this->buttonSignIn->Size = System::Drawing::Size(180, 48);
			this->buttonSignIn->TabIndex = 3;
			this->buttonSignIn->Text = L"Войти";
			this->buttonSignIn->UseVisualStyleBackColor = true;
			this->buttonSignIn->Click += gcnew System::EventHandler(this, &AppForm::buttonSignIn_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit->Location = System::Drawing::Point(53, 141);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(180, 48);
			this->buttonExit->TabIndex = 2;
			this->buttonExit->Text = L"Назад";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &AppForm::buttonExit_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->buttonClear);
			this->groupBox1->Controls->Add(this->buttonLogIn);
			this->groupBox1->Controls->Add(this->userInputLogin);
			this->groupBox1->Controls->Add(this->userChoiceType);
			this->groupBox1->Controls->Add(this->userInputPassword);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(8, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(468, 419);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Авторизация пользователя";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(22, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(253, 23);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Выберете тип пользователя";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonClear
			// 
			this->buttonClear->Enabled = false;
			this->buttonClear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear->Location = System::Drawing::Point(236, 365);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(220, 48);
			this->buttonClear->TabIndex = 3;
			this->buttonClear->Text = L"Очистить поля ввода";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &AppForm::buttonClear_Click);
			// 
			// buttonLogIn
			// 
			this->buttonLogIn->Enabled = false;
			this->buttonLogIn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonLogIn->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonLogIn->Location = System::Drawing::Point(6, 365);
			this->buttonLogIn->Name = L"buttonLogIn";
			this->buttonLogIn->Size = System::Drawing::Size(152, 48);
			this->buttonLogIn->TabIndex = 4;
			this->buttonLogIn->Text = L"Авторизоваться";
			this->buttonLogIn->UseVisualStyleBackColor = true;
			this->buttonLogIn->Click += gcnew System::EventHandler(this, &AppForm::buttonLogIn_Click);
			// 
			// userInputLogin
			// 
			this->userInputLogin->Enabled = false;
			this->userInputLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->userInputLogin->Location = System::Drawing::Point(127, 153);
			this->userInputLogin->Name = L"userInputLogin";
			this->userInputLogin->Size = System::Drawing::Size(180, 31);
			this->userInputLogin->TabIndex = 5;
			// 
			// userChoiceType
			// 
			this->userChoiceType->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->userChoiceType->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->userChoiceType->FormattingEnabled = true;
			this->userChoiceType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Администратор", L"Пользователь" });
			this->userChoiceType->Location = System::Drawing::Point(281, 47);
			this->userChoiceType->Name = L"userChoiceType";
			this->userChoiceType->Size = System::Drawing::Size(175, 31);
			this->userChoiceType->TabIndex = 10;
			this->userChoiceType->TabStop = false;
			this->userChoiceType->SelectedIndexChanged += gcnew System::EventHandler(this, &AppForm::userChoiceType_SelectedIndexChanged);
			// 
			// userInputPassword
			// 
			this->userInputPassword->Enabled = false;
			this->userInputPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->userInputPassword->Location = System::Drawing::Point(127, 253);
			this->userInputPassword->Name = L"userInputPassword";
			this->userInputPassword->PasswordChar = '*';
			this->userInputPassword->Size = System::Drawing::Size(180, 31);
			this->userInputPassword->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(22, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Введите:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(127, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 27);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Имя пользователя";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(176, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 27);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Пароль";
			// 
			// tabDatabase
			// 
			this->tabDatabase->Controls->Add(this->dataGridView1);
			this->tabDatabase->Controls->Add(this->menuStrip1);
			this->tabDatabase->Location = System::Drawing::Point(4, 5);
			this->tabDatabase->Name = L"tabDatabase";
			this->tabDatabase->Padding = System::Windows::Forms::Padding(3);
			this->tabDatabase->Size = System::Drawing::Size(776, 552);
			this->tabDatabase->TabIndex = 1;
			this->tabDatabase->Text = L" БД";
			this->tabDatabase->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->EmployeerID,
					this->FirstName, this->LastName, this->SurName, this->Position, this->Phone, this->Email, this->HireDate
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 66);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->Size = System::Drawing::Size(770, 479);
			this->dataGridView1->TabIndex = 1;
			// 
			// EmployeerID
			// 
			this->EmployeerID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EmployeerID->Frozen = true;
			this->EmployeerID->HeaderText = L"ID";
			this->EmployeerID->Name = L"EmployeerID";
			this->EmployeerID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->EmployeerID->Width = 91;
			// 
			// FirstName
			// 
			this->FirstName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->FirstName->Frozen = true;
			this->FirstName->HeaderText = L"Имя";
			this->FirstName->Name = L"FirstName";
			this->FirstName->Width = 91;
			// 
			// LastName
			// 
			this->LastName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->LastName->Frozen = true;
			this->LastName->HeaderText = L"Фамилия";
			this->LastName->Name = L"LastName";
			this->LastName->Width = 91;
			// 
			// SurName
			// 
			this->SurName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->SurName->Frozen = true;
			this->SurName->HeaderText = L"Отчество";
			this->SurName->Name = L"SurName";
			this->SurName->Width = 91;
			// 
			// Position
			// 
			this->Position->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Position->Frozen = true;
			this->Position->HeaderText = L"Работа";
			this->Position->Name = L"Position";
			this->Position->Width = 90;
			// 
			// Phone
			// 
			this->Phone->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Phone->Frozen = true;
			this->Phone->HeaderText = L"Номер Телефона";
			this->Phone->Name = L"Phone";
			this->Phone->Width = 91;
			// 
			// Email
			// 
			this->Email->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Email->Frozen = true;
			this->Email->HeaderText = L"Электронная почта";
			this->Email->Name = L"Email";
			this->Email->Width = 91;
			// 
			// HireDate
			// 
			this->HireDate->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->HireDate->Frozen = true;
			this->HireDate->HeaderText = L"Дата найма";
			this->HireDate->Name = L"HireDate";
			this->HireDate->Width = 91;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->DB_Actions, this->TAB,
					this->расчетToolStripMenuItem, this->DB_Exit
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 3);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(770, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// DB_Actions
			// 
			this->DB_Actions->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->DB_Download,
					this->DB_Add, this->DB_Update, this->DB_Delete
			});
			this->DB_Actions->Name = L"DB_Actions";
			this->DB_Actions->Size = System::Drawing::Size(70, 20);
			this->DB_Actions->Text = L"Действия";
			// 
			// DB_Download
			// 
			this->DB_Download->Name = L"DB_Download";
			this->DB_Download->Size = System::Drawing::Size(180, 22);
			this->DB_Download->Text = L"Загрузить";
			this->DB_Download->Click += gcnew System::EventHandler(this, &AppForm::DB_Download_Click);
			// 
			// DB_Add
			// 
			this->DB_Add->Name = L"DB_Add";
			this->DB_Add->Size = System::Drawing::Size(180, 22);
			this->DB_Add->Text = L"Добавить";
			this->DB_Add->Click += gcnew System::EventHandler(this, &AppForm::DB_Add_Click);
			// 
			// DB_Update
			// 
			this->DB_Update->Name = L"DB_Update";
			this->DB_Update->Size = System::Drawing::Size(180, 22);
			this->DB_Update->Text = L"Обновить";
			this->DB_Update->Click += gcnew System::EventHandler(this, &AppForm::DB_Update_Click);
			// 
			// DB_Delete
			// 
			this->DB_Delete->Name = L"DB_Delete";
			this->DB_Delete->Size = System::Drawing::Size(180, 22);
			this->DB_Delete->Text = L"Удалить";
			this->DB_Delete->Click += gcnew System::EventHandler(this, &AppForm::DB_Delete_Click);
			// 
			// TAB
			// 
			this->TAB->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->TAB_Product, this->TAB_Customers,
					this->TAB_Employeer
			});
			this->TAB->Name = L"TAB";
			this->TAB->Size = System::Drawing::Size(66, 20);
			this->TAB->Text = L"Таблица";
			// 
			// TAB_Product
			// 
			this->TAB_Product->Name = L"TAB_Product";
			this->TAB_Product->Size = System::Drawing::Size(180, 22);
			this->TAB_Product->Text = L"Продукты";
			// 
			// TAB_Customers
			// 
			this->TAB_Customers->Name = L"TAB_Customers";
			this->TAB_Customers->Size = System::Drawing::Size(180, 22);
			this->TAB_Customers->Text = L"Покупатели";
			// 
			// TAB_Employeer
			// 
			this->TAB_Employeer->Name = L"TAB_Employeer";
			this->TAB_Employeer->Size = System::Drawing::Size(180, 22);
			this->TAB_Employeer->Text = L"Сотрудники";
			// 
			// расчетToolStripMenuItem
			// 
			this->расчетToolStripMenuItem->Name = L"расчетToolStripMenuItem";
			this->расчетToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->расчетToolStripMenuItem->Text = L"Расчет";
			// 
			// DB_Exit
			// 
			this->DB_Exit->Name = L"DB_Exit";
			this->DB_Exit->Size = System::Drawing::Size(119, 20);
			this->DB_Exit->Text = L"Выход из системы";
			this->DB_Exit->Click += gcnew System::EventHandler(this, &AppForm::DB_Exit_Click);
			// 
			// AppForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->tabControl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AppForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Приложение";
			this->tabControl->ResumeLayout(false);
			this->tabAuthorization->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabDatabase->ResumeLayout(false);
			this->tabDatabase->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void userChoiceType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonLogIn_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonSignIn_Click(System::Object^ sender, System::EventArgs^ e);	
	private: System::Void DB_Exit_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DB_Download_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DB_Add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DB_Update_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DB_Delete_Click(System::Object^ sender, System::EventArgs^ e);
};
}

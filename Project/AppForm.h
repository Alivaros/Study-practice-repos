#pragma once
#include "CalcForm.h"
#include "DBInteraction.h"
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
	private: System::Windows::Forms::DataGridView^ dGVEmployee;












	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Actions;

	private: System::Windows::Forms::ToolStripMenuItem^ DB_Exit;

	private: System::Windows::Forms::ToolStripMenuItem^ DB_Download;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Add;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Update;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Delete;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Table;
















	private: System::Windows::Forms::ToolStripMenuItem^ TAB_Product;
	private: System::Windows::Forms::ToolStripMenuItem^ TAB_Customers;
	private: System::Windows::Forms::ToolStripMenuItem^ TAB_Employeer;
	private: System::Windows::Forms::ToolStripMenuItem^ DB_Calc;













	private: System::Windows::Forms::TabControl^ tabControlDB;
private: System::Windows::Forms::TabPage^ tPDBEmployee;

private: System::Windows::Forms::TabPage^ tPDBCustomers;

	private: System::Windows::Forms::TabPage^ tPDBProduct;



private: System::Windows::Forms::DataGridViewTextBoxColumn^ EmployeeID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Firstname_Employee;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lastname_Employee;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname_Employee;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Position_Employee;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone_Employee;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email_Employee;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hiredate_Employee;
private: System::Windows::Forms::DataGridView^ dGVCustomer;
private: System::Windows::Forms::DataGridView^ dGVProduct;




private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Firstname_Customer;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lastname_Customer;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone_Customer;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email_Customer;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProductID;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name_Product;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDCategory;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Price_Product;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Count_Product;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Expirationdate_Product;
private: System::Windows::Forms::GroupBox^ gBSearch;


private: System::Windows::Forms::Button^ btnSearch;


private: System::Windows::Forms::Label^ labelTip2;
private: System::Windows::Forms::TextBox^ textBoxSearch;
private: System::Windows::Forms::ToolStripMenuItem^ DB_Search;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::ComboBox^ cBSelectColumn;










private: System::ComponentModel::IContainer^ components;





	public:
	private:



	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


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
			this->gBSearch = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cBSelectColumn = (gcnew System::Windows::Forms::ComboBox());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->labelTip2 = (gcnew System::Windows::Forms::Label());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->tabControlDB = (gcnew System::Windows::Forms::TabControl());
			this->tPDBProduct = (gcnew System::Windows::Forms::TabPage());
			this->dGVProduct = (gcnew System::Windows::Forms::DataGridView());
			this->ProductID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_Product = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->IDCategory = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Price_Product = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Count_Product = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Expirationdate_Product = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tPDBCustomers = (gcnew System::Windows::Forms::TabPage());
			this->dGVCustomer = (gcnew System::Windows::Forms::DataGridView());
			this->CustomerID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Firstname_Customer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lastname_Customer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone_Customer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email_Customer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tPDBEmployee = (gcnew System::Windows::Forms::TabPage());
			this->dGVEmployee = (gcnew System::Windows::Forms::DataGridView());
			this->EmployeeID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Firstname_Employee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lastname_Employee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Surname_Employee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Position_Employee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone_Employee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email_Employee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hiredate_Employee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->DB_Actions = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Download = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Add = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Update = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Delete = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Table = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TAB_Product = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TAB_Customers = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TAB_Employeer = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Calc = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Search = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DB_Exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl->SuspendLayout();
			this->tabAuthorization->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabDatabase->SuspendLayout();
			this->gBSearch->SuspendLayout();
			this->tabControlDB->SuspendLayout();
			this->tPDBProduct->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVProduct))->BeginInit();
			this->tPDBCustomers->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVCustomer))->BeginInit();
			this->tPDBEmployee->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVEmployee))->BeginInit();
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
			this->tabAuthorization->Size = System::Drawing::Size(768, 544);
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
			this->tabDatabase->Controls->Add(this->gBSearch);
			this->tabDatabase->Controls->Add(this->tabControlDB);
			this->tabDatabase->Controls->Add(this->menuStrip1);
			this->tabDatabase->Location = System::Drawing::Point(4, 5);
			this->tabDatabase->Name = L"tabDatabase";
			this->tabDatabase->Padding = System::Windows::Forms::Padding(3);
			this->tabDatabase->Size = System::Drawing::Size(776, 552);
			this->tabDatabase->TabIndex = 1;
			this->tabDatabase->Text = L" БД";
			this->tabDatabase->UseVisualStyleBackColor = true;
			// 
			// gBSearch
			// 
			this->gBSearch->Controls->Add(this->label5);
			this->gBSearch->Controls->Add(this->cBSelectColumn);
			this->gBSearch->Controls->Add(this->btnSearch);
			this->gBSearch->Controls->Add(this->labelTip2);
			this->gBSearch->Controls->Add(this->textBoxSearch);
			this->gBSearch->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->gBSearch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gBSearch->Location = System::Drawing::Point(3, 367);
			this->gBSearch->Name = L"gBSearch";
			this->gBSearch->Size = System::Drawing::Size(770, 182);
			this->gBSearch->TabIndex = 4;
			this->gBSearch->TabStop = false;
			this->gBSearch->Text = L"Поиск";
			this->gBSearch->Visible = false;
			this->gBSearch->VisibleChanged += gcnew System::EventHandler(this, &AppForm::gBSearch_VisibleChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(25, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(178, 21);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Поиск по параметру:";
			// 
			// cBSelectColumn
			// 
			this->cBSelectColumn->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cBSelectColumn->FormattingEnabled = true;
			this->cBSelectColumn->Location = System::Drawing::Point(29, 65);
			this->cBSelectColumn->Name = L"cBSelectColumn";
			this->cBSelectColumn->Size = System::Drawing::Size(356, 29);
			this->cBSelectColumn->TabIndex = 12;
			// 
			// btnSearch
			// 
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSearch->Location = System::Drawing::Point(650, 134);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(90, 33);
			this->btnSearch->TabIndex = 11;
			this->btnSearch->Text = L"Поиск";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &AppForm::btnSearch_Click);
			// 
			// labelTip2
			// 
			this->labelTip2->AutoSize = true;
			this->labelTip2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelTip2->Location = System::Drawing::Point(25, 112);
			this->labelTip2->Name = L"labelTip2";
			this->labelTip2->Size = System::Drawing::Size(219, 21);
			this->labelTip2->TabIndex = 9;
			this->labelTip2->Text = L"Введите ключ для поиска:";
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxSearch->Location = System::Drawing::Point(29, 136);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(356, 29);
			this->textBoxSearch->TabIndex = 8;
			// 
			// tabControlDB
			// 
			this->tabControlDB->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControlDB->Controls->Add(this->tPDBProduct);
			this->tabControlDB->Controls->Add(this->tPDBCustomers);
			this->tabControlDB->Controls->Add(this->tPDBEmployee);
			this->tabControlDB->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControlDB->ItemSize = System::Drawing::Size(0, 1);
			this->tabControlDB->Location = System::Drawing::Point(3, 27);
			this->tabControlDB->Name = L"tabControlDB";
			this->tabControlDB->SelectedIndex = 0;
			this->tabControlDB->Size = System::Drawing::Size(770, 522);
			this->tabControlDB->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControlDB->TabIndex = 3;
			this->tabControlDB->TabStop = false;
			// 
			// tPDBProduct
			// 
			this->tPDBProduct->Controls->Add(this->dGVProduct);
			this->tPDBProduct->Location = System::Drawing::Point(4, 5);
			this->tPDBProduct->Name = L"tPDBProduct";
			this->tPDBProduct->Padding = System::Windows::Forms::Padding(3);
			this->tPDBProduct->Size = System::Drawing::Size(762, 513);
			this->tPDBProduct->TabIndex = 2;
			this->tPDBProduct->Text = L"Продукты";
			this->tPDBProduct->UseVisualStyleBackColor = true;
			// 
			// dGVProduct
			// 
			this->dGVProduct->AllowUserToDeleteRows = false;
			this->dGVProduct->AllowUserToResizeColumns = false;
			this->dGVProduct->AllowUserToResizeRows = false;
			this->dGVProduct->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dGVProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGVProduct->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ProductID,
					this->Name_Product, this->IDCategory, this->Price_Product, this->Count_Product, this->Expirationdate_Product
			});
			this->dGVProduct->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dGVProduct->Location = System::Drawing::Point(3, 3);
			this->dGVProduct->Name = L"dGVProduct";
			this->dGVProduct->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dGVProduct->Size = System::Drawing::Size(756, 507);
			this->dGVProduct->TabIndex = 2;
			// 
			// ProductID
			// 
			this->ProductID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->ProductID->HeaderText = L"Код товара";
			this->ProductID->Name = L"ProductID";
			this->ProductID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Name_Product
			// 
			this->Name_Product->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Name_Product->HeaderText = L"Название товара";
			this->Name_Product->Name = L"Name_Product";
			// 
			// IDCategory
			// 
			this->IDCategory->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->IDCategory->HeaderText = L"Код категории";
			this->IDCategory->Name = L"IDCategory";
			// 
			// Price_Product
			// 
			this->Price_Product->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Price_Product->HeaderText = L"Цена";
			this->Price_Product->Name = L"Price_Product";
			// 
			// Count_Product
			// 
			this->Count_Product->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Count_Product->HeaderText = L"Количество";
			this->Count_Product->Name = L"Count_Product";
			// 
			// Expirationdate_Product
			// 
			this->Expirationdate_Product->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Expirationdate_Product->HeaderText = L"Срок годности";
			this->Expirationdate_Product->Name = L"Expirationdate_Product";
			this->Expirationdate_Product->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// tPDBCustomers
			// 
			this->tPDBCustomers->Controls->Add(this->dGVCustomer);
			this->tPDBCustomers->Location = System::Drawing::Point(4, 5);
			this->tPDBCustomers->Name = L"tPDBCustomers";
			this->tPDBCustomers->Padding = System::Windows::Forms::Padding(3);
			this->tPDBCustomers->Size = System::Drawing::Size(758, 509);
			this->tPDBCustomers->TabIndex = 1;
			this->tPDBCustomers->Text = L"Покупатели";
			this->tPDBCustomers->UseVisualStyleBackColor = true;
			// 
			// dGVCustomer
			// 
			this->dGVCustomer->AllowUserToDeleteRows = false;
			this->dGVCustomer->AllowUserToResizeColumns = false;
			this->dGVCustomer->AllowUserToResizeRows = false;
			this->dGVCustomer->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dGVCustomer->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGVCustomer->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->CustomerID,
					this->Firstname_Customer, this->Lastname_Customer, this->Phone_Customer, this->Email_Customer
			});
			this->dGVCustomer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dGVCustomer->Location = System::Drawing::Point(3, 3);
			this->dGVCustomer->Name = L"dGVCustomer";
			this->dGVCustomer->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dGVCustomer->Size = System::Drawing::Size(752, 503);
			this->dGVCustomer->TabIndex = 2;
			// 
			// CustomerID
			// 
			this->CustomerID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->CustomerID->HeaderText = L"Код покупателя";
			this->CustomerID->Name = L"CustomerID";
			this->CustomerID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Firstname_Customer
			// 
			this->Firstname_Customer->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Firstname_Customer->HeaderText = L"Имя";
			this->Firstname_Customer->Name = L"Firstname_Customer";
			// 
			// Lastname_Customer
			// 
			this->Lastname_Customer->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Lastname_Customer->HeaderText = L"Фамилия";
			this->Lastname_Customer->Name = L"Lastname_Customer";
			// 
			// Phone_Customer
			// 
			this->Phone_Customer->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Phone_Customer->HeaderText = L"Телефон";
			this->Phone_Customer->Name = L"Phone_Customer";
			this->Phone_Customer->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Email_Customer
			// 
			this->Email_Customer->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Email_Customer->HeaderText = L"Электронная почта";
			this->Email_Customer->Name = L"Email_Customer";
			this->Email_Customer->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// tPDBEmployee
			// 
			this->tPDBEmployee->Controls->Add(this->dGVEmployee);
			this->tPDBEmployee->Location = System::Drawing::Point(4, 5);
			this->tPDBEmployee->Name = L"tPDBEmployee";
			this->tPDBEmployee->Padding = System::Windows::Forms::Padding(3);
			this->tPDBEmployee->Size = System::Drawing::Size(758, 509);
			this->tPDBEmployee->TabIndex = 0;
			this->tPDBEmployee->Text = L"Сотрудники";
			this->tPDBEmployee->UseVisualStyleBackColor = true;
			// 
			// dGVEmployee
			// 
			this->dGVEmployee->AllowUserToDeleteRows = false;
			this->dGVEmployee->AllowUserToResizeColumns = false;
			this->dGVEmployee->AllowUserToResizeRows = false;
			this->dGVEmployee->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dGVEmployee->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dGVEmployee->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->EmployeeID,
					this->Firstname_Employee, this->Lastname_Employee, this->Surname_Employee, this->Position_Employee, this->Phone_Employee, this->Email_Employee,
					this->Hiredate_Employee
			});
			this->dGVEmployee->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dGVEmployee->Location = System::Drawing::Point(3, 3);
			this->dGVEmployee->Name = L"dGVEmployee";
			this->dGVEmployee->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dGVEmployee->Size = System::Drawing::Size(752, 503);
			this->dGVEmployee->TabIndex = 1;
			// 
			// EmployeeID
			// 
			this->EmployeeID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->EmployeeID->HeaderText = L"Код сотрудника";
			this->EmployeeID->Name = L"EmployeeID";
			this->EmployeeID->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Firstname_Employee
			// 
			this->Firstname_Employee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Firstname_Employee->HeaderText = L"Имя";
			this->Firstname_Employee->Name = L"Firstname_Employee";
			// 
			// Lastname_Employee
			// 
			this->Lastname_Employee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Lastname_Employee->HeaderText = L"Фамилия";
			this->Lastname_Employee->Name = L"Lastname_Employee";
			// 
			// Surname_Employee
			// 
			this->Surname_Employee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Surname_Employee->HeaderText = L"Отчество";
			this->Surname_Employee->Name = L"Surname_Employee";
			// 
			// Position_Employee
			// 
			this->Position_Employee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Position_Employee->HeaderText = L"Должность";
			this->Position_Employee->Name = L"Position_Employee";
			// 
			// Phone_Employee
			// 
			this->Phone_Employee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Phone_Employee->HeaderText = L"Телефон";
			this->Phone_Employee->Name = L"Phone_Employee";
			this->Phone_Employee->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Email_Employee
			// 
			this->Email_Employee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Email_Employee->HeaderText = L"Электронная почта";
			this->Email_Employee->Name = L"Email_Employee";
			this->Email_Employee->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Hiredate_Employee
			// 
			this->Hiredate_Employee->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Hiredate_Employee->HeaderText = L"Дата найма";
			this->Hiredate_Employee->Name = L"Hiredate_Employee";
			this->Hiredate_Employee->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->DB_Actions, this->DB_Table,
					this->DB_Calc, this->DB_Search, this->DB_Exit
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
			this->DB_Download->Size = System::Drawing::Size(128, 22);
			this->DB_Download->Text = L"Загрузить";
			this->DB_Download->Click += gcnew System::EventHandler(this, &AppForm::DB_Download_Click);
			// 
			// DB_Add
			// 
			this->DB_Add->Name = L"DB_Add";
			this->DB_Add->Size = System::Drawing::Size(128, 22);
			this->DB_Add->Text = L"Добавить";
			this->DB_Add->Click += gcnew System::EventHandler(this, &AppForm::DB_Add_Click);
			// 
			// DB_Update
			// 
			this->DB_Update->Name = L"DB_Update";
			this->DB_Update->Size = System::Drawing::Size(128, 22);
			this->DB_Update->Text = L"Обновить";
			this->DB_Update->Click += gcnew System::EventHandler(this, &AppForm::DB_Update_Click);
			// 
			// DB_Delete
			// 
			this->DB_Delete->Name = L"DB_Delete";
			this->DB_Delete->Size = System::Drawing::Size(128, 22);
			this->DB_Delete->Text = L"Удалить";
			this->DB_Delete->Click += gcnew System::EventHandler(this, &AppForm::DB_Delete_Click);
			// 
			// DB_Table
			// 
			this->DB_Table->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->TAB_Product,
					this->TAB_Customers, this->TAB_Employeer
			});
			this->DB_Table->Name = L"DB_Table";
			this->DB_Table->Size = System::Drawing::Size(66, 20);
			this->DB_Table->Text = L"Таблица";
			// 
			// TAB_Product
			// 
			this->TAB_Product->Name = L"TAB_Product";
			this->TAB_Product->Size = System::Drawing::Size(140, 22);
			this->TAB_Product->Text = L"Продукты";
			this->TAB_Product->Click += gcnew System::EventHandler(this, &AppForm::TAB_Product_Click);
			// 
			// TAB_Customers
			// 
			this->TAB_Customers->Name = L"TAB_Customers";
			this->TAB_Customers->Size = System::Drawing::Size(140, 22);
			this->TAB_Customers->Text = L"Покупатели";
			this->TAB_Customers->Click += gcnew System::EventHandler(this, &AppForm::TAB_Customers_Click);
			// 
			// TAB_Employeer
			// 
			this->TAB_Employeer->Name = L"TAB_Employeer";
			this->TAB_Employeer->Size = System::Drawing::Size(140, 22);
			this->TAB_Employeer->Text = L"Сотрудники";
			this->TAB_Employeer->Click += gcnew System::EventHandler(this, &AppForm::TAB_Employeer_Click);
			// 
			// DB_Calc
			// 
			this->DB_Calc->Name = L"DB_Calc";
			this->DB_Calc->Size = System::Drawing::Size(56, 20);
			this->DB_Calc->Text = L"Расчет";
			this->DB_Calc->Click += gcnew System::EventHandler(this, &AppForm::DB_Calc_Click);
			// 
			// DB_Search
			// 
			this->DB_Search->Name = L"DB_Search";
			this->DB_Search->Size = System::Drawing::Size(54, 20);
			this->DB_Search->Text = L"Поиск";
			this->DB_Search->Click += gcnew System::EventHandler(this, &AppForm::DB_Search_Click);
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
			this->KeyPreview = true;
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
			this->gBSearch->ResumeLayout(false);
			this->gBSearch->PerformLayout();
			this->tabControlDB->ResumeLayout(false);
			this->tPDBProduct->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVProduct))->EndInit();
			this->tPDBCustomers->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVCustomer))->EndInit();
			this->tPDBEmployee->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dGVEmployee))->EndInit();
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
	private: System::Void TAB_Product_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TAB_Customers_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void TAB_Employeer_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DB_Calc_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void DB_Search_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void gBSearch_VisibleChanged(System::Object^ sender, System::EventArgs^ e);
};
}

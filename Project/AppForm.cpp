#include "AppForm.h"

void fillcB(ComboBox^ cBSelect, DataGridView^ dGV)
{
	cBSelect->Items->Clear();
	for (int i = 0; i < dGV->Columns->Count; ++i)
	{
		String^ columnHeader = dGV->Columns[i]->HeaderText;

		if (!cBSelect->Items->Contains(columnHeader))
		{
			cBSelect->Items->Add(columnHeader);
		}
	}
}


System::Void Project::AppForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void Project::AppForm::buttonClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	userInputUsername->Clear();
	userInputPassword->Clear();
}

System::Void Project::AppForm::buttonLogIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database.accdb";//Строка подключения
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	String^ query =
		"SELECT [Пользователи].[Код типа пользователя] "
		"FROM [Пользователи] "
		"INNER JOIN [Тип пользователя] "
		"ON [Пользователи].[Код типа пользователя] = [Тип пользователя].[Код типа пользователя] "
		"WHERE [Пользователи].[Логин] = @username AND [Пользователи].[Пароль] = @password";

	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	dbCommand->Parameters->AddWithValue("@username", userInputUsername->Text);
	dbCommand->Parameters->AddWithValue("@password", userInputPassword->Text);

	int userTypeCode = -1;

	try
	{
		dbConnection->Open();
		Object^ result = dbCommand->ExecuteScalar();
		if (result != nullptr)
		{
			userTypeCode = Convert::ToInt32(result);
		}
		dbConnection->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Ошибка при подключении: " + ex->Message);
		return;
	}

	// Разграничение прав
	if (userTypeCode == 1)
	{
		MessageBox::Show("Вы вошли как администратор.");
		userInputUsername->Enabled = false;
		userInputPassword->Enabled = false;
		buttonSignIn->Visible = true;
		buttonSignIn->Enabled = true;

		DB_Update->Visible = true;
		DB_Add->Visible = true;
		DB_Delete->Visible = true;

		TAB_Customers->Visible = true;
		TAB_Employeer->Visible = true;

		DB_Calc->Visible = true;
	}
	else if (userTypeCode == 2)
	{
		MessageBox::Show("Вы вошли как пользователь.");
		userInputUsername->Enabled = false;
		userInputPassword->Enabled = false;
		buttonSignIn->Visible = true;
		buttonSignIn->Enabled = true;

		DB_Update->Visible = false;
		DB_Add->Visible = false;
		DB_Delete->Visible = false;

		TAB_Customers->Visible = false;
		TAB_Employeer->Visible = false;

		DB_Calc->Visible = false;
	}
	else
	{
		MessageBox::Show("Неверный логин или пароль.");
	}


}

System::Void Project::AppForm::buttonSignIn_Click(System::Object^ sender, System::EventArgs^ e)
{

	tabControl->SelectedIndex = 1;
}

System::Void Project::AppForm::DB_Download_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (tabControlDB->SelectedIndex == 0)
	{
		DBInteraction _DBI(dGVProduct, "Продукты");
		_DBI.dbDownload();
	}

	else if (tabControlDB->SelectedIndex == 1)
	{
		DBInteraction _DBI(dGVCustomer, "Покупатели");
		_DBI.dbDownload();
	}

	else if (tabControlDB->SelectedIndex == 2)
	{
		DBInteraction _DBI(dGVEmployee, "Сотрудники");
		_DBI.dbDownload();
	}
}

System::Void Project::AppForm::DB_Add_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tabControlDB->SelectedIndex == 0)
	{
		DBInteraction _DBI(dGVProduct, "Продукты");
		_DBI.dbAdd();
	}

	else if (tabControlDB->SelectedIndex == 1)
	{
		DBInteraction _DBI(dGVCustomer, "Покупатели");
		_DBI.dbAdd();
	}

	else if (tabControlDB->SelectedIndex == 2)
	{
		DBInteraction _DBI(dGVEmployee, "Сотрудники");
		_DBI.dbAdd();
	}
	
}

System::Void Project::AppForm::DB_Update_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tabControlDB->SelectedIndex == 0)
	{
		DBInteraction _DBI(dGVProduct, "Продукты");
		_DBI.dbUpdate();
	}

	else if (tabControlDB->SelectedIndex == 1)
	{
		DBInteraction _DBI(dGVCustomer, "Покупатели");
		_DBI.dbUpdate();
	}

	else if (tabControlDB->SelectedIndex == 2)
	{
		DBInteraction _DBI(dGVEmployee, "Сотрудники");
		_DBI.dbUpdate();
	}

}

System::Void Project::AppForm::DB_Delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tabControlDB->SelectedIndex == 0)
	{
		DBInteraction _DBI(dGVProduct, "Продукты");
		_DBI.dbDelete();
	}

	else if (tabControlDB->SelectedIndex == 1)
	{
		DBInteraction _DBI(dGVCustomer, "Покупатели");
		_DBI.dbDelete();
	}

	else if (tabControlDB->SelectedIndex == 2)
	{
		DBInteraction _DBI(dGVEmployee, "Сотрудники");
		_DBI.dbDelete();
	}
}

System::Void Project::AppForm::TAB_Product_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControlDB->SelectedIndex = 0;
	fillcB(cBSelectColumn, dGVProduct);
}

System::Void Project::AppForm::TAB_Customers_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControlDB->SelectedIndex = 1;
	fillcB(cBSelectColumn, dGVCustomer);
}

System::Void Project::AppForm::TAB_Employeer_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControlDB->SelectedIndex = 2;
	fillcB(cBSelectColumn, dGVEmployee);
}

System::Void Project::AppForm::DB_Calc_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult dr;
	CalcForm^ newDlg = gcnew CalcForm();
appm:
	dr = newDlg->ShowDialog();
	if (dr == System::Windows::Forms::DialogResult::OK)
		return;
	else
	{
		MessageBox::Show("Ошибка закрытия окна");
		goto appm;
	}
}

System::Void Project::AppForm::DB_Search_Click(System::Object^ sender, System::EventArgs^ e)
{
	static bool isClicked = false;

	if (!isClicked)
	{
		
		tabControlDB->Dock = System::Windows::Forms::DockStyle::Top;
		tabControlDB->Height = 342;

		
		gBSearch->Visible = true;
		gBSearch->Dock = System::Windows::Forms::DockStyle::Bottom;

		isClicked = true;
	}
	else
	{
		gBSearch->Visible = false;
		gBSearch->Dock = System::Windows::Forms::DockStyle::None;

		tabControlDB->Dock = System::Windows::Forms::DockStyle::Fill;

		isClicked = false;
	}

}

System::Void Project::AppForm::btnSearch_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (tabControlDB->SelectedIndex == 0)
	{
		DBInteraction _DBI(dGVProduct, "Продукты");
		_DBI.dbSearch(textBoxSearch->Text->ToString(), cBSelectColumn);
		}
	else if (tabControlDB->SelectedIndex == 1)
	{
		DBInteraction _DBI(dGVCustomer, "Покупатели");
		_DBI.dbSearch(textBoxSearch->Text->ToString(), cBSelectColumn);
	}

	else if (tabControlDB->SelectedIndex == 2)
	{
		DBInteraction _DBI(dGVEmployee, "Сотрудники");
		_DBI.dbSearch(textBoxSearch->Text->ToString(), cBSelectColumn);
	}
}

System::Void Project::AppForm::gBSearch_VisibleChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (tabControlDB->SelectedIndex == 0)
	{
		fillcB(cBSelectColumn, dGVProduct);
	}

	else if (tabControlDB->SelectedIndex == 1)
	{
		fillcB(cBSelectColumn, dGVCustomer);
	}

	else if (tabControlDB->SelectedIndex == 2)
	{
		fillcB(cBSelectColumn, dGVEmployee);
	}
			
}

System::Void Project::AppForm::buttonShowPassword_Click(System::Object^ sender, System::EventArgs^ e)
{
	static bool isClicked = false;

	if (!isClicked)
	{
		userInputPassword->PasswordChar = '\0';
		buttonShowPassword->Image = Image::FromFile("Pictures\\Login\\EyeSource.jpg");
	}
	else
	{
		userInputPassword->PasswordChar = '*';
		buttonShowPassword->Image = Image::FromFile("Pictures\\Login\\EyeOFFSource.jpg");
	}
	isClicked = !isClicked;
}

System::Void Project::AppForm::DB_Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	dGVEmployee->Rows->Clear();
	dGVCustomer->Rows->Clear(); 
	dGVProduct->Rows->Clear();
	tabControl->SelectedIndex = 0;
	buttonSignIn->Visible = false;
	buttonSignIn->Enabled = false;
	userInputUsername->Enabled = true;
	userInputPassword->Enabled = true;
	userInputUsername->Clear();
	userInputPassword->Clear();

	buttonSignIn->Enabled = true;

	DB_Update->Visible = false;
	DB_Add->Visible = false;
	DB_Delete->Visible = false;

	TAB_Customers->Visible = false;
	TAB_Employeer->Visible = false;

	DB_Calc->Visible = false;
}


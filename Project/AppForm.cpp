#include "AppForm.h"


using namespace System::Data::OleDb;

System::Void Project::AppForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void Project::AppForm::buttonClear_Click(System::Object^ sender, System::EventArgs^ e)
{
	
}

System::Void Project::AppForm::userChoiceType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ userType = userChoiceType->SelectedItem->ToString();

	if (userType == "Администратор")
	{
		userInputLogin->Enabled = true;
		userInputPassword->Enabled = true;
		buttonLogIn->Enabled = true;
		buttonSignIn->Enabled = false;
	}
	else if(userType == "Пользователь")
	{
		userInputLogin->Enabled = false;
		userInputPassword->Enabled = false;
		buttonLogIn->Enabled = false;
		buttonSignIn->Enabled = true;
	}

}

System::Void Project::AppForm::buttonLogIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	

}

System::Void Project::AppForm::buttonSignIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControl->SelectedIndex = 1;
}

System::Void Project::AppForm::DB_Download_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database.accdb";//Строка подключения
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	dbConnection->Open();//открываем соеденение
	String^ query = "SELECT * FROM [Employeer]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка", "Ошибка");

	}
	else {
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["EmployeerID"], dbReader["FirstName"], dbReader["LastName"], dbReader["Position"], dbReader["Phone"], dbReader["Email"], dbReader["HireDate"]);
		}
	}
	dbReader->Close();
	dbConnection->Close();

}

System::Void Project::AppForm::DB_Add_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Project::AppForm::DB_Update_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Project::AppForm::DB_Delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Project::AppForm::DB_Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControl->SelectedIndex = 0;
}


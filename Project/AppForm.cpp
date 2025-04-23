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

	if (userType == "�������������")
	{
		userInputLogin->Enabled = true;
		userInputPassword->Enabled = true;
		buttonLogIn->Enabled = true;
		buttonSignIn->Enabled = false;
	}
	else if(userType == "������������")
	{
		userInputLogin->Enabled = false;
		userInputPassword->Enabled = false;
		buttonLogIn->Enabled = false;
		buttonSignIn->Enabled = true;
	}

}

System::Void Project::AppForm::buttonLogIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	buttonSignIn->Enabled = true;
}

System::Void Project::AppForm::buttonSignIn_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControl->SelectedIndex = 1;
}

System::Void Project::AppForm::DB_Download_Click(System::Object^ sender, System::EventArgs^ e)
{
	dataGridView1->Rows->Clear();

	// ����������� � ��
	
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database.accdb";//������ �����������
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	// ������ � ��
	dbConnection->Open();//��������� ����������
	String^ query = "SELECT * FROM [Employeer]";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("������ ���������� ������!", "������!");

	}
	else {
		while (dbReader->Read()) {
			dataGridView1->Rows->Add(dbReader["EmployeerID"], dbReader["FirstName"], dbReader["LastName"],dbReader["SurName"], dbReader["Position"], dbReader["Phone"], dbReader["Email"], dbReader["HireDate"]);
		}
	}
	// ��������� ���������� � ��
	dbReader->Close();
	dbConnection->Close();

	return System::Void();
}

System::Void Project::AppForm::DB_Add_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("�������� ���� ������ ��� ����������!", "��������!");
		return;
	}
	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[5]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[6]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[7]->Value == nullptr)
	{
		MessageBox::Show("�� ��� ������ �������", "��������!");
		return;
	}


	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ firstname = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ lastname = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ surname = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ position = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ phone = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
	String^ email = dataGridView1->Rows[index]->Cells[6]->Value->ToString();
	String^ hiredate = dataGridView1->Rows[index]->Cells[7]->Value->ToString();
	// ����������� � ��
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database.accdb";//������ �����������
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	// ������ � ��
	dbConnection->Open();//��������� ����������
	String^ query = "INSERT INTO [Employeer] VALUES ( " + id + ", '" 
														+ firstname + "' , '" 
														+ lastname + "' , '" 
														+ surname + "', '" 
														+ position + "', '" 
														+ phone + "', '" 
														+ email + "','" 
														+ hiredate + "')";

	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);
	
	// ��������� ������
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("������ ���������� �������!", "������!");
	else
		MessageBox::Show("������ ���������", "������!");
	
	// ��������� ���������� � ��
	dbConnection->Close();



	return System::Void();
}

System::Void Project::AppForm::DB_Update_Click(System::Object^ sender, System::EventArgs^ e)
{



	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("�������� ���� ������ ��� ����������!", "��������!");
		return;
	}
	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[5]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[6]->Value == nullptr || 
		dataGridView1->Rows[index]->Cells[7]->Value == nullptr)
	{
		MessageBox::Show("�� ��� ������ �������", "��������!");
		return;
	}




	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();;
	String^ firstname = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ lastname = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ surname = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ position = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ phone = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
	String^ email = dataGridView1->Rows[index]->Cells[6]->Value->ToString();
	String^ hiredate = dataGridView1->Rows[index]->Cells[7]->Value->ToString();

	

	// ����������� � ��
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database.accdb";//������ �����������
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	// ������ � ��
	dbConnection->Open();//��������� ����������
	String^ query = "UPDATE [Employeer] SET FirstName = '" + firstname + "', LastName = '" + lastname + "', SurName = '" + surname + "', [Position] = '" + position + "', Phone = '" + phone + "', Email = '" + email + "', HireDate = '" + hiredate + "' WHERE EmployeerID = " + id;
	/*String^ query = "UPDATE [Employeer] SET  FirstName = '" + firstname + "',"
											"LastName = '" + lastname + "',"
											"SurName = '" + surname + "',"
											"[Position] = '" + position + "',"
											"Phone = '" + phone + "',"
											"Email = '" + email + "',"
											"HireDate = '" + hiredate + "',";*/
	
	Console::WriteLine(query);
	
	

	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	// ��������� ������
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("������ ���������� �������!", "������!");
	else
		MessageBox::Show("������ ��������", "������!");

	// ��������� ���������� � ��
	dbConnection->Close();



	return System::Void();
}

System::Void Project::AppForm::DB_Delete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("�������� ���� ������ ��� ��������!", "��������!");
		return;
	}
	int index = dataGridView1->SelectedRows[0]->Index;

	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[5]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[6]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[7]->Value == nullptr)
	{
		MessageBox::Show("�� ��� ������ ��������!", "��������!");
		return;
	}




	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();;
	String^ firstname = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ lastname = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ surname = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ position = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ phone = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
	String^ email = dataGridView1->Rows[index]->Cells[6]->Value->ToString();
	String^ hiredate = dataGridView1->Rows[index]->Cells[7]->Value->ToString();



	// ����������� � ��
	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database.accdb";//������ �����������
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

	// ������ � ��
	dbConnection->Open();//��������� ����������
	String^ query = "DELETE FROM [Employeer] WHERE EmployeerID = " + id;

	Console::WriteLine(query);



	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);

	// ��������� ������
	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("������ ���������� �������!", "������!");
	else
	{
		MessageBox::Show("������ �������!", "������!");
		dataGridView1->Rows->RemoveAt(index);
	}
		
	// ��������� ���������� � ��
	dbConnection->Close();



	return System::Void();
}

System::Void Project::AppForm::DB_Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	tabControl->SelectedIndex = 0;
}


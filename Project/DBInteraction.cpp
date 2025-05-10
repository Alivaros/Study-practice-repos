#include "DBInteraction.h"

 

DBInteraction::DBInteraction(DataGridView^ dGV, String^ tableName)
{
	this->_dGV = dGV;
	this->_tableName = tableName;


	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database.accdb";//������ �����������
	dbConnection = gcnew OleDbConnection(connectionString);
}

void DBInteraction::dbDownload()
{
	_dGV->Rows->Clear();

	// ����������� � ��
	
	// ������ � ��
	dbConnection->Open();//��������� ����������
	String^ query = "SELECT * FROM [" + _tableName + "]";

	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false) 
	{
		MessageBox::Show("������ ���������� ������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else 
	{
		while (dbReader->Read()) 
		{
			array<Object^>^ row = gcnew array<Object^>(dbReader->FieldCount);
			for (int i = 0; i < dbReader->FieldCount; ++i)
			{
				row[i] = dbReader->GetValue(i);
			}
			_dGV->Rows->Add(row);
		}
	}
	// ��������� ���������� � ��
	dbReader->Close();
	dbConnection->Close();

}

void DBInteraction::dbAdd()
{
	if (_dGV->SelectedRows->Count != 1)
	{
		MessageBox::Show("�������� ���� ������ ��� ����������!", "��������!" ,
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	int index = _dGV->SelectedRows[0]->Index;

	for (int i = 0; i < _dGV->Columns->Count; ++i)
	{
		if (_dGV->Rows[index]->Cells[i]->Value == nullptr)
		{
			MessageBox::Show("�� ��� ������ �������", "��������!", 
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	}

	String^ values = "";
	for (int i = 0; i < _dGV->Columns->Count; ++i)
	{
		if (i > 0) values += ", ";
		values += "'" + _dGV->Rows[index]->Cells[i]->Value->ToString() + "'";
	}

	// ����������� � ��
	
	// ������ � ��
	dbConnection->Open();//��������� ����������
	String^ query = "INSERT INTO [" + _tableName + "] VALUES (" + values + ")";

	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);
	

	if (dbCommand->ExecuteNonQuery() != 1)
		MessageBox::Show("������ ���������� �������!", "������", 
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
		MessageBox::Show("������ ����������", "������", 
			MessageBoxButtons::OK, MessageBoxIcon::Information);

	// ��������� ���������� � ��
	dbConnection->Close();
}

void DBInteraction::dbUpdate()
{
	if (_dGV->SelectedRows->Count != 1)
	{
		MessageBox::Show("�������� ���� ������ ��� ����������!", "��������!", 
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	int index = _dGV->SelectedRows[0]->Index;

	for (int i = 0; i < _dGV->Columns->Count; ++i)
	{
		if (_dGV->Rows[index]->Cells[i]->Value == nullptr)
		{
			MessageBox::Show("�� ��� ������ �������", "��������!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
	}

	String^ columnID = _dGV->Columns[0]->HeaderText;
	String^ id = _dGV->Rows[index]->Cells[0]->Value->ToString();

	String^ updateValues = "";
	for (int i = 1; i < _dGV->Columns->Count; ++i)
	{
		if (i > 1) updateValues += ", ";
		String^ columnName = _dGV->Columns[i]->HeaderText;
		String^ cellValue = _dGV->Rows[index]->Cells[i]->Value->ToString();
		updateValues += "[" + columnName + "] = '" + cellValue + "'";
	}

	// ����������� � ��

	// ������ � ��
	dbConnection->Open();//��������� ����������
	String^ query = "UPDATE [" + _tableName + "] SET " + updateValues + " WHERE [" + columnID + "] = " + id;

	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);


	if (dbCommand->ExecuteNonQuery() != 1)
		MessageBox::Show("������ ���������� �������!", "������", 
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
		MessageBox::Show("������ ���������", "������", 
			MessageBoxButtons::OK, MessageBoxIcon::Information);

	// ��������� ���������� � ��
	dbConnection->Close();


}

void DBInteraction::dbDelete()
{
	if (_dGV->SelectedRows->Count != 1)
	{
		MessageBox::Show("�������� ���� ������ ��� ��������!", "��������!", 
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	int index = _dGV->SelectedRows[0]->Index;

	if(_dGV->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("�� ��� ������ �������", "��������!", 
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
		
	}
	DialogResult dr = MessageBox::Show("�� �������, ��� ������ ������� ��� ������?", "������������� ��������", 
		MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (dr != DialogResult::Yes)
		return;

	String^ columnID = _dGV->Columns[0]->HeaderText;
	String^ id = _dGV->Rows[index]->Cells[0]->Value->ToString();


	// ����������� � ��

	// ������ � ��
	dbConnection->Open();//��������� ����������
	String^ query = "DELETE FROM [" + _tableName + "] WHERE [" + columnID + "] = " + id;


	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);


	try
	{
		if (dbCommand->ExecuteNonQuery() == 1)
		{
			MessageBox::Show("������ �������!", "������!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			_dGV->Rows->RemoveAt(index); 
		}
		else
		{
			MessageBox::Show("������ ��� �������� ������.", "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("���������� ��� ��������: " + ex->Message, "������", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// ��������� ���������� � ��
	dbConnection->Close();
}

void DBInteraction::dbSearch(String^ searchKey, ComboBox^ cb)
{
	_dGV->Rows->Clear();

	// �������� ����������
	dbConnection->Open();
	String^ _searchColumn = cb->SelectedItem->ToString();
	// ������ � ��������
	String^ query = "SELECT * FROM [" + _tableName + "] WHERE [" + _searchColumn + "] LIKE '%" + searchKey + "%'";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);

	// ���������� �������
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (!dbReader->HasRows)
	{
		MessageBox::Show("������ �� �������!", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		while (dbReader->Read())
		{
			array<Object^>^ row = gcnew array<Object^>(dbReader->FieldCount);
			for (int i = 0; i < dbReader->FieldCount; ++i)
			{
				row[i] = dbReader->GetValue(i);
			}
			_dGV->Rows->Add(row);
		}
	}

	dbReader->Close();
	dbConnection->Close();
}


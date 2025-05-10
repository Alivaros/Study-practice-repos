#include "DBInteraction.h"

 

DBInteraction::DBInteraction(DataGridView^ dGV, String^ tableName)
{
	this->_dGV = dGV;
	this->_tableName = tableName;


	String^ connectionString = "provider=Microsoft.ACE.OLEDB.12.0;Data Source=Database.accdb";//Строка подключения
	dbConnection = gcnew OleDbConnection(connectionString);
}

void DBInteraction::dbDownload()
{
	_dGV->Rows->Clear();

	// подключение к БД
	
	// Запрос к бд
	dbConnection->Open();//открываем соеденение
	String^ query = "SELECT * FROM [" + _tableName + "]";

	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false) 
	{
		MessageBox::Show("Ошибка считывания данных!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);

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
	// закрываем соединение с бд
	dbReader->Close();
	dbConnection->Close();

}

void DBInteraction::dbAdd()
{
	if (_dGV->SelectedRows->Count != 1)
	{
		MessageBox::Show("Выберите одну строку для добавления!", "Внимание!" ,
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	int index = _dGV->SelectedRows[0]->Index;

	for (int i = 0; i < _dGV->Columns->Count; ++i)
	{
		if (_dGV->Rows[index]->Cells[i]->Value == nullptr)
		{
			MessageBox::Show("Не все данные введены", "Внимание!", 
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

	// подключение к БД
	
	// Запрос к бд
	dbConnection->Open();//открываем соеденение
	String^ query = "INSERT INTO [" + _tableName + "] VALUES (" + values + ")";

	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);
	

	if (dbCommand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка", 
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
		MessageBox::Show("Данные добавленны", "Ошибка", 
			MessageBoxButtons::OK, MessageBoxIcon::Information);

	// закрываем соединение с бд
	dbConnection->Close();
}

void DBInteraction::dbUpdate()
{
	if (_dGV->SelectedRows->Count != 1)
	{
		MessageBox::Show("Выберите одну строку для обновления!", "Внимание!", 
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	int index = _dGV->SelectedRows[0]->Index;

	for (int i = 0; i < _dGV->Columns->Count; ++i)
	{
		if (_dGV->Rows[index]->Cells[i]->Value == nullptr)
		{
			MessageBox::Show("Не все данные введены", "Внимание!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
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

	// подключение к БД

	// Запрос к бд
	dbConnection->Open();//открываем соеденение
	String^ query = "UPDATE [" + _tableName + "] SET " + updateValues + " WHERE [" + columnID + "] = " + id;

	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);


	if (dbCommand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка выполнения запроса!", "Ошибка", 
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	else
		MessageBox::Show("Данные обновлены", "Ошибка", 
			MessageBoxButtons::OK, MessageBoxIcon::Information);

	// закрываем соединение с бд
	dbConnection->Close();


}

void DBInteraction::dbDelete()
{
	if (_dGV->SelectedRows->Count != 1)
	{
		MessageBox::Show("Выберите одну строку для удаления!", "Внимание!", 
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	int index = _dGV->SelectedRows[0]->Index;

	if(_dGV->Rows[index]->Cells[0]->Value == nullptr)
	{
		MessageBox::Show("Не все данные введены", "Внимание!", 
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
		
	}
	DialogResult dr = MessageBox::Show("Вы уверены, что хотите удалить эту запись?", "Подтверждение удаления", 
		MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (dr != DialogResult::Yes)
		return;

	String^ columnID = _dGV->Columns[0]->HeaderText;
	String^ id = _dGV->Rows[index]->Cells[0]->Value->ToString();


	// подключение к БД

	// Запрос к бд
	dbConnection->Open();//открываем соеденение
	String^ query = "DELETE FROM [" + _tableName + "] WHERE [" + columnID + "] = " + id;


	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);


	try
	{
		if (dbCommand->ExecuteNonQuery() == 1)
		{
			MessageBox::Show("Данные удалены!", "Готово!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			_dGV->Rows->RemoveAt(index); 
		}
		else
		{
			MessageBox::Show("Ошибка при удалении записи.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Исключение при удалении: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	// закрываем соединение с бд
	dbConnection->Close();
}

void DBInteraction::dbSearch(String^ searchKey, ComboBox^ cb)
{
	_dGV->Rows->Clear();

	// Открытие соединения
	dbConnection->Open();
	String^ _searchColumn = cb->SelectedItem->ToString();
	// Запрос с фильтром
	String^ query = "SELECT * FROM [" + _tableName + "] WHERE [" + _searchColumn + "] LIKE '%" + searchKey + "%'";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	Console::WriteLine(query);

	// Выполнение запроса
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (!dbReader->HasRows)
	{
		MessageBox::Show("Ничего не найдено!", "Поиск", MessageBoxButtons::OK, MessageBoxIcon::Information);
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


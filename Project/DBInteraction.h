#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::OleDb;


ref class DBInteraction
{
public:
	DBInteraction(DataGridView^ dGV, String^ tableName);

	void dbDownload();
	void dbAdd();
	void dbUpdate();
	void dbDelete();

	void dbSearch(String^ searchKey,ComboBox^ cb);

private:
	DataGridView^ _dGV;
	String^ _tableName;
	OleDbConnection^ dbConnection;
};


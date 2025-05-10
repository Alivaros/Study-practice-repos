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
	
	buttonSignIn->Enabled = true;
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
		// Переключаем tabControlDB в верхнюю часть формы
		tabControlDB->Dock = System::Windows::Forms::DockStyle::Top;
		tabControlDB->Height = 342; // Например, половина окна

		// Показываем GroupBox снизу
		gBSearch->Visible = true;
		gBSearch->Dock = System::Windows::Forms::DockStyle::Bottom;

		isClicked = true;
	}
	else
	{
		// Возвращаем tabControlDB на весь экран
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

System::Void Project::AppForm::DB_Exit_Click(System::Object^ sender, System::EventArgs^ e)
{
	dGVEmployee->Rows->Clear();
	dGVCustomer->Rows->Clear(); 
	dGVProduct->Rows->Clear();
	tabControl->SelectedIndex = 0;
}


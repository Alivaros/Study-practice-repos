#include "MainForm.h"
#include "InfoForm.h"
#include "AppForm.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text;


int main(cli::array<String^>^ args) 
{

    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    Project::MainForm form;
    Application::Run(% form);

}

System::Void Project::MainForm::buttonApp_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult dr;
	AppForm^ newDlg = gcnew AppForm();
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

System::Void Project::MainForm::buttonInfo_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::Windows::Forms::DialogResult dr;
	InfoForm^ newDlg = gcnew InfoForm();
infom:
	dr = newDlg->ShowDialog();
	if (dr == System::Windows::Forms::DialogResult::OK)
		return;
	else
	{
		MessageBox::Show("Ошибка закрытия окна");
		goto infom;
	}
}

System::Void Project::MainForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

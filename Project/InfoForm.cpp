#include "InfoForm.h"

System::Void Project::InfoForm::buttonOK_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}

System::Void Project::InfoForm::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    System::Diagnostics::Process::Start("https://github.com/Alivaros/Study-practice-repos");
}

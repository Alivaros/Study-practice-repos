#include "CalcForm.h"
using namespace System;
using namespace System::Data;
System::Void Project::CalcForm::CalcForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    array<System::String^>^ m = {
        "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
        "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"
    };

    array<int>^ y_Table = { 78, 105, 115, 154, 173, 221, 258, 63, 95, 115};

    for (int i = 0; i < 12; ++i) {
        System::String^ month = m[i];
        System::String^ period = (i + 1).ToString();
        System::String^ visitorCount = i < y_Table->Length ? y_Table[i].ToString() : "";

        dGVCalcData->Rows->Add(
            month,          // Месяц
            period,         // Номер периода t
            visitorCount,   // Кол во посетителй
            "",             // скользящая средняя м
            "",             // Абсолютная ошибка dt
            "",             // dt^2
            ""              // Относительная ошибка
        );
    }
}

System::Void Project::CalcForm::buttonCalc_Click(System::Object^ sender, System::EventArgs^ e)
{
    const int n = Convert::ToInt32(textBoxN->Text);

    array<int>^ y = gcnew array<int>(12); 

    for (int i = 0; i < 12; ++i) {
        System::Object^ cellValue = dGVCalcData->Rows[i]->Cells["NumberOfVisitors"]->Value;

        if (cellValue != nullptr && !String::IsNullOrWhiteSpace(cellValue->ToString())) {
            y[i] = Convert::ToInt32(cellValue);
        }
        else {
            y[i] = 0;
        }
    }
    for (int k = 0; k < 12; ++k)
    {
        Console::WriteLine(y[k]);
    }


}


System::Void Project::CalcForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}


#include "CalcForm.h"
#include <cmath>
using namespace System;
using namespace System::Data;
using namespace System::Windows::Forms::DataVisualization::Charting;


double calcM(int y[], int x, int n)
{
    double m = (y[x - 1] + y[x] + y[x + 1]) / (double)(n);;
    return Math::Ceiling(m);
}
void DrawForecastChart(int y[], int count, Chart^ chart)
{
    chart->Series["Факт_знач_лин"]->Points->Clear();
    chart->Series["Факт_знач_точк"]->Points->Clear();
    chart->Series["Прогноз_знач"]->Points->Clear();
     
    for (int i = 0; i < count; ++i)
    {
        
        chart->Series["Факт_знач_лин"]->Points->AddXY(i + 1, y[i]);  
        chart->Series["Факт_знач_точк"]->Points->AddXY(i + 1, y[i]);

       
        if (i >= 10) 
        {
            chart->Series["Прогноз_знач"]->Points->AddXY(i + 1, y[i]); 
        }
    }
}

System::Void Project::CalcForm::CalcForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    array<System::String^>^ m = 
    {
        "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь",
        "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь"
    };

    array<double>^ y_Table = { 78, 105, 115, 154, 173, 221, 258, 63, 95, 115};

    for (int i = 0; i < 12; ++i) 
    {
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
    tCCalcPredictionData->SelectedIndex = 0;
    const double n = Convert::ToInt32(textBoxN->Text);

   
    int y[12];
    int m[12];
    
    for (int i = 0; i < 10; ++i) 
    {
        y[i] = Convert::ToInt32(dGVCalcData->Rows[i]->Cells["NumberOfVisitors"]->Value);
    }

    // m с 2 по 9 
    for (int t = 1; t < 9; ++t) 
    {
        m[t] = calcM(y, t, 3);
        Console::WriteLine(m[t]);
    } 
    Console::WriteLine("-----");
    y[9+1] = Math::Ceiling(m[9-1] + (double)(1 / n) * (y[9] - y[9-1]));
    m[9] = Math::Ceiling((y[8] + y[9] + y[10]) / (double)(n));
    y[10 + 1] = Math::Ceiling(m[10 - 1] + (double)((1 / n)) * (y[10] - y[10 - 1]));
    m[10] = Math::Ceiling((y[9] + y[10] + y[11]) / (double)(n));
    

    for (int i = 0; i < 12; ++i)
    { 
        dGVCalcData->Rows[i]->Cells["NumberOfVisitors"]->Value = y[i].ToString();

        if (i == 0 || i == 11)
        {
            dGVCalcData->Rows[i]->Cells["MovingAverageM"]->Value = "-";
            dGVCalcData->Rows[i]->Cells["AbsoluteErrorDeltaT"]->Value = "-";
            dGVCalcData->Rows[i]->Cells["DeltaTinSquare"]->Value = "-";
            dGVCalcData->Rows[i]->Cells["RelativeError"]->Value = "-";
        }
        else
        {
            // скользящая среднюя 
            dGVCalcData->Rows[i]->Cells["MovingAverageM"]->Value = m[i].ToString();

            // абс ошибка 
            int absoluteError = y[i] - m[i];

            // квадрат абс ошибки 
            int deltaTInSquare = absoluteError * absoluteError;

            // отн ошибка 
            double relativeError = Math::Abs((double)absoluteError) / y[i] * 100;

            // Записываем ошибки в таблицу только для месяцев с 2 по 9 (с февраля по октябрь)
            if (i > 0 && i < 10)
            {
                dGVCalcData->Rows[i]->Cells["AbsoluteErrorDeltaT"]->Value = absoluteError.ToString();
                dGVCalcData->Rows[i]->Cells["DeltaTinSquare"]->Value = deltaTInSquare.ToString();
                dGVCalcData->Rows[i]->Cells["RelativeError"]->Value = relativeError.ToString("0.##"); // 2 знака после запятой
            }
            else
            {
                // 3 ост месяцев ошибки оставляем пустыми
                dGVCalcData->Rows[i]->Cells["AbsoluteErrorDeltaT"]->Value = "-";
                dGVCalcData->Rows[i]->Cells["DeltaTinSquare"]->Value = "-";
                dGVCalcData->Rows[i]->Cells["RelativeError"]->Value = "-";
            }
        }
    }


    // Хранение итог сумм ошибок
    int totalAbsoluteError = 0;
    int totalDeltaTInSquare = 0;
    double totalRelativeError = 0.0;
    double count = 0.0;
    // Проходим с февраля по октябрь
    for (int i = 1; i < 10; ++i)
    {
        
        int absoluteError = Convert::ToInt32(dGVCalcData->Rows[i]->Cells["AbsoluteErrorDeltaT"]->Value);
        int deltaTInSquare = Convert::ToInt32(dGVCalcData->Rows[i]->Cells["DeltaTinSquare"]->Value);
        double relativeError = Convert::ToDouble(dGVCalcData->Rows[i]->Cells["RelativeError"]->Value);

        
        totalAbsoluteError += absoluteError;
        totalDeltaTInSquare += deltaTInSquare;
        totalRelativeError += relativeError;
        count += 1.0;
    }

    // итого
    textBoxAbsoluteErrorDeltaT->Text = totalAbsoluteError.ToString();
    textBoxDeltaTinSquare->Text = totalDeltaTInSquare.ToString();
    textBoxRelativeError->Text = totalRelativeError.ToString("0.##"); // Форматируем с двумя знаками после запятой
    double ForecastAccuracy = totalRelativeError / count;
    Console::WriteLine(ForecastAccuracy);
    textBoxAvgRelativeError->Text = ForecastAccuracy.ToString("0.##");
    labelForecast->Visible = true;
    if (ForecastAccuracy < 10)
    {
        labelForecast->Text = "<10 => точность прогноза высокая";
    }
    else if (ForecastAccuracy >= 10 && ForecastAccuracy < 20)
    {
        labelForecast->Text = "10–20 => точность прогноза хорошая";
    }
    else if (ForecastAccuracy >= 20 && ForecastAccuracy < 50)
    {
        labelForecast->Text = "20–50 => точность прогноза удовлетворительная";
    }
    else
    {
        labelForecast->Text = ">50 => точность прогноза неудовлетворительная";
    }

    DrawForecastChart(y, 12, chartForecast);
    buttonGraphic->Enabled = true;
}




System::Void Project::CalcForm::buttonGraphic_Click(System::Object^ sender, System::EventArgs^ e)
{
    tCCalcPredictionData->SelectedIndex = 1;
}

System::Void Project::CalcForm::buttonHowCalc_Click(System::Object^ sender, System::EventArgs^ e)
{
    tCCalcPredictionData->SelectedIndex = 2;
    
}




System::Void Project::CalcForm::buttonExit_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
}


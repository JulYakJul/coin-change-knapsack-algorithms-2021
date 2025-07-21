#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "rus");
    const int N = 5; // количество предметов
    const double С = 20; // вместимость рюкзака
    double w[N] = { 56, 32, 43, 12, 90 }; // масса
    double v[N] = { 12, 11, 1, 3, 36 }; // стоимость
    double rassch[4][N]; //массив для расчетов
    double sw = 0; //суммарный вес
    double pay = 0; // суммарная стоимость
    for (int i = 0; i < N; i++)  //подсчет коэффициентов и заполнение строк массива
    {
        rassch[0][i] = (v[i] / w[i]); //расчет стоимости деленной на массу
        rassch[1][i] = w[i]; // масса с индексом i
        rassch[2][i] = v[i]; // стоимость с индексом i
        rassch[3][i] = i + 1;

    }
    for (int i = 0; i < N; i++) //распологаем в порядке убывания
    {
        for (int j = 0; j < N; j++)
        {
            double buffer;
            if (rassch[0][i] > rassch[0][j])
            {
                for (int k = 0; k < 4; k++)
                {
                    buffer = rassch[k][i];
                    rassch[k][i] = rassch[k][j];
                    rassch[k][j] = buffer;
                }

            }
        }
    }
    cout << "Подходящие предметы: ";
    for (int i = 0; i < N; i++) //выводим
    {
        sw += rassch[1][i]; // суммарный вес
        if (sw <= С) // суммарный вес меньше или равен вместимости рюкзака
        {
            cout << rassch[3][i] << " "; // выводим конечный результат
            pay += rassch[2][i]; // выводим суммарную стоимость
        }
        else
        {
            sw -= rassch[1][i]; // иначе суммарный вес
        }
    }
    cout << endl << "Общий вес: " << sw << endl << "Сумма: " << pay << endl << endl;
    
}
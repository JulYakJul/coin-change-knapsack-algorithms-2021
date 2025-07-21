using namespace std;
#include <iostream>
#include <stdio.h>
#include <Windows.h>

int main()
{
    //setlocale(LC_CTYPE, "rus");
    int nominals[] = {5000, 2000, 1000, 500, 200, 100, 50, 10, 5, 2, 1 };
    int sum;
    cout << "Vvedite summu deneg: ";
    cin >> sum;
    int i = 0, amount;
    while (sum > 0) { // пока сумма больше нуля
        if (sum >= nominals[i]) { // и если сумма больше или равна номиналам
            amount = sum / nominals[i]; // делим сумма на подходящий номинал

            cout << "V summe " << amount << " monet nominalom " 
                << nominals[i] << " rub" << endl; // выводим результат расчетов
            sum = sum - amount * nominals[i]; // по мере деления уменьшаем сумму
            i++;
        }
        else {
            i++; // если сумму больше нельзя поделить на номиналы, то заканчиваем
        }
    }
}
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int usernum, count0=0, digit,ndigits=0, sum=0, mid, choice;
    cout << "Введите число: \n";
    cin >> usernum;
    do
    {
        cout << "Выберите действие: \n"
            << "1. Посчитать количество цифр в заданном числе\n"
            << "2. Посчитать сумму цифр числа \n"
            << "3. Определить количество нулей в заданном числе\n"
            << "4. Высчитать среднее арифметическое значение\n"
            << "5. Выход из программы\n";
        cin >> choice;
        if (choice < 1 || choice>5) {
            cout << "Нет такого варианта!\n";
            continue;

        }
        while (usernum > 0) {
            digit = usernum % 10;
            sum += digit;
            ndigits++;
            if (digit == 0) {
                count0++;
            }
            usernum = usernum / 10;
        }
        mid = sum / ndigits;

        switch (choice)
        {
        case 1:
            cout << "Количество цифр в заданном числе = " << ndigits<<endl << endl;
            break;
        case 2:
            cout << "Сумма цифр в заданном числе = " << sum << endl << endl;
            break;
        case 3:
            cout << "Количество нулей в заданном числе = " << count0 << endl<<endl;
            break;
        case 4:
            cout << "Среднее арифметическое = " << mid << endl << endl;
            break;
        }

    } while (choice != 5); 
    {
        cout << "До свидания!\n";
    }
}
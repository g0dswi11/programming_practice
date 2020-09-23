#include <iostream>

/* Задание 4 - Обмен значениями */

using namespace std;
int main()
{
     int a, b, c;
     cout << "4. Обмен значениями" << endl;
     cout << "-- меняем местами (с доп. переменной) --" << endl;
     cout << "Введите a и b: ";
     cin >> a >> b;
     cout << "До: "
          << " a = " << a << "; b = " << b << endl;

     c = a;
     a = b;
     b = c;
     cout << "После: "
          << " a = " << a << "; b = " << b << endl;

     cout << "-- меняем местами (без переменной) --" << endl;
     cout << "Введите a и b (еще раз): ";
     cin >> a >> b;
     cout << "До: "
          << " a = " << a << "; b = " << b << endl;

     a = a + b;
     b = a - b;
     a = a - b;

     cout << "После: "
          << " a = " << a << " "
          << "b = " << b << endl;
     return 0;
}
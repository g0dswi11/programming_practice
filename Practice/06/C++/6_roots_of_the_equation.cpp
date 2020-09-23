#include <iostream>
#include <cmath>

/* Задание 6 - Корни уравнения */

using namespace std;

int main()
{
    cout << "6. Корни уравнения" << endl;
    double a, b, c, x;
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;
    if ((b * b - 4 * a * c) >= 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x1: " << x << endl;
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        cout << "x2: " << x << endl;
    }
    else if ((b * b - 4 * a * c) == 0)
    {
        x = (-1 * b) / (2 * a);
        cout << "x: " << x << endl;
    }
    else
    {
        cout << "Дискриминант меньше 0, корней нет." << endl;
    }

    return 0;
}
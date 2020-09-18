#include <iostream>

/* Задание 3 - Арифметика для разных типов */

using namespace std;
int main()
{
    cout << "3. Арифметика для разных типов" << endl;
    int i1, i2;
    double d1, d2;
    cout << "Ввод переменых: int(1) int(2) double(1) double(2): ";
    cin >> i1 >> i2 >> d1 >> d2;
    cout << "[+] [-] [*] [/]" << endl;
    cout << i1 + i2 << ", " << i1 - i2 << ", " << i1 * i2 << ", " << i1 / i2 << endl;
    cout << d1 + d2 << ", " << d1 - d2 << ", " << d1 * d2 << ", " << d1 / d2 << endl;
    cout << i1 + d2 << ", " << i1 - d2 << ", " << i1 * d2 << ", " << i1 / d2 << endl;
    cout << d1 + i2 << ", " << d1 - i2 << ", " << d1 * i2 << ", " << d1 / i2 << endl;
    return 0;
}
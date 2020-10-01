#include <iostream>

/* Задание 11 - Возведение в степень */

using namespace std;

float piwpow(float base, int power)
/* Caoution! This is fucking recursion! */
{
    return power == 1 ? base : base * piwpow(base, power - 1);
}

int main()
{
    cout << "11. Возведение в степень" << endl;
    float base;
    int power;
    cout << "Основание: ";
    cin >> base;
    cout << "Степень: ";
    cin >> power;

    cout << piwpow(base, power) << endl;
    return 0;
}

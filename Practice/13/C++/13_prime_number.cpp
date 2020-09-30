#include <iostream>
#include <cmath>

/* Задание 13 - Простое число */

using namespace std;

int main()
{
    cout << "13. Простое число" << endl;

    int n;
    cout << "Введите число: ";
    cin >> n;

    float e = sqrt((float)n);
    for (int i = 2; i <= e; i++)
    {
        if (n % i == 0)
        {
            cout << "Составное" << endl;
            return 0;
        }
    }
    cout << "Простое" << endl;
    return 0;
}

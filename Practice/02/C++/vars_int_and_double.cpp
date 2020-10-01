#include <iostream>

/* Задание 2 - Переменные INT и DOUBLE */

using namespace std;
int main()
{
    cout << "2. Переменные int и double" << endl;
    int a = 3;
    int b = 3.14;
    double c = 3;
    double d = 3.14;

    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";
    cout << "c: " << c << "\n";
    cout << "d: " << d << "\n";

    cout << "Переменная b = 3, потому что int использует 4 байта памяти (32 битные числа)" << endl;
    cout << "поэтому числа после запятой отбрасываются. Double использует 8 байт памяти и " << endl;
    cout << "может хранить числа двойной точности с плавающей запятой " << endl;
    return 0;
}

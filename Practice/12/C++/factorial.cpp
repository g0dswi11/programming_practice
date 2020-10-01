#include <iostream>

/* Задание 12 - Факториал */

using namespace std;

float fuckt(int n)
/* Caoution! This is fucking recursion! */
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    else
        return n * fuckt(n - 1);
}

int main()
{
    cout << "12. Факториал" << endl;
    int f;
    cout << "Факториал числа: ";
    cin >> f;

    cout << fuckt(f) << endl;
    return 0;
}

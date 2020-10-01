#include <iostream>

/* Задание 14 - Степень двойки */

using namespace std;

int main()
{
    cout << "14. Степень двойки" << endl;

    long n, p = 1, c = 1;
    cout << "n: ";
    cin >> n;

    if (n == 0)
        cout << 0;
    else
    {
        while ((p *= 2) <= n)
            c++;
        cout << c;
    }
    return 0;
}

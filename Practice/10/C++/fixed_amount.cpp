#include <iostream>

/* Задание 10 - Фиксированная сумма */

using namespace std;

int main()
{
    cout << "10. Фиксированная сумма" << endl;

    int s, l1, r1, l2, r2;
    cout << "Введите [s, l1, r1, l2, r2]: ";
    cin >> s >> l1 >> r1 >> l2 >> r2;
    r2 = ((l1 + r2) >= s ? max(s - l1, l2) : r2);
    l1 = ((l1 + r2) <= s ? min(s - r2, r1) : l1);

    if (l1 + r2 == s)
        cout << "x1:" << l1 << " x2:" << r2 << endl;
    else
        cout << -1 << endl;
}

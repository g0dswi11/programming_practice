#include <iostream>

/* Задание 9 - Встреча */

using namespace std;

int get_min(int h, int m)
{
    if (h < 0 || h > 23 || m < 0 || m > 59)
        cout << "[Ошибка] Неверный формат времени!" << endl;
    else
        return h * 60 + m;
}

int main()
{
    cout << "9. Встреча" << endl;
    string s1, s2;

    cout << "Время первого человека: ";
    cin >> s1;
    cout << "Время второго человека: ";
    cin >> s2;

    int t1 = stoi(s1.substr(0, s1.find(":")));
    int t12 = stoi(s1.substr(s1.find(":") + 1, s1.length() - 1));
    int t2 = stoi(s2.substr(0, s2.find(":")));
    int t22 = stoi(s2.substr(s2.find(":") + 1, s2.length() - 1));

    int m1 = get_min(t1, t12);
    int m2 = get_min(t2, t22);

    if (abs(m1 - m2) <= 15)
        cout << "Встреча состоится" << endl;
    else
        cout << "Встреча не состоится" << endl;
}

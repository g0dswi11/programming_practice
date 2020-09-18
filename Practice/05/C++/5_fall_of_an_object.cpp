#include <iostream>

/* Задание 5 - Падение объекта */

using namespace std;
int main()
{
    cout << "5. Падение объекта" << endl;
    int t;
    float x0, v0, g = 9.8;
    cout << "Введите x0 v0 t: ";
    cin >> x0 >> v0 >> t;
    cout << x0 + (v0 * t) - ((g * t * t) / 2) << endl;
    return 0;
}
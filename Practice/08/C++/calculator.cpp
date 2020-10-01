#include <iostream>
#include <cmath>

/* Задание 8 - Калькулятор */

using namespace std;

bool validate(const float a, const char c, const float b)
{
    if (c != '+' && c != '-' && c != '*' && c != '/')
    {
        cout << "[Ошибка] Операция не поддерживается!" << endl;
        return false;
    }
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(32767, '\n');
        return false;
    }
    cin.ignore(32767, '\n');
    return true;
}

float calc(const float a, const char c, const float b)
{
    switch (c)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    default:
        throw logic_error("[Ошибка] Операция не поддерживается!");
    }
}

int main()
{
    cout << "8. Калькулятор" << endl;
    float a, b;
    char c;
    while (1)
    {
        cin.clear();
        cin >> a >> c >> b;
        if (validate(a, c, b))
        {
            cout << calc(a, c, b) << endl;
            break;
        }
        else
        {
            cout << "[Ошибка] Неверный ввод " << endl;
            continue;
        }
    }

    return 0;
}
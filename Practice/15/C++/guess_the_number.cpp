#include <iostream>

/* Задание 15 - Угадай число */

using namespace std;

bool restart()
{
    int a;
    cout << "Хотите начать сначала? (1 - ДА ): ";
    cin >> a;
    if (a == 1)
        return true;
    else
        return false;
}

int main()
{
    cout << "15. Угадай число" << endl;
    int n, cnum;

    while (true)
    {
        int attempts = 5;

        srand(unsigned(time(NULL)));
        cnum = rand() % 100 + 1;

        for (int i = 0; i != attempts; i++)
        {
            cout << "Введите число: ";
            cin >> n;

            if (n == cnum)
            {
                cout << "Поздравляю! Вы угадали" << endl;
                if (restart())
                    continue;
                else
                    break;
            }
            else if (n < cnum)
            {
                cout << "Загаданное число больше" << endl;
            }
            else if (n > cnum)
            {
                cout << "Загаданное число меньше" << endl;
            }
        }
        if (attempts <= 0)
            cout << "Вы проиграли. Было загадано: " << cnum << endl;
        if (restart())
            continue;
        else
            break;
    }
    return 0;
}

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

int game()
{
    int attempts = 5;
    int n, cnum;

    srand(unsigned(time(NULL)));
    cnum = rand() % 100 + 1;

    for (int i = 0; i != attempts; i++)
    {
        cout << "Введите число: ";
        cin >> n;

        if (n == cnum)
        {
            cout << "Поздравляю! Вы угадали" << endl;
            return 0;
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
    cout << "Вы проиграли. Было загадано: " << cnum << endl;
    return 0;
}

int main()
{
    cout << "15. Угадай число" << endl;
    bool inGame = true;

    do
    {
        game();
        inGame = restart();
    } while (inGame);

    return 0;
}

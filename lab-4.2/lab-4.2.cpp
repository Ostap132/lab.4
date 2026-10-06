// Лабораторна робота №4.2
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double xp, xk, dx, x, A, B, y;

    // Введення початкових даних
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    // Вивід шапки таблиці
    cout << fixed;
    cout << "---------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "---------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        // Загальна частина формули: A = |4x - 1|
        A = fabs(4 * x - 1);

        // Умовне розгалуження для B
        if (x < 0)
        {
            B = pow(x, 7) - 2 * x;
        }
        else if (x < 3) // 0 <= x < 3
        {
            B = atan((exp(x) + 1.0) / 8.0);
        }
        else // x >= 3
        {
            B = pow(x, 4) + exp(x * x + 3.0);
        }

        y = A + B;

        // Вивід строчки таблиці
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------------" << endl;

    return 0;
}
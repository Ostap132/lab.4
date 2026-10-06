// Лабороторна робота №4.1
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, i;
    double P;

    cout << "N = "; cin >> N;

    // 1) Спосіб while
    P = 1.0;
    i = N;
    while (i <= 10)
    {
        P *= (i + 1.0 / (i * i)) / sqrt(1.0 + exp(1.0 / i));
        i++;
    }
    cout << P << endl;

    // 2) Спосіб do-while
    P = 1.0;
    i = N;
    do {
        P *= (i + 1.0 / (i * i)) / sqrt(1.0 + exp(1.0 / i));
        i++;
    } while (i <= 10);
    cout << P << endl;

    // 3) Спосіб for (збільшення лічильника i++)
    P = 1.0;
    for (i = N; i <= 10; i++)
    {
        P *= (i + 1.0 / (i * i)) / sqrt(1.0 + exp(1.0 / i));
    }
    cout << P << endl;

    // 4) Спосіб for (зменшення лічильника i--)
    P = 1.0;
    for (i = 10; i >= N; i--)
    {
        P *= (i + 1.0 / (i * i)) / sqrt(1.0 + exp(1.0 / i));
    }
    cout << P << endl;

    return 0;
}
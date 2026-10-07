#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функція перевірки попадання точки в область
bool isHit(double x, double y, double R1, double R2) {
    // Друга чверть: всередині кола R2
    bool part1 = (x <= 0 && y >= 0) && (x * x + y * y <= R2 * R2);

    // Четверта чверть: між колами R2 та R1
    bool part2 = (x >= 0 && y <= 0) && (x * x + y * y >= R2 * R2) && (x * x + y * y <= R1 * R1);

    return part1 || part2;
}

int main() {
    double R1, R2, x, y;

    cout << "Введіть R1: "; cin >> R1;
    cout << "Введіть R2 (R2 < R1): "; cin >> R2;

    cout << "\n=== 1 Спосіб: Введення з клавіатури (10 точок) ===\n";
    for (int i = 0; i < 10; i++) {
        cout << "Точка " << i + 1 << " (x, y): ";
        cin >> x >> y;
        if (isHit(x, y, R1, R2)) {
            cout << "Результат: Попав (yes)\n";
        }
        else {
            cout << "Результат: Не попав (no)\n";
        }
    }

    cout << "\n=== 2 Спосіб: Генерація випадкових координат (10 точок) ===\n";
    srand((unsigned)time(NULL));
    cout << fixed << setprecision(2);

    for (int i = 0; i < 10; i++) {
        // Генерація x, y в інтервалі [-R1; R1]
        x = -R1 + (double)rand() / RAND_MAX * (2 * R1);
        y = -R1 + (double)rand() / RAND_MAX * (2 * R1);

        cout << "x = " << setw(6) << x << ", y = " << setw(6) << y << " -> ";
        if (isHit(x, y, R1, R2)) {
            cout << "yes\n";
        }
        else {
            cout << "no\n";
        }
    }

    return 0;
}
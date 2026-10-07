#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, xp, xk, dx, x, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(12) << "F" << " |" << endl;
    cout << "-------------------------" << endl;

    x = xp;
    while (x <= xk + dx / 2.0) { // додаємо dx/2 для уникнення помилок округлення double
        if (x + c < 0 && a == 0) {
            F = -a * x * x - b;
        }
        else if (x + c > 0 && a != 0) {
            F = x * x - c;
        }
        else {
            if (c != 0 && x != 0) {
                F = x / c + c / x;
            }
            else {
                cout << "|" << setw(7) << setprecision(2) << x
                    << " |" << setw(12) << "не існує" << " |" << endl;
                x += dx;
                continue;
            }
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(12) << setprecision(3) << F << " |" << endl;

        x += dx;
    }

    cout << "-------------------------" << endl;

    return 0;
}
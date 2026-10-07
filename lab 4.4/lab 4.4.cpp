#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double xp, xk, dx, x, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(12) << "y" << " |" << endl;
    cout << "-------------------------" << endl;

    x = xp;
    while (x <= xk + dx / 2.0) {
        if (x < -4.0) {
            y = -2.0;
        }
        else if (x < 0.0) {
            y = 0.25 * x;
        }
        else if (x < 2.0) {
            y = x * x;
        }
        else {
            y = -0.625 * x + 5.25;
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(12) << setprecision(3) << y << " |" << endl;

        x += dx;
    }

    cout << "-------------------------" << endl;

    return 0;
}
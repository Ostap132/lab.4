#include <iostream>

using namespace std;

int main() {
    double a, b, c, d, min_val;
    int count = 0;

    cout << "ввід a = "; cin >> a;
    cout << "ввід b = "; cin >> b;
    cout << "ввід c = "; cin >> c;
    cout << "ввід d = "; cin >> d;

    // Пошук мінімального значення
    min_val = a;
    if (b < min_val) min_val = b;
    if (c < min_val) min_val = c;
    if (d < min_val) min_val = d;

    // Підрахунок кількості мінімальних елементів
    if (a == min_val) count++;
    if (b == min_val) count++;
    if (c == min_val) count++;
    if (d == min_val) count++;

    cout << "u = min(a, b, c, d) = " << min_val << endl;
    cout << "Кількість мінімальних елементів: " << count << endl;

    return 0;
}
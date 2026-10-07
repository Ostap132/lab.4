#include <iostream>
#include <algorithm>

using namespace std;

// Допоміжна функція знаходження мінімуму двох чисел
double min2(double x, double y) {
    return (x < y) ? x : y;
}

// Допоміжна функція знаходження максимуму двох чисел
double max2(double x, double y) {
    return (x > y) ? x : y;
}

// Функція знаходження мінімуму трьох чисел
double min3(double a, double b, double c) {
    return min2(min2(a, b), c);
}

// Функція знаходження максимуму трьох чисел
double max3(double a, double b, double c) {
    return max2(max2(a, b), c);
}

int main() {
    double a, b, c, u;

    cout << "Введіть a: "; cin >> a;
    cout << "Введіть b: "; cin >> b;
    cout << "Введіть c: "; cin >> c;

    u = min3(a, b, c) + max3(a, b, c);

    cout << "u = min(a, b, c) + max(a, b, c) = " << u << endl;

    return 0;
}
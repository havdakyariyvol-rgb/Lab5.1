#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>
using namespace std;

// Прототип допоміжної функції k(x, y)
double k(const double x, const double y);

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double p, q;
    cout << "Введіть значення p: ";
    cin >> p;
    cout << "Введіть значення q: ";
    cin >> q;

    double res = (k(1 + pow(p, 2), 1 - pow(q, 2)) - pow(k(1, p * q), 2)) / (1 + k(p * q, 1));

    cout << "Результат обчислення виразу: " << res << endl;

    return 0;
}

// Визначення функції k(x, y) для варіанту 3
double k(const double x, const double y)
{
    return (sin(x) / (pow(x, 2) + pow(y, 2))) + (cos(y) / (1 + abs(x * y)));
}
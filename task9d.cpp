#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x, y;
    cout << "Введите координаты\n";
    cout << "Введите данные\nx = "; cin >> x; cout << "y = "; cin >> y;
    if (x <= 1 && x >= 0 && y >= 0 && y <= 2 && -2.0 * x + 2 <= y) {
        cout << "Точка принадлежит заштрихованной области";
    }
    else{
        cout << "Точка не принадлежит заштрихованной области";
    }
    return 0;
}
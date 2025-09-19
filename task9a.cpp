#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x,y;
    cout << "Введите данные\nx = "; cin >> x; cout << "y = "; cin >> y;
    if ((x >= -2 && x <= 0.0) && (y <= 1.0 && y >= 0.0)) {
        cout << "Точка принадлежит заштрихованной области";
    } 
    else{
        cout << "Точка не принадлежит заштихованной области";
    }
}
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x, y, z, rb;
    rb = 0;
    cout << "Введите стороны треугольника\nx = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;
    if (x + y > z && x + z > y && z + y > x){
        if (x == y == z){
            cout << "Треугольник равносторонний";
        }
        else {
            if (x == y || y == z || z == x){
            cout << "Треугольник равнобедренный";
            rb = 1;
            }
        if (pow(x,2) + pow(y,2) == pow(z,2) || pow(x,2) + pow(z,2) == pow(y,2) || pow(z,2) + pow(y,2) == pow(x,2)){
            if (rb == 1){
                cout << "и прямоугольный";
                }
            else{
                cout << "Треугольник прямоугольный";
                }
            }
        }
    }
    else cout << "Треугольник не существует";
}
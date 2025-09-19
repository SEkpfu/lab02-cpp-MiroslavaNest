#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double r, a, b, d, z, c;
    cout << "Введите радиус торта: "; cin >> r;
    d = 2*r;
    cout << "Введите высоту торта: "; cin >> z;
    cout << "Введите размеры коробки:\na = "; cin >> a; cout << "b = "; cin >> b;
    cout << "Введите высоту коробки: "; cin >> c;
    if (d <= a && d <= b && z <= c){
        cout << "Торт уместится в коробку!";
    }
    else{
        cout << "Торт не уместится в коробку!";
    }

}
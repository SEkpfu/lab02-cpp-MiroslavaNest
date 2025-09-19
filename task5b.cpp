#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x, y, z, a, b;
    cout << "Введите длину кирпича: "; cin >> x;
    cout << "Введите ширину кирпича: "; cin >> y;
    cout << "Введите высоту кирпича: "; cin >> z;
    cout << "Введите размеры прямоугольника:\na = "; cin >> a; cout << "b = "; cin >> b;
    if ((x <= a && y <= b) || (y <= a && x <= b)){
        cout << "Кирпич сможет пройти через прямоугольник!";
    }
    else if((y <= a && z <= b) || (z <= a && y <= b)){
        cout << "Кирпич сможет пройти через прямоугольник!";
    }
    else if((x <= a && z <= b) || (z <= a && x <= b)){
        cout << "Кирпич сможет пройти через прямоугольник!";
    }
    else{
        cout << "Кирпич НЕ сможет пройти через прямоугольник!";
    }
}
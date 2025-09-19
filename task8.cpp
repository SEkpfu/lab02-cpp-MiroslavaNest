#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x,y;
    cout << "Введите координаты\nx = "; cin >> x; cout << "y = "; cin >> y;
    double r1 = 2; double r2 = 4;
    if (pow(x,2) + pow(y,2) <= pow(r1,2)){
        cout << "Вы получили 10 очков!";
    }
    else if (pow(x,2) + pow(y,2) >= pow(r1,2) && pow(x,2) + pow(y,2) <= pow(r2,2)){
        cout << "Вы получили 5 очков!";
    }
    else{
        cout << "Вы не папали в мишень и получили 0 очков";
    }
}
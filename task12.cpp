#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int x, y, z, sum10, cht, sred, nmin = 0;
    cout << "Введите 3 числа\nx = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "z = "; cin >> z;
    sum10 = 0;
    if (x > 10){
        sum10 = sum10 + x;
    }
    if (y > 10){
        sum10 = sum10 + y;
    }
    if (z > 10){
        sum10 = sum10 + z;
    }
    cout << "a) Сумма чисел, которые больше 10: " << sum10 << endl;
    cht = 0;
    if (x % 2 == 0) {cht = cht + 1;}
    if (y % 2 == 0) {cht = cht + 1;}
    if (z % 2 == 0) {cht = cht + 1;}
    cout << "b) Количество чётных чисел: " << cht << endl;
    if (x < y < z || z < y < x){sred = y;}
    else if (y < x < z || z < x < y) {sred = x;}
    else if (x < z < y || y < z < x) {sred = z;}
    cout << "c) Среднее из этих чисел: " << sred << endl;
    if (x < y) {
        nmin = 1;}
    else{ 
        nmin = 2; }
    if ((nmin == 1 && z < x) || (nmin == 2 && z < y)) {
        nmin = 3;}
    cout << "d) Номер наименьшего из чисел: " << nmin;
}
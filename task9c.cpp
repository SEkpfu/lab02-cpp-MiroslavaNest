#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x,y;
    cout << "Введите данные\nx = "; cin >> x; cout << "y = "; cin >> y;
    double r1 = 3; double r2 = 6;
    if (x >= 0){
        if ((pow(x,2) + pow(y,2) >= pow(r1,2)) && (pow(x,2) + pow(y,2) <= pow(r2,2))){ 
            cout << "Точка принадлежит заштрихованной области";}
        else{ 
            cout << "Точка не принадлежит заштрихованной области";}
    }
    else{
        cout << "Точка не принадлежит заштрихованной области";
    }

}
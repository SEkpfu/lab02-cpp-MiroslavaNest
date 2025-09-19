#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    char znak;
    double a,b;
    cout << "Введите выражение в формате 'a знак b'" << endl;
    cout << "Введите a: "; cin >> a;
    cout << "Введите знак выражения (+,-,*): "; cin >> znak;
    cout << "Введите b: "; cin >> b;
    switch (znak)
    {
    case '+': cout << a << " + " << b << " = " << a + b; break;
    case '-': cout << a << " - " << b << " = " << a - b; break;
    case '*': cout << a << " * " << b << " = " << a * b; break;
    default: cout << "Неверные данные"; break;
    }
}
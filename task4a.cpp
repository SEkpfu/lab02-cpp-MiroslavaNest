#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int dM, dW;
    cout << "Введите дату: ";
    cout << "День месяца: ";
    cin >> dM;
    cout << "Номер дня в неделе: ";
    cin >> dW;
    if (13 == dM)
        if (5 == dW || 2 == dW)
            cout << "неудачный день ";
}

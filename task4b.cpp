#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int day, dw;
    cout << "Введите день: ";
    cin >> day;
    cout << "Введите номер дня в неделе: ";
    cin >> dw;
    if (day == 13){
        (dw == 2 || dw == 5) ? cout << "Это неудачный день!" : cout <<  "";
    } 
    else if (day == 17){
        (dw == 5) ? cout << "Это неудачный день!" : cout << "";
    }
    return 0;
}
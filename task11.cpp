#include <iostream>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double db, mb, yb, dn, mn, yn;
    int yold, ost;
    cout << "Введите дату рождения\nДень рождения (число от 1 до 31): "; cin >> db;
    cout << "Введите месяц рождения (число от 1 до 12): "; cin >> mb;
    cout << "Введите год рождения (полным числом): "; cin >> yb;
    cout << "Введите сегодняшнюю дату\nДень: "; cin >> dn;
    cout << "Месяц (числом): "; cin >> mn;
    cout << "Год: "; cin >> yn;
    yold = yn - yb;
    if (mn < mb || (mn == mb && dn <= db)){
        yold = yold - 1;
    }
    ost = yold % 10;
    if (ost == 1 && (yold < 11 || yold > 20)){
        cout << "Вам " << yold << " год";
    }
    else if ((ost == 2 || ost == 3 || ost == 4)  && (yold < 11 || yold > 14)){
         cout << "Вам " << yold << " года";
    }
    else {
        cout << "Вам " << yold << " лет";
    }
}
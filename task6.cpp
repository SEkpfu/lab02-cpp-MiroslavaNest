#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int x; //переменная для хранения оценки
    cout << "введите свою оценку: ";
    cin >> x;
    //оператор множественного выбора
    switch (x) {
    case 5: cout << "отлично"; break;
    case 4: cout << "хорошо";
    case 3: cout << "удовлетворительно"; break;
    case 2:
    case 1: cout << "плохо "; break;
    default: cout << "неверныe данные"; break;
    }
    return 0;
}
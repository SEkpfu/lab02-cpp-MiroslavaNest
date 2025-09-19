#include <iostream>

using namespace std;

int main(){
    setlocale(0, "");
     double a1, b1, a2, b2;
    cout << "Enter the sides of the 1st rectangle \n";
    cout << "a1= "; cin >> a1;
    cout << "b1= "; cin >> b1;
    cout << "Enter the sides of the 2nd rectangle \n";
    cout << "a2= "; cin >> a2;
    cout << "b2= "; cin >> b2;

    double s1, s2;
    s1 = a1 * b1;
    s2 = a2 * b2;
    if (s1 > s2){
        cout << "max area of the first one, S= " << s1;
    }
    else if (s2 > s1){
        cout << "max area of the second one, S= " << s2;
    }
    else {
        cout << "The areas of the rectangles are equal, S = " << s1;
    }
    return 0;
}

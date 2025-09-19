#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x = 0;
    cout << "Enter x: ";
    cin >> x;
    if (x == 0){
        cout << "This is not a numeric value";
    }
    else {
     
        if (x <= -2) {
            cout << "f(x) = 0";
        }
        else if (-2 < x <= 10) {
            cout << "f(x) = " << pow(x,2) + 4*x + 5;
        }
        else {
            cout << "f(x) = " <<  1/(pow(x,2) + 4*x - 5);
        }
        }

}
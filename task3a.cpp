#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x;
    cout << "Enter x: ";
    cin >> x;
    if (x <= -2){
        cout << "f(x) = 0";      // "if" 1st time
    }
    else if (-2 < x <= 10){
        cout << "f(x) = " << pow(x,2) + 4*x + 5; //"if" 2nd time
    }
    else {
        cout << "f(x) = " << 1/(pow(x,2) + 4*x - 5); //There aren't "if"
    }
}


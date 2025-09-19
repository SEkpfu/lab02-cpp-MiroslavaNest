#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a == 0){
        cout << "The number is 0";
    }
    else if (a < 0){
        cout << "The nuber is negative" << endl;
    }
    else if (a > 0){
        cout << "The number is positive" << endl;
    }
    (a % 2 == 0) ? cout << "The number is even" : cout << "The number is odd";
}

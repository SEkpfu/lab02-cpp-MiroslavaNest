#include <iostream>

using namespace std;

// int main(){
//     double a1, b1, s1, a2, b2, s2, a3, b3, s3;
//     cout << "Enter the sides of the 1st rectangle \n";
//     cout << "a1 = "; cin >> a1;
//     cout << "b1 = "; cin >> b1; 
//     cout << "Enter the sides of the 2nd rectangle \n";
//     cout << "a2 = "; cin >> a2;
//     cout << "b2 = "; cin >> b2;
//     cout << "Enter the sides of the 3rd rectangle \n";
//     cout << "a3 = "; cin >> a3;
//     cout << "b3 = "; cin >> b3;
//     s1 = a1 * b1;
//     s2 = a2 * b2;
//     s3 = a3 * b3;
//     if (s1 > s2 && s1 > s3){
//         cout << "max area of the first one, S= " << s1;
//     }
//     else if (s2 > s3){
//         cout << "max area of the second one, S= " << s2;
//     }
//     else {
//         cout << "max area of the third one, S= " << s3;
//     }

// }


// int main(){
//     double a1, b1, s1, a2, b2, s2, a3, b3, s3;
//     cout << "Enter the sides of the 1st rectangle \n";
//     cout << "a1 = "; cin >> a1;
//     cout << "b1 = "; cin >> b1; 
//     cout << "Enter the sides of the 2nd rectangle \n";
//     cout << "a2 = "; cin >> a2;
//     cout << "b2 = "; cin >> b2;
//     cout << "Enter the sides of the 3rd rectangle \n";
//     cout << "a3 = "; cin >> a3;
//     cout << "b3 = "; cin >> b3;
//     s1 = a1 * b1;
//     s2 = a2 * b2;
//     s3 = a3 * b3;
//     double max1 = max(s1,s2), max2 = max(s2,s3);
//     double max0 = max(max1,max2);
//     if (s1 == max0){
//         cout << "max area of the first one, S= " << s1;
//     }
//     else if (s2 == max0){
//         cout << "max area of the second one, S= " << s2;
//     }
//     else if (s3 == max0){
//         cout << "max area of the third one, S= " << s3;
//     }

// }
 
int main(){
    double a1, b1, s1, a2, b2, s2, a3, b3, s3;
    cout << "Enter the sides of the 1st rectangle \n";
    cout << "a1 = "; cin >> a1;
    cout << "b1 = "; cin >> b1; 
    cout << "Enter the sides of the 2nd rectangle \n";
    cout << "a2 = "; cin >> a2;
    cout << "b2 = "; cin >> b2;
    cout << "Enter the sides of the 3rd rectangle \n";
    cout << "a3 = "; cin >> a3;
    cout << "b3 = "; cin >> b3;
    s1 = a1 * b1;
    s2 = a2 * b2;
    s3 = a3 * b3;
    (s1 > s2 && s1 > s3) ? cout << "max area of the first one, S= " << s1 : cout << "";
    (s2 > s1 && s2 > s3) ? cout << "max area of the second one, S= " << s2 : cout << "";
    (s3 > s1 && s3 > s2) ? cout << "max area of the third one, S= " << s3 : cout << "";
}


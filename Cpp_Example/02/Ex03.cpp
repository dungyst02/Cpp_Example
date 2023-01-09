// Program: Assigment_01 - Ex03
// Author: Nguyen Van Dung - 20203877
// Date: 25/11/2022

//  Write a program that accepts two integer values typed in by the user.
//  Display the result of dividing the first integer by the second,
//   to three-decimal-place accuracy. Remember to have the program check fordivision by zero.

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    cout << "\nThis is Assignment02 - Ex 03";

    int a, b;
    cout << "\na = ";
    cin >> a;
    cout << "\nb = ";
    cin >>b;
    float c;
    if(b == 0) return 0;
    else {
        c = (float)a/ b;
         
        cout << "\n" << round(c * 1000) / 1000;

    }
}
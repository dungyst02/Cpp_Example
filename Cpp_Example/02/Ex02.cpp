// Program: Assigment_01 - Ex02
// Author: Nguyen Van Dung - 20203877
// Date: 25/11/2022
// Write a program that asks the user to type in two integer values at theterminal. 
//Test these two numbers to determine if the first is evenlydivisible by the second, 
//and then display an appropriate message at theterminal.

#include<iostream>
using namespace std;

int main() {
    cout << "\nThis is Assignment02 - Ex 02";
    int a, b;
    cout << "\na = ";
    cin >> a;
    cout << "\nb = ";
    cin >>b;
    if(a % b == 0) {
        cout <<"true";
    } else {
        cout << "false";
    }
    return 0;
}
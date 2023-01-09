// Program: Assigment_01 - Ex04
// Author: Nguyen Van Dung - 20203877
// Date: 29/11/2022

#include<iostream>
#include<cstring>


using namespace std;

int main() {
    cout << "\nThis is Assignment02 - Ex 04";
    cout << "\n+     -     *     /     s     e\n";
    char c;
    double x, xTemp;
    
    while(1){
    cin >> x;
    cin >> c;
    
    if(c == 's') {
        xTemp = x;
        cout << "\n= " << xTemp;
    }
    else if(c == '+') {
        xTemp += x;
        cout << "\n= " << xTemp;
    }
    else if(c == '-') {
        xTemp -= x;
        cout << "\n= " << xTemp;
    }
    else if(c == '*') {
        xTemp *= x;
        cout << "\n= " << xTemp;
    }
    else if(c == '/') {
        xTemp /= x;
        cout << "\n= " << xTemp;
    }
    else if(c == 'e'){
        cout << "\n= " << xTemp;
        cout << "\nEnd of Calculations.";
        break;
    } else {
        cout <<"Error!";
        break;
    }}
    

    return 0;
}
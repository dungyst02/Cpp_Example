// Program: Assigment_01 - Ex07
// Author: Nguyen Van Dung - 20203877
// Date: 29/11/2022

#include<iostream>
#include<math.h>
using namespace std;


int main() {
    cout << "\nThis is Assignment02 - Ex 07";
    int p, d;
    bool isPrime ;
    cout <<"2 ";
    for(int p = 3; p <= 49 ; p += 2 ) {
        isPrime = 1;
        for(d = 2; d < sqrt(p) ; d ++) {
            if(p % d == 0) {
                isPrime = 0;
                break;
            }
           
        }
         if(isPrime != 0 ) {
                cout << p << " ";
            }
    }
    return 0;
}
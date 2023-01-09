// Program: Assigment_03 - Ex04
// Author: Nguyen Van Dung - 20203877
// Date: 12/07/2022
#include<iostream>
using namespace std;
int main() {
    float a[10];
    float sum = 0;
    for(int i = 0; i < 10; i++) {
        cin >> a[i];
        sum += a[i];
    }
    cout << "\nAverage = " << (float)sum / 10;
    return 0;
}
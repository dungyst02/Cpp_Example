// Program: Assigment_01 - Ex16
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
#include<iostream>
using namespace std;

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main() {
    //Bai 16
    cout << "\nThis is Assignment_1 - Ex 16.";
    int n;
    cout << "\nNhap n:";
    cin >> n;
    cout << "\nDay so Fibanacci: ";
    for(int i = 0; i <= n; i++){
        cout << Fibonacci(i) << " ";
    }
    return 0;
}
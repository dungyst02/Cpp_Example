// Program: Assigment_01 - Ex02
// Author: Nguyen Van Dung - 20203877
// Date: 29/11/2022
#include<iostream>
#include<string>
using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
int main() {
    cout << "\nThis is Assignment02 - Ex 05";
    int n;
    cout << "\nn = ";
    cin >> n;
    auto n_str = std::to_string(n);
    reverseStr(n_str);
    cout << "\n" << n_str;
    return 0;
}
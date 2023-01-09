// Program: Assigment_01 - Ex06
// Author: Nguyen Van Dung - 20203877
// Date: 25/11/2022

#include <iostream>
#include<vector>
using namespace std;

string translateNum(int n) {
    switch (n)
    {
    case 0:
        return "Zero";
        break;
    case 1:
        return "One";
        break;
    case 2:
        return "Two";
        break;
    case 3:
        return "Three";
        break;
    case 4:
        return "Four";
        break;
    case 5:
        return "Five";
        break;
    case 6:
        return "Six";
        break;
    case 7:
        return "Seven";
        break;
    case 8:
        return "Eight";
        break;
    case 9:
      return "Nine";
        break;   
    }
}
int main() {
    cout << "\nThis is Assignment02 - Ex 06";
    int n;
   
    cout << "\nn = ";
    cin >> n;
    vector<string> str;
    while(n != 0) {
        str.push_back(translateNum(n %   10)); 
        n /= 10;
    }
    for(int i = str.size(); i >= 0 ; i--) {
        cout << str[i];
    }
    
    return 0;
}

// Program: Assigment_01 - Ex17
// Author: Nguyen Van Dung - 20203877
// Date: 18/11/2022
// Viết chương trình đếm tất cả các số n (0 < n <10000) sao cho n chỉ gồm các chữ số 1, 2, 3, 4 và n 
// chia hết cho 3
#include<iostream>
using namespace std;

int main() {
    cout << "\nThis is Assignment_1 - Ex 17.";
    int x, count = 9999;
    for(int i = 1; i < 10000; i++){
        int temp = i;
        while(temp != 0){
        x = temp % 10;
        temp /= 10;
        if(x < 1 || x > 4 || i % 3 != 0 ){
             count--;
             break;
        } 
    }   
    }
    cout << "\nSo cac so thoa man de bai la: " << count;
    return 0;
}
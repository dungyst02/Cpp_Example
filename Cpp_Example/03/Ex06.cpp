// Program: Assigment_03 - Ex06
// Author: Nguyen Van Dung - 20203877
// Date: 12/07/2022


#include <iostream>
using namespace std;
int main() {
  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  cout << "\nEnter the number of terms: ";
  cin >> n;
  cout << "\nFibonacci Series: " << t1 << " " << t2 << " ";
  for (i = 3; i <= n; ++i) {
    cout << nextTerm << " ";
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}

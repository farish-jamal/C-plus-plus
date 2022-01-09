#include <bits/stdc++.h>
using namespace std;

int main(){
  int num = 5;

  cout<< num << endl;
 
  // address of operator -&
  cout << "address of num" << &num << endl;

  int *ptr = &num;
  cout<< ptr <<endl;
  cout<< *ptr <<endl;
 return 0;
}
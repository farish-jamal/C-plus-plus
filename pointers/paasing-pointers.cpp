#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}

int main(){
  int a = 2, b =4;
  // int *aptr = &a;
  // int *bptr = &b;
  swap(&a , &b); // Call by refrence
  cout<<a<<b<<endl;
 return 0;
}
#include <bits/stdc++.h>
using namespace std;

int signBit(int a){
 int count = 0;
 while(a != 0){
  int bit = a&1;
  if(bit == 1){
   count++;
  }
  a = a/2;
 }
 return count;
}

int main(){
  int a,b;
  cin >> a >> b;
  int first = signBit(a);
  int second = signBit(b);
  cout<< first + second;
 return 0;
}
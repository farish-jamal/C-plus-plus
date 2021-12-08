#include <bits/stdc++.h>
using namespace std;

bool evenOdd(int a){
 if(a&1){
  return 0;
 }
 return 1;
}

int main(){
 int a;
 cin >> a;
 bool found = evenOdd(a);
 if(found){
  cout<<"Even";
 }else{
  cout<<"Odd";
 }
 return 0;
}
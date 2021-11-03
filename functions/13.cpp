#include<iostream>
#include<cmath>
using namespace std;

int binary(int n){
  float binary_num = 0;
   int i = 0;
   while(n != 0){
     int lastdigit = n%16;
     binary_num = binary_num + (lastdigit * (float)pow(10, i));
     n = n/16;
     i++;
   }
   return binary_num;
}

int main(){
    int n, res;
    cin>>n;
    res = binary(n);
    cout<<res;
}
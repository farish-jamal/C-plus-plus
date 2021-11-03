#include<iostream>
#include<cmath>
using namespace std;



int binary(int n){
   int binary_num = 0;
   int i = 0;
   while(n != 0){
     int lastdigit = n%10;
     binary_num = binary_num + lastdigit * pow(8, i);
     n = n/10;
     i++;
   }
   // cout<<binary_num<<endl;
   return binary_num;
}

int main(){
    int n, res;
    cin>>n;
    res = binary(n);
    cout<<res;
}
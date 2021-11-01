#include<iostream>
using namespace std;

int main(){
   int n, i = 1, pos = 0, neg = 0, zero = 0;
   while(n != -1){
       if(n<0){
          neg++;
       }
       else if(n>0){
           pos++;
       }
       else{
           zero++;
       }
    cout<<"Enter a number";
    cin>>n;
    i++;
   }
   cout<<"Post"<<":"<<pos;
   cout<<"Neg"<<":"<<neg;
   cout<<"Zero"<<":"<<zero;
}
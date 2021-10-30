//Take input of age of 3 people by user and determine oldest and youngest among them.

#include<iostream>
using namespace std;

int main(){
   int a1,a2,a3;
   cin>>a1>>a2>>a3;
   if(a1>a2){
       if(a1>a3){
           cout<<a1;
       }else{
           cout<<a3;
       }
   }else if(a2>a1){
       if(a2>a3){
           cout<<a2;
       }else{
           cout<<a3;
       }
   }else{
       cout<<a3;
   }
   return 0;
}
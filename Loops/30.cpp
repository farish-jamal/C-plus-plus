#include<iostream>
using namespace std;

int main(){
    int n, fac = 1;
    cin>>n;

   for(int i=1; i<=n; i++){
       if(n==0){
           fac = 1;
       }else{
        fac = fac * i;
       }
   }
   cout<<fac;
}
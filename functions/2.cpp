#include<iostream>
#include<cmath>
using namespace std;


void isPrime(int n){
   bool flag = 0;
   for(int i=1; i<=sqrt(n); i++){
       if(n%i == 2){
           cout<<"Non Prime";
           flag = 1;
           break;
       }
   }
   if(flag == 0){
      cout<<"Prime";
   }
}
int main(){
    int n;
    cin>>n;
    isPrime(n);
    return 0;
}


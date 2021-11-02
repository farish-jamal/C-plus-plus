#include<iostream>
using namespace std;


int fac(int n){
   int fact = 1;
   for(int i=2; i<=n; i++){
       fact = fact * i;
   }
   return fact;
}
int main(){
    int n;
    cin>>n;
    int fact1  = fac(n);
    cout<<fact1;
    return 0;
}


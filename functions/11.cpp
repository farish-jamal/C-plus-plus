
#include<iostream>
using namespace std;


int fac(int n){
    int factorial = 1;
    for(int i=2; i<=n; i++){
        factorial = factorial * i;
    }
    return factorial;
}
int main(){
   int n;
   float comb;
   cin>>n;
   for(int i=0; i<n; i++){
     for(int j=0; j<=i; j++){
       cout<<fac(i)/(fac(j)*fac(i-j))<<" ";
     }
     cout<<endl;
   }
}
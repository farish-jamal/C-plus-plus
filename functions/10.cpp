
#include<iostream>
#include<cmath>
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
   for(int i=1; i<=n; i++){
      comb += pow(i, i)/fac(i);
   }
   cout<<comb;
}

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
   for(int i=1; i<=n; i++){
      comb += (float)1/fac(i);
   }
   cout<<comb;
}
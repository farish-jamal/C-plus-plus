
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
   int n, r;
   cin>>n>>r;
   float comb = fac(n)/fac(n-r);
   cout<<comb;
}
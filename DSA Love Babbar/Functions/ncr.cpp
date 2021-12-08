#include <bits/stdc++.h>
using namespace std;

int factorial(int fac, int n){
  for(int i=1; i<=n; i++){
   fac = fac * i;
  }
  return fac;
}

int nCr(int n, int r){
  int fac = 1;
  int num  = factorial(fac, n);
  int deno = factorial(fac, r) * factorial(fac, (n-r));
  return num/deno;
}

int main(){
 int n, r;
 cin >> n >> r;
 cout<<nCr(n, r);
 return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a = 20;
  int *p = &a;
  cout<<*p<<endl;

  int **b = &p;
  cout<<*b<<endl;
  cout<<**b<<endl;
 return 0;
}
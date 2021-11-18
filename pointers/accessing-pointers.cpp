#include <bits/stdc++.h>
using namespace std;

int main(){
  int a;
  cin>>a;
  int *aptr = &a;
  
  cout<<a<<" "<<aptr<<" "<<*aptr;
 return 0;
}
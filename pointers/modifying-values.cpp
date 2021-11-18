#include <bits/stdc++.h>
using namespace std;

int main(){
  int a;
  cin>>a;
  int *aptr = &a;
  
  cout<<*aptr;
  *aptr = 20;
  cout<<a;
 return 0;
}
#include<iostream>
#include<cmath>
using namespace std;


void reverse(int n){

  int rev_num = 0;
  while (n>0)
  {
    int lastdigit = n%10;
    rev_num = rev_num * 10 + lastdigit;
    n = n/10;
  }
  cout<<rev_num;
}
int main(){
    int n;
    cin>>n;
    reverse(n);
    return 0;
}


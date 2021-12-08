#include <iostream>
#include<math.h>
using namespace std;

// By acessing the digits.
void logic1(int n){
 int ans = 0;
 int i = 0;
  while(n != 0){
   int digit = n%2;
   ans = (digit * (int) (pow(10, i)+ 0.5)) + ans;
   n = n/2;
   i++;
  }
 cout<<ans<<" ";
}

// By acessing the bits.
void logic2(int n){
 int ans = 0;
  int i = 0;
  while(n != 0){
   int bit = n & 1;
   ans = (bit * (int) (pow(10, i)+0.5)) + ans;
   n = n >> 1;
   i++;
  }
 cout<<ans<<" ";
}

int main(){
  int n;
  cin>>n;
  logic1(n);
  logic2(n);
 return 0;
}
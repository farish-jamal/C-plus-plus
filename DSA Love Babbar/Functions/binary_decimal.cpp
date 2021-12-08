#include <iostream>
#include<math.h>
using namespace std;

void logic(int n){
 int ans = 0;
 int i = 0;
  while(n != 0){
   int digit = n%10;
   if(digit == 1){
     ans += digit * (int) (pow(2, i)+0.5);
   }
   n = n/10;
   i++;
  }
 cout<<ans<<" ";
}

int main(){
  int n;
  cin>>n;
  logic(n);
 return 0;
}
#include<iostream>
using namespace std;


int arrangeCoins(int n) {
 int lb=1,ub=n;
 long mid=0;
  while(lb<=ub){
   mid=lb+(ub-lb)/2;
   cout<<mid<<endl;
   long total=(mid*(mid+1))/2;
    if(total==n)
     return mid;
    else if(total<n)
     lb=mid+1;
    else
     ub=mid-1;
  }
 return ub;
}
int main(){
 int n = 8;
 int res = arrangeCoins(n);
 cout<<res<<" ";
 return 0;
}
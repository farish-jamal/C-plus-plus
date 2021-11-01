#include<iostream>
#include<math.h>
using namespace std;

int main(){
   int m,n;
   cin>>m>>n;
   int sum = 0;
   while(m<=n){
       sum = sum + m;
       m++;
   }
   cout<<sum;
}
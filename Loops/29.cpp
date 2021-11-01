#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;;
    cin>>n;
    float avg = 0.0;

   for(int i=1; i<=n; i++){
       sum = sum + i;
   }

   avg = (float)sum/n;
   cout<<avg;

}
#include<iostream>
using namespace std;

float sum(int n){
   int num = 1;
   int deno = 1;
   float sum = 0.0;

   for(int i=0; i<n ; i++){
       float num1 = num/deno;
       sum = sum + num1;
       deno++;
   }
   cout<<sum<<endl;
   return sum;
}

int main(){
    int n;
    cin>>n;
    float result = sum(n);
    cout<<result;
    return 0;
}
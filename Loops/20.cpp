#include<iostream>
using namespace std;

int main(){
    int n, sum = 0 ,totalcount = 0;
    float avg;

   while(n != -1){
       totalcount++;
       cout<<"Enter the number";
       cin>>n;
       sum = sum + n;
   }
   int count = totalcount -1;
   int total = sum + 1;
   avg = (float)total/count;
   cout<<endl;
   cout<<avg;
}
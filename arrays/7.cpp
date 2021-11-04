#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int number = 0;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 for(int i=0; i<n; i++){
   number = number * 10 + arr[i];
 }
 cout<<number;
}
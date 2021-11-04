#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int small = INT_MAX;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 for(int i=0; i<n; i++){
  if(arr[i] < small){
   small = arr[i];
  }
 }
 cout<<small;
}
#include<bits/stdc++.h>
using namespace std;

int smallest(int arr[], int small, int n){
 for(int i=0; i<n; i++){
  if(arr[i] < small){
   small = arr[i];
  }
 }
 return small;
}

int main(){
 int n;
 cin>>n;
 int small = INT_MAX;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 cout<<smallest(arr, small, n);
}
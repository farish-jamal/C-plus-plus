#include<bits/stdc++.h>
using namespace std;

int largest(int arr[], int large, int n){
  for(int i=0; i<n; i++){
  if(arr[i] > large){
   large = arr[i];
  }
 }
 return large;
}

int main(){
 int n;
 cin>>n;
 int large = INT_MIN;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 cout<<largest(arr, large, n);
}
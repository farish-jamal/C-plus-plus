#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n, int large){
 int Secondlarge = INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i] != large){
      if(arr[i] > Secondlarge){
        Secondlarge = arr[i];
      }
    }
 }
 cout<<Secondlarge;
}

int largest(int arr[], int n, int large){
    for(int i=0; i<n; i++){
  if(arr[i] > large){
   large = arr[i];
  }
 }
 secondLargest(arr,n,large);
}

int main(){
 int n;
 cin>>n;
 int large = INT_MIN;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 largest(arr, n, large);
}
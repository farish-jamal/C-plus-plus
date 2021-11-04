#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int large = INT_MIN;
 cout<<large;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 for(int i=0; i<n; i++){
  if(arr[i] > large){
   large = arr[i];
  }
 }
 cout<<large;
}
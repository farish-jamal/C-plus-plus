#include<bits/stdc++.h>
using namespace std;


int largest(int arr[],int large,int small,int large_pos,int small_pos, int n){
  for(int i=0; i<n; i++){
  if(arr[i] > large){
   large = arr[i];
   large_pos = i;
  }
  if(arr[i] < small){
   small = arr[i];
   small_pos = i;
  }
 }
 int tempVar;
 tempVar = arr[small_pos];
 arr[small_pos] = arr[large_pos];
 arr[large_pos] = tempVar;
 cout<<small_pos<<endl;
 cout<<large_pos<<endl;
 for(int i=0; i<n; i++){
  cout<<arr[i];
 }
}

int main(){
 int n;
 cin>>n;
 int large = INT_MIN;
 int small = INT_MAX;
 int large_pos;
 int small_pos;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 largest(arr,large,small,large_pos,small_pos,n);
}
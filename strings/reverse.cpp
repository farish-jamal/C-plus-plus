#include <bits/stdc++.h>
using namespace std;

void print(string arr, int n){
  // for(int i=0; i<=n; i++){
  //   cout<<arr[i]<<" ";
  // }
  cout<<arr;
}

void reve(string arr, int end, int start){
  int x = end;
  while(start < end){
     char temp = arr[start];
     arr[start] = arr[end];
     arr[end] = temp;
     start++;
     end--;
  }
  print(arr , x);
}

int main(){
  int n;
  cin>>n;
  string arr;
  cin>>arr;
  // for(int i=0; i<n; i++){
  //    cin>>arr[i];
  // }
  reve(arr, n-1, 0);
  return 0;
}
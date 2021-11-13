#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
 for(int i=0; i<n; i++){
  for(int j=1; j<n-i; j++){
    if(arr[j] < arr[j-1]){
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
    }
  }
 }
 cout<<arr[k-1];
 return 0;
}
#include <bits/stdc++.h>
using namespace std;

int maxtilli(int arr[], int n){
  int mx = INT_MIN;
  for(int i=0; i<n; i++){
   // LOGIC FIRST : 
   // mx = max(mx, arr[i]);
   // cout<<mx<<endl;

   // LOGIC SECOND : 
   if(arr[i] > mx){
     mx = arr[i];
     cout<<mx<<endl;
   }else{
    cout<<mx<<endl;
   }
  }
  return mx;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i <n ; i++){
   cin>>arr[i];
  }
  cout<<maxtilli(arr, n);
 return 0;
}
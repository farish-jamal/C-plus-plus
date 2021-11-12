// SORTING IN AN ARRAY (Bubble Sort):
#include <bits/stdc++.h>
using namespace std;

void sortingarr(int arr[], int n){
  for(int i=0; i<n; i++){
   for(int j=1; j<n-i; j++){
     if(arr[j]==arr[j-1]){
       int temp = arr[j];
       arr[j] = arr[j-1];
       arr[j-1] = temp;
     }
   }
  }
  for(int i=0; i<n; i++){
   cout<<arr[i]<<" ";
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
   cin>>arr[i];
  }
  sortingarr(arr, n);
 return 0;
}
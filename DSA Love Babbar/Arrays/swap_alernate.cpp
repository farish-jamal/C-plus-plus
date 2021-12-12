#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
   for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int swapArr(int arr[], int n){
  for(int i=0; i<n;){
   if(i+1 < n){
    swap(arr[i], arr[i+1]);
   }
  i = i+2;
  }
  printArr(arr,n);
}

int main(){
 int arr[5] = {1,2,7,8,5};
 int arr2[6] = {1,2,3,4,5,6};
 swapArr(arr, 5);
 swapArr(arr2, 6);
 return 0;
}
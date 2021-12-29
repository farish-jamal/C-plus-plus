#include <bits/stdc++.h>
using namespace std;

//Worst case Time Complixity O(n^2);
//Best case Time Complexity O(n^2);
//Space Complexity is O(1);

int printArr(int arr[], int n){
 for(int i = 0; i<n; i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
}

int insertionSort(int arr[], int n){
 for(int i=0; i<n-1; i++){
  int minIndex = i;
  for(int j = i+1; j<n; j++){

   if(arr[minIndex] > arr[j])
    minIndex = j;
  }
  
  swap(arr[minIndex], arr[i]);
 }
 printArr(arr,n);
}
int main(){
 int arr[6] = {17,4,34,55,1,4};

 insertionSort(arr,6);
 return 0;
}
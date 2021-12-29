#include <bits/stdc++.h>
using namespace std;

//Worst case Time Complixity O(n^2);
//Best case Time Complexity O(n);
//Space Complexity is O(1);

int printArr(int arr[], int n){
 for(int i = 0; i<n; i++){
  cout<<arr[i]<<" ";
 }
 cout<<endl;
}

int bubbleSort(int arr[], int n){
 for(int i=1; i<n; i++){
   bool flag = false;
    for(int j=0; j<n-i; j++){
     if(arr[j]>arr[j+1]){
      swap(arr[j],arr[j+1]);
       flag = true;
     }
    }
    if(flag == false)
     break;
 }
 printArr(arr,n);
}
int main(){
 int arr[6] = {17,4,34,55,1,4};

 bubbleSort(arr,6);
 return 0;
}  
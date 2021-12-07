#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n){
 // Printing the reversed array.
  for(int i=0; i<n; i++){
   cout<<arr[i]<<" ";
  }
}

void reverse(int arr[], int n){
 // Intializing local variables.
  int start = 0;
  int end = n-1;
 
 // Looping in array and swaping the elements.
  while(start <= end){
     swap(arr[start], arr[end]); //Predefined functions.
     start++;
     end--;
  }

  //Calling print array function.
  printArr(arr, n);
}

int main(){
  int s;
  cin>>s;
  int arr[100]; //Never initlize an array with variable.

  //Inseting elements in array.
  for(int i=0; i<s; i++){
   cin>>arr[i];
  }

 //Calling reverse function.
 reverse(arr, s);
 return 0;
}
#include <bits/stdc++.h>
using namespace std;

int search(int arr[3][3], int target){
 for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
    if(arr[i][j] == target){
     return true;
    }
  }
 }
 return false;
}

int main(){
 int arr[3][3];
 for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
   cin>>arr[j][i];
  }
 }

 // Printing arrays : 
 for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
   cout<<arr[i][j]<<" ";
  }
  cout<<endl;
 }
 // Taking target as input : 
  int target;
  cout<<"Enter target"<<endl;
  cin>>target;
  cout<<search(arr, target);
 return 0;
}
// REVERSING A ARRAY :
#include<iostream>
using namespace std;

void reverseFunc(int arr[], int n){
  for(int i=n; i>=0; i--){
    cout<<arr[i]<<endl;
  }
}

int main(){
 int n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++){
   cin>>arr[i];
 }
 reverseFunc(arr, n);
 return 0;
}
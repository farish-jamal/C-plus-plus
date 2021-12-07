#include <bits/stdc++.h>
using namespace std;

void sum(int arr[], int n){
  int sum_of = 0;
  for(int i=0; i<n; i++){
    sum_of += arr[i];
  }
  cout<<sum_of;
}

int main(){
  int s;
  cin>>s;
  int arr[100]; //Never initlize an array with variable.

  //Inseting elements in array.
  for(int i=0; i<s; i++){
   cin>>arr[i];
  }

 //Calling sum function.
 sum(arr, s);
 return 0;
}
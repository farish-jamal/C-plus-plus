#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int large = INT_MIN;
 int Secondlarge = INT_MIN + 1;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 for(int i=0; i<n; i++){
  if(arr[i] > large){
   large = arr[i];
  }
 }
 cout<<large<<endl;;
 for(int i=0; i<n; i++){
    if(arr[i] != large){
      if(arr[i] > Secondlarge){
        Secondlarge = arr[i];
      }
    }
 }
 cout<<Secondlarge;
}
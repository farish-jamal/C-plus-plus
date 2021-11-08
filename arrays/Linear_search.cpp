// LINEAR SEAARCH :
#include<bits/stdc++.h>
using namespace std;

int linerSearch(int arr[], int n, int key){
 int index;
 for(int i=0; i<n;i++){
  if(arr[i] == key){
    index = i;
    return index;
  }
 }
 return -1;
}
int main(){
 int n,key;
 cin>>n>>key;
 int arr[n];
 for(int i=0; i<n; i++){
   cin>>arr[i];
 }
 cout<<linerSearch(arr,n,key);
}
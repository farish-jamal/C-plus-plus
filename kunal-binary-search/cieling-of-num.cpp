// Ceiling of a number.
// arr = [2, 3, 5, 9, 14, 16, 18] ; target = 14

#include<bits/stdc++.h>
using namespace std;

int linerSearch(int arr[], int n, int key){
 int s = 0;
 int e = n;
 while(s<=e){
  int mid = (s+e)/2;
   if(arr[mid] == key){
    return mid;
   }else if(arr[mid]>key){
    e = mid-1;
   }else{
    s = mid+1;
   }
 }
 return arr[s];
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
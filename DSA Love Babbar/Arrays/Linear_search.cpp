#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key){
 for(int i=0; i<size; i++){
  if(arr[i] == key){
    return true;
  }
 }
 return false;
}

int main(){
  int s,key;
  cin>>s>>key;
  int arr[100]; //Never initlize an array with variable.

  //Inseting elements in array.
  for(int i=0; i<s; i++){
   cin>>arr[i];
  }
 
 bool found = linearSearch(arr, s, key);
 if(found){
  cout<<"Present"<<endl;
 }else{
  cout<<"Not Present"<<endl;
 }
 return 0;
}
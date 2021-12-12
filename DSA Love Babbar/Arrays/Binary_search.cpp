#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){
 
  int start = 0;
  int end = size - 1;
  
  int mid = start/2 + end/2;
  while( start <= end){
    if(arr[mid] == key){
     return mid;
    }
    if(arr[mid] < key){
      start = mid + 1;
    }else{
     end = mid - 1;
    }

    mid = start/2 + end/ 2;
  }
  return -1;
}

int main(){
  int arr[5] = {1,2,3,4,5};

  int index = binarySearch(arr, 5, 3);

  cout <<"Index : "<<index << endl;
 return 0;
}
#include <bits/stdc++.h>
using namespace std;

int rev(int arr[],int end, int start){
  while(start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }

}
int main(){
  int k=3, n = 5, start = 0;
  int arr[] = {1,2,3,4,5};
  rev(arr,n-1, start);
  rev(arr, k-1, start);
  rev(arr, n-1, k);
  for(int i=0; i<n; i++){
   cout<<arr[i];
  }
 return 0;
}
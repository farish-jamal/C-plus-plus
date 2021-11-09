// MIN AND MAX IN A ARRAY :
#include <bits/stdc++.h>
using namespace std;

void minmax(int arr[], int n){
  int min = INT_MAX;
  int max = INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
    if(arr[i] < min){
     min = arr[i];
    }
  }
  cout<<max<<" "<<min;
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
   cin>>arr[i];
  }
  minmax(arr, n);
 return 0;
}
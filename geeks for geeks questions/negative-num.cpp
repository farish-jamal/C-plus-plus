#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

 int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
            cout<<arr[i]<<" "<<arr[j]<<endl;
         }
      }
    }

//   for(int i=0; i<n; i++){
//     for(int j=1; j<n-i; j++){
//     if(arr[j] < arr[j-1]){
//       int temp = arr[j];
//       arr[j] = arr[j-1];
//       arr[j-1] = temp;
//     }
//   }
//  }

 for(int i=0; i<n; i++){
  cout<<arr[i]<<" ";
 }
 return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   int max = INT_MIN;
   int s_max = INT_MIN;

    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   // Approach with sorting :
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-2];

    

    // Without Sorting:
    // for(int i=0; i<=n; i++){
    //     if(arr[i] > max){
    //         max = arr[i];
    //     }
    // }
    // for(int i=0; i<=n; i++){
    //     if(arr[i] != max){
    //         if(arr[i] > s_max){
    //             s_max = arr[i];
    //         }
    //     }
    // }
    // cout<<s_max;
}
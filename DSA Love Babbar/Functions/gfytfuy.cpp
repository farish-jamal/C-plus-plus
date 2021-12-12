#include <iostream>
using namespace std;

int reverse(int arr[], int N, int K, int M){
    int start = M;
    int end = N;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    //Write your code here
    int N;
    cin>>N;
    int arr[1000];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    int K;
    cin>>K;
    reverse(arr,N-1,K,0);
    reverse(arr,N-K-1,K,0);
    reverse(arr,N-1,K,N-K);
    for(int i=0; i<N; i++){
        cout << arr[i]<<" ";
    }
    return 0;
}
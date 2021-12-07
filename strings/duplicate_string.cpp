#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  string arr;
  int index = 0;
  cin>>arr;
  sort(arr.begin(), arr.end());
  for(int i=0; i<n; i++){
   if(arr[i] == arr[i+1]){
      index = i;
   }
  }
  cout<<index;
 return 0;
}
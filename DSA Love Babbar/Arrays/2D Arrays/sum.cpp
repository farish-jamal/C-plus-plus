#include <bits/stdc++.h>
using namespace std;

int main(){
 int arr[3][3];
 for(int i=0; i<3; i++){
  for(int j=0; j<3; j++){
   cin>>arr[j][i];
  }
 }
 
 int maxi = INT_MIN;
 int index = -1;
 for(int i=0; i<3; i++){
  int sum = 0;
  for(int j=0; j<3; j++){
   sum += arr[j][i];
  }
  if(maxi < sum){
   maxi = sum;
   index = i;
  }
  // maxi = max(sum, maxi);
 }
 cout<< maxi <<" "<<index;
 return 0;
}
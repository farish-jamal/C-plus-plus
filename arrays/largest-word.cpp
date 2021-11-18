#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  cin.ignore();
  char arr[n+1];
  cin.getline(arr , n);
  cin.ignore();

  int i = 0;
  int curL = 0, maxL = 0;
  int st = 0, maxSt = 0;
  while(1){

   if(arr[i] == ' ' || arr[i] == '\0'){
     if(curL > maxL){
       maxL = curL;
       maxSt = st;
     }
     curL = 0;
     st = i+1;
   }
   else{
     curL++;
   }
   if(arr[i] == '\0'){
    break;
   }
   i++;
  }
  cout<<maxL<<endl;

  for(i=0; i<maxL; i++){
   cout<< arr[i+maxSt];
  }
 return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
  int arr[]= {1,2,3};
  cout<<*arr<<endl;

  int *ptr = arr;
  for(int i=0; i<3; i++){
   cout<<*(arr + i)<<endl;
    // arr++; //illegal
    // ptr++;
  }

 return 0;
}
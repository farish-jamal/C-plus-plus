#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
 for(int i=2; i<=sqrt(n); i++){
   if(n%i == 0){
    return 0;
   }
 }
 return 1;
}

int main(){
 int n;
 cin>>n;
 bool found = isPrime(n);
 if(found){
  cout<<"Prime";
 }else{
  cout<<"Not Prime";
 }
 return 0;
}
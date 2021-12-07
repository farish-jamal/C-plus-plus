#include<bits/stdc++.h>
using namespace std;


vector<int> circularArrayRotation(vector<int> a, int k) {
   reverse(a.begin(), a.end());
   reverse(a.begin(), a.begin() + k);
   reverse(a.begin() + k, a.end());
   for(int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
   }
   return a;
}


int main(){
 int k,n;
 cin>>k>>n;
 vector<int> a(n);
 for(int i=0; i<a.size(); i++){
  cin>>a[i];
 }
 circularArrayRotation(a, k);
}
#include <bits/stdc++.h>
#include<algorithm>
#include<string>
using namespace std;

int main(){
  string s;
  cin>>s;

  // for(int i=0; i<s.size(); i++){
  //    s[i] += 32;
  // }
  // cout<<s<<endl;
  // for(int i=0; i<s.size(); i++){
  //    s[i] -= 32;
  // }
  // cout<<s<<endl;
  
 transform(s.begin(), s.end(), s.begin(), ::toupper);
 cout<<s;
 return 0;
}
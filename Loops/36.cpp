#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, rev=0;
    cin>>n;
     while(n>0){
        int last_num = n%10;
        rev = rev * 10 + last_num;
        n = n/10;
     }
     cout<<rev;
}
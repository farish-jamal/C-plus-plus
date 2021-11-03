#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    float res = 0.0;
    cin>>n;
    for(int i=1; i<=n; i++){
       res += (float)pow(i,i)/i;
    }
    cout<<res;
}
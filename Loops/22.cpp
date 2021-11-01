#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, sq, cb;
    cin>>n;

for(int i=1; i<=n; i++){
    sq = pow(i ,2);
    cb = pow(i ,3);
    cout<<sq<<endl<<cb<<endl;
}
   cout<<"Done!";
}
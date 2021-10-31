/*
      *
     **
***
****
*****
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int space = 2* n - 2;
    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        space = space -1;
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
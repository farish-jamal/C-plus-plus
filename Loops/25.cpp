#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

   for(int i=n; i>=1; i--){
       for(int j=1; j<=n-i; j++){
           cout<<" ";
       }
       for(int j=n; j>n-i; j--){
           cout<<j;
       }
        cout<<endl;
   }

}
#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

   for(int i=1; n<=m; i++){
       if(n%2==0){
          cout<<"Even"<<n<<endl;
       }else{
           cout<<"Odd"<<n<<endl;
       }
       n++;
   }

}
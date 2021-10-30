//Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.

#include<iostream>
using namespace std;

int main(){
   char ans;
   cin>>ans;
   if(ans == 'Y'){
       cout<<"you are allowed!";
   }else{
       cout<<"you are not allowed!";
   }
   return 0;
}
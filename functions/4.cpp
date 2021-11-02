#include<iostream>
using namespace std;


int armstrong(int n){
    int armstrong_num = 0;
   while(n>0){
       int lastdigit = n%10;
       int cube = lastdigit*lastdigit*lastdigit;
       armstrong_num += cube;
       n = n/10;
   }
   return armstrong_num;
}
int main(){
    int n;
    cin>>n;
    int num = armstrong(n);
    if(n == num){
        cout<<"Armstrong number";
    }else{
        cout<<"Not Armstrong Number";
    }
    return 0;
}


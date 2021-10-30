// Program to check whether an integer is positive, negative or zero
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num>0){
        cout<<"Positive Number";
    }else if(num == 0){
        cout<<"Zero";
    }else{
        cout<<"Negative Number";
    }
}
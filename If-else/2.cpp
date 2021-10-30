// Program to check whether an integer is positive or negative
// This program considers 0 as a positive number

#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    if(number>0){
        cout<<"Positive Integer";
    }else{
        cout<<"Negative Integer";
    }
}
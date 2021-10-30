// C++ program to find if an integer is even or odd or neither (0)
// using nested if statements

#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    if(num != 0){
        if((num%2) == 0){
            cout<<"Even Number";
        }else{
            cout<<"Odd Number";
        }
    }else{
        cout<<"Zero";
    }
}

// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    if(number>0){
        cout<<number;
    }
}
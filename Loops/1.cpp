// Print multiplication table of 24, 50 and 29 using loop.

#include<iostream>
using namespace std;

int main(){
    int num, table;
    cin>>num;
    for(int i=1; i<=10; i++){
        table = num * i;
        cout<<table<<endl;
    }
}
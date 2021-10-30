//Take values of length and breadth of a rectangle from user and check if it is square or not.

#include<iostream>
using namespace std;

int main(){
    int len, bre;
    cin>>len>>bre;
    if(len == bre){
        cout<<"Square";
    }else{
        cout<<"Rectangle";
    }
}
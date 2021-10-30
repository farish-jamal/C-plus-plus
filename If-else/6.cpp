// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.

#include<iostream>
using namespace std;

int main(){
    int quantity, discount, total, dis_price;
    cin>>quantity;
    if(quantity>1000){
        total = quantity * 100;
        discount = (total * 10)/100;
        dis_price = total - discount;
        cout<<dis_price;
    }else{
        cout<<"Better Luck Next Time";
    }
}
// A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount.

#include<iostream>
using namespace std;

int main(){
    int salary, years, total, hiked_sal;
    cin>>salary, years;

    if(years>5){
        total = (salary * 5)/100;
        hiked_sal = salary + total;
        cout<<hiked_sal;
    }else{
        cout<<"Your Service is low!";
    }
}
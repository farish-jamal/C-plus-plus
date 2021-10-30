// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
   float num_class, att_class;
   float total_per;
   cin>>num_class;
   cin>>att_class;
   total_per = (att_class / num_class)/100; 
   if(total_per > 75){
       cout<<"you can sit in exam";
   }else{
       cout<<"Your attendance is low";
   }
}
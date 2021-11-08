/*Entering a n digit in an array and then forming a number with the elements of the array and then reverse the obtained number.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int number = 0;
 int reverse = 0;
 int arr[n];
 for(int i=0; i<n; i++){
  cin>>arr[i];
 }
 for(int i=0; i<n; i++){
   number = number * 10 + arr[i];
 }
 cout<<number<<endl;
 for(int i=1; i<=n; i++){
  int lastDigit = number%10;
  reverse = reverse * 10 + lastDigit;
  number = number/10;
 }
 cout<<reverse;
}
#include <bits/stdc++.h>
using namespace std;

// Checking for palindrome
bool Ispalindrome(char name[], int n){
 int start = 0;
 int end = n-1;
 while(start < end){
   if(name[start] != name[end]){
     return false;
   }else{
    start++;
    end--;
   }
 }
 return true;
}

// Reversing the char array
void reverseString(char name[], int n){
 int start = 0;
 int end = n-1;
 while(start < end){
  swap(name[start], name[end]);
  start++;
  end--;
 }
}

// Finding the length of the char array
int getLength(char name[]){
 int count = 0;
 for(int i = 0; name[i] != '\0'; i++){
    count++;
 }
 return count;
}

int main(){
 char name[20];
 cin>>name;
 int len = getLength(name);
 cout<<"Total Length : "<< len <<endl;
 reverseString(name,len);
 cout<< name << endl;
 cout<<"Palindrome : " << Ispalindrome(name, len) <<endl;
 return 0;
}
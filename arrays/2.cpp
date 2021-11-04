#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
 int n;
 cin>>n;
 int arr[n];
 srand(time(0));
 for(int i=1; i<=n; i++){
   int random = rand()%10;
   arr[i] = random;
 }
 for(int i=1; i<=n; i++){
   cout<<arr[i]<<endl;
 }
 return 0;
}
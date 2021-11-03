#include<iostream>
#include<cmath>
using namespace std;

void cube(int n){
  int sum = 0;
  for(int i=1; i<=n;i++){
   sum += (float)pow(i, 3);
  }
  cout<<"Sum of cube of first "<<n<<" natural numbers is : "<<sum;
}

int main(){
  int n;
  cin>>n;
  cube(n);
}

#include<iostream>
#include<cmath>
using namespace std;

void pythagorean_triplates(int x, int y, int z){
  int a ,b,c;
  if(x > y){
    if(x>z){
       c = x;a = y;b = z;
    }else{
      c = z;a = y;b = x;
    }
  }else if(y > x){
    if(y>z){
      c = y;a = x;b = z;
    }else{
      c = z;a = y;b = x;
    }
  }else{
    c =z;a = y;b = x;
  }
  int leftSide = (float) pow(a, 2) + (float) pow(b, 2);
  int rightside = (float) pow(c, 2);
  if(leftSide == rightside){
      cout<<"Pythagorean triplates";
    }else{
      cout<<"Not Pythagorean triplates";
    }
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
     pythagorean_triplates(a,b,c);
}
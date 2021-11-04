#include<bits/stdc++.h>
#include<cmath>
using namespace std;

// FIRST APPROACH : 
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

// SECOND APPROACH : 

// bool pythagorean_triplates(int x, int y, int z){
//   int a ,b,c;
//   c = max(x, max(y,z));
//   if(c == x){
//     b = y;
//     a = z;
//   }else if(c == y){
//     b = x;
//     a = z;
//   }else{
//     b = x;
//     a = y;
//   }
//   int leftSide = (float) pow(a, 2) + (float) pow(b, 2);
//   int rightside = (float) pow(c, 2);
   
//    if(leftSide == rightside){
//       return true;
//     }else{
//       return false;
//     }
// }

int main(){
    int a,b,c;
    cin>>a>>b>>c;
     pythagorean_triplates(a,b,c);

    // SECOND APPROACH : 
    //  if(pythagorean_triplates(a,b,c)){
    //     cout<<"Pythagorean triplates";
    //  }else{
    //     cout<<"Not Pythagorean triplates";
    //  }
}
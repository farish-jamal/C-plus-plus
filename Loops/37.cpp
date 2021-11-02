#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, sum =0;
    cin>>n;
    
    while(n>0){
        int last = n%10;
        int cube = pow(last, 3);
        cout<<cube<<endl;
        sum = sum + cube;
        n = n/10;
    }
    cout<<sum;
}
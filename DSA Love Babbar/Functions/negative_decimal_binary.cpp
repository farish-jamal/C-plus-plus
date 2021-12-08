#include<iostream>
#include<math.h>
using namespace std;

int main()
{

	int ans=0 , i=0;
 int n;
 cin>> n;
	n *=-1;
	while(n!=0)
	{
		int bit= n & 1;
		ans=(bit * (int) (pow(10,i) + 0.5))+ans; 
		n = n >> 1;
		i++;
	}
	//for negative numbers
	int ones = ~(ans);
	int twos = ones+1;
	int ones1 = ~(twos);
	int twos1 = ones1 + 1;
 cout<<twos1;
}
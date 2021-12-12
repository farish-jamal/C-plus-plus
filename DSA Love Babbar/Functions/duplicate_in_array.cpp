#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int ans = 0;
    for(int i = 0; i<arr.size(); i++){
        ans = ans ^ arr[i];
        cout<<ans<<" ";
    }
    for(int i = 0; i<arr.size(); i++){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
  vector<int> arr;
  for (int i = 1; i <= 5; i++)
   arr.push_back(i);
  int ans = findDuplicate(arr);
  cout<<ans;
 return 0;
}
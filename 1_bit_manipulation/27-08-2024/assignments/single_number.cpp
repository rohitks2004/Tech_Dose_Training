#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = nums.size();
    int answer = 0;
    for(int i=0;i<n;i++){
        answer^=nums[i];
    }
    return answer;
}
 
int main()
{
   
   return 0;
}
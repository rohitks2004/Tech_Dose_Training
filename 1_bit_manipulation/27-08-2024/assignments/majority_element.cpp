#include<bits/stdc++.h>
using namespace std;
 

int majorityElement(vector<int>& nums) {
    int majority = nums[0];
    int count = 1;
    for(int i=1;i<nums.size();i++){
        if(nums[i] == majority){
            count++;
        }
        else{
            count--;
            if(count == 0){
                majority = nums[i];
                count = 1;
            }
        }
    }
    return majority;
}


int main()
{
   
   return 0;
}
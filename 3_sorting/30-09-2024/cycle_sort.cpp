#include<bits/stdc++.h>
using namespace std;
// for input in  range from 1-N (or similiar)
//  T.C = O(N)
//  S.C = O(1)
vector<int> cyclic_sort(vector<int> nums,int n){
   int i=0;
   while(i<n){
      int correct_index = nums[i]-1;
      if(i != correct_index and nums[i]!=nums[correct_index]){
         swap(nums[i],nums[correct_index]);
      }else{
         i++;
      }

   }
   return nums;
}


int main()
{
   int n = 10;
   vector<int> nums = {4,6,5,2,3,8,10,1,9,7};
   vector<int> output = cyclic_sort(nums,10);
   for(int i = 0; i < n; i++)
      cout<<output[i]<<" ";
   return 0;
}
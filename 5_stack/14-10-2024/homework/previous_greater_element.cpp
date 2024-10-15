#include<bits/stdc++.h>
using namespace std;
 
void previousGreater(int nums[],int n){
    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        while (!stk.empty() && nums[stk.top()] <= nums[i]){
            stk.pop();
        }
        if(stk.empty()){
            cout<<-1<<" ";
        }
        else if(nums[stk.top()] > nums[i]){
            cout<< nums[stk.top()]<<" ";
        }
        stk.push(i);
    }
    
}


int main()
{
   int n = 8;
   int arr[n] = {10, 4, 2, 20, 40, 12, 30,10};
   previousGreater(arr,n);
   return 0;
}
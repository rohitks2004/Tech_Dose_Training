#include<bits/stdc++.h>
using namespace std;
 

bool issorted(int arr[],int n){
   bool issorted = true;
   for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        issorted = false;
        break;
    }
   }
   return issorted;
}
int main()
{
   int n =5;
   int nums[n] = {1,2,2,4,5};
   
   cout<<issorted(nums,n);
   return 0;
}
#include<bits/stdc++.h>
using namespace std;

//  T.C = O( Digit * (N + B))  -- B = base of the numbers system( i.e 10 for decimal system)
//  T.C = O( Digit * N)  
//  S.C = O( N + Range + N)

vector<int>counting_sort(vector<int> nums,int divisor,int modular,int n){
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        int val = nums[i]%modular/divisor;
        freq[val]++;
    }
    for(int i=1;i<10;i++)
    {
        freq[i]+=freq[i-1];
    }
    vector<int> output(n,0);
    for(int i=n-1;i>=0;i--){
        int val = nums[i]%modular/divisor;
        output[freq[val]-1] = nums[i];

        freq[val]--;
    }
    return output;
    
}

vector<int> radix_sort(vector<int>nums,int n){
    int maxi = *max_element(nums.begin(),nums.end());
    int digit = 0;
    while(maxi>0){
        digit++;
        maxi/=10;
    }
    int divisor = 1;
    int modular = 10;
    for(int i=1;i<=digit;i++){
        nums = counting_sort(nums,divisor,modular,n);
        divisor*=10;
        modular*=10;
    }
    return nums;
}

int main()
{
   int n=10;
   vector<int> input = {105,204,603,43,91,7,1,309,27,64};
   vector<int> output(n,0);
   output = radix_sort(input,n);

   for(int i=0;i<n;i++)
    cout<<output[i]<<" ";

   return 0;
}
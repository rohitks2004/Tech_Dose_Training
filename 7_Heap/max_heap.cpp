#include<bits/stdc++.h>
using namespace std;

// try to add oops


void heapify(vector<int>& arr,int i){
    if(2*i+1 < arr.size() and arr[2*i+1] > arr[i] and arr[2*i+1] > arr[2*i+2]){
        swap(arr[i],arr[2*i+1]);
        heapify(arr,2*i+1);
    }else if(2*i+2 < arr.size() and arr[2*i+2] > arr[i] and arr[2*i+2] > arr[2*i+1]){
        swap(arr[2*i+2],arr[i]);
        heapify(arr,2*i+2);
    }
}

void build_heap(vector<int>& arr){
    for(int i=arr.size()-1;i>=0;i--){
        heapify(arr,i);
    }
}

void push(vector<int>&arr,int x){
    arr.push_back(x);
    int i=arr.size()-1;
    while(i > 0 and arr[(i-1)/2] < arr[i]){
        swap(arr[i],arr[(i-1)/2]);
        i = (i-1)/2;
    }
}

int pop(vector<int> &arr){
    int x = arr[0];
    swap(arr[0],arr.back());
    arr.pop_back();
    heapify(arr,0);
    return x;
}

int main()
{
   vector<int> nums = {5,3,1,6,7,5,2,1,9,0};
   build_heap(nums);
   for(int i:nums)cout<<i<<" ";
   cout<<endl;

   push(nums,10);
   for(int i:nums)cout<<i<<" ";
   cout<<endl;

   cout<<pop(nums)<<endl;
   for(int i:nums)cout<<i<<" ";
   cout<<endl;

   return 0;
}
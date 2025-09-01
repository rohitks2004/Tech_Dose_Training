#include<bits/stdc++.h>
using namespace std;

class max_heap{
    vector<int> arr;
    private:
    void heapify(int i){
        if(2*i+1 < arr.size() and arr[2*i+1] > arr[i] and arr[2*i+1] > arr[2*i+2]){
            swap(arr[i],arr[2*i+1]);
            heapify(2*i+1);
        }else if(2*i+2 < arr.size() and arr[2*i+2] > arr[i] and arr[2*i+2] > arr[2*i+1]){
            swap(arr[2*i+2],arr[i]);
            heapify(2*i+2);
        }
    }
    public:
    void build_heap(vector<int>& list){
        arr = list;
        for(int i=arr.size()-1;i>=0;i--){
            heapify(i);
        }
    }
    max_heap(){
        arr = vector<int>(0);
    }
    void push(int x){
        arr.push_back(x);
        int i=arr.size()-1;
        while(i > 0 and arr[(i-1)/2] < arr[i]){
            swap(arr[i],arr[(i-1)/2]);
            i = (i-1)/2;
        }
    }    
    int pop(){
        int x = arr[0];
        swap(arr[0],arr.back());
        arr.pop_back();
        heapify(0);
        return x;
    }
    void print(){
        for(int i:arr)cout<<i<<" ";
        cout<<endl;
    }

};


int main()
{
   vector<int> nums = {5,3,1,6,7,5,2,1,9,0};
   max_heap mh;
   mh.build_heap(nums);
   mh.print();

   mh.push(10);
   mh.print();

   mh.pop();
   mh.print();



//    build_heap(nums);
//    for(int i:nums)cout<<i<<" ";
//    cout<<endl;

//    push(nums,10);
//    for(int i:nums)cout<<i<<" ";
//    cout<<endl;

//    cout<<pop(nums)<<endl;
//    for(int i:nums)cout<<i<<" ";
//    cout<<endl;

   return 0;
}
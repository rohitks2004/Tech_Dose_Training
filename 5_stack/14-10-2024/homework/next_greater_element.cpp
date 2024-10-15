#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}


void nextGreater(int arr[],int n){
    stack<int> s;
    int ans[n];
    for(int i=n-1;i>-1;i--){
        while((!s.empty()) && (arr[s.top()] <= arr[i])){
            s.pop();
        }if(s.empty()){
            ans[i] = -1;
        }else{
            ans[i] = arr[s.top()];
        }
        s.push(i);
    }
    print(ans,n);
}


int main()
{
   int n = 9;
   int arr[n] = {10, 4, 2,20, 20, 40, 12, 30, 10};
   nextGreater(arr,n);
   return 0;
}
#include<bits/stdc++.h>
using namespace std;

void previousSmaller(int arr[],int n){
    stack<int> stk;
    for(int i=0;i<n;i++){
        while(arr[stk.top()] >= arr[i] and !stk.empty()){
            stk.pop();
        }
        if(stk.empty()){
            cout<<-1<<" ";
        }else{
            cout<<arr[stk.top()]<<" ";
        }
        stk.push(i);
    }
}


int main()
{
   int n = 8;
   int arr[n] = {10, 4, 2, 20, 40, 12, 30,10};
   previousSmaller(arr,n);
   return 0;
}
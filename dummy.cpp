#include<bits/stdc++.h>

using namespace std;

int multiply(int n,int m){
    if(m==0) return 0;

    if( m <0) return multiply(n,m+1) - n;
    return n + multiply(n,m-1);
}

void sumOdds(vector<int> &arr,int curr,int n){
    static int sum = 0;
    if(curr == n) {
        cout<< sum;
        return;
    }
    if(arr[curr] %2 == 1){
        sum += arr[curr];
    }
    sumOdds(arr,curr+1,n);
}

int main()
{
   vector<int> arr= { 1,2,3,4,5,6};
   int n = 6;
   sumOdds(arr,0,n);
   return 0;
}
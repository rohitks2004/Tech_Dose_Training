#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
//  n!/r!(n-r)!
//  mmi(a) under mod m = a^m-2 % m

int mmi(int n){
    int res = 1;
    int b = mod-2;
    while(b){
        if(b&1){
            res = (res%mod * n%mod)%mod;
        }
        b>>=1;
        n = (n%mod*n%mod)%mod;
    }
    return res%mod;
}

int combination(int n,int r){
    int res=1;
    if(r>n-r){
        r=n-r;
    }
    for(int i=1;i<=r;i++){
        res = ((res%mod) * ((n-i+1)%mod))%mod;
        res = ((res%mod) * (mmi(i)%mod))%mod;
    }
    return res;
}

int main()
{
   int n,r;
   cin>>n>>r;
   int ans = combination(n,r);
   cout<<ans;
   return 0;
}

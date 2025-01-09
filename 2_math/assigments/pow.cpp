#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int pow(int a,int b){
    int res = 1;
    while(b){
        if(b&1){
            res = (res%mod * a%mod)%mod;
        }
        b>>1;
        a = (a%mod*a%mod)%mod;
    }
    return res;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int ans = pow(a,b);
    cout<<ans;
   return 0;
}

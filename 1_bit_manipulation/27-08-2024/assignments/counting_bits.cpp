#include<bits/stdc++.h>
using namespace std;
 
 vector<int> countBits(int n) {
    vector<int> t(n+1);
    t[0]=0;
    for(int i=1;i<=n;i++){
        t[i] = t[i>>1]+ i%2;
    }
    return t;
}
int main()
{
   
   return 0;
}
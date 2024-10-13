#include<bits/stdc++.h>
using namespace std;


int xorinRange(int x){
    int n = (x % 4);
    if(n==1)return 1;
    else if (n== 2)return x+1;
    else if (n == 3)return 0;
    return x;
}
vector<int> decode(vector<int>& encoded) {
    int n=encoded.size();
    vector <int> perm(n+1);
    int x = xorinRange(n+1);
    perm[0] = x;
    for(int i=1;i<n;i+=2){
        perm[0] ^= encoded[i];
    }
    for(int i=1;i<n+1;i++){
        perm[i] = perm[i-1] ^ encoded[i-1];
    }
    return perm;
}

int main()
{
   
   return 0;
}
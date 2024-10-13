#include<bits/stdc++.h>
using namespace std;
 
int rangeBitwiseAnd(int left, int right) {
    if(left == 0) return 0;
    int count = 0;
    while(left != right){
        // left = (left & left-1);
        left>>=1;
        right>>=1;
        count++;
        // right = (right & right-1);
    }
    // return right;
    return left<<count;
}


int main()
{
   
   return 0;
}
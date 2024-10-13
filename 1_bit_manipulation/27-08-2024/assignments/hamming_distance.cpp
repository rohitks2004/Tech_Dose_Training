#include<bits/stdc++.h>
using namespace std;
 
int hammingDistance(int x, int y) {
    int number = x ^ y ;
    int count =0;
    while(number){
        count++;
        number = (number & number-1);
    }
    return count;
}

int main()
{
   
   return 0;
}
#include<bits/stdc++.h>
using namespace std;
string isOdd(int n) {
    return ( n & 1 )? "Odd" : "Even" ;
}
int main(){
    cout << isOdd(5) << endl; // Outputs: Odd
    cout << isOdd(4) << endl; // Outputs: Even
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr{1,4,1,2,7,5,2};

    vector<int> freq(10,0);
    for(int i:arr){
        freq[i]++;
    }
    for(int i=1;i<freq.size();i++){
        freq[i] +=freq[i-1];
    }
    vector<int> result(arr.size());
    for(int i = 9;i>=0;i--){
        result[i] = freq[arr[i]]-1;
        arr[i]--;
    }
    for(int i: result){
        cout<<i;
    }
    return 0;
}
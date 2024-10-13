#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int main(){
    vector<int> list1{1,3,5,7,9};
    vector<int> list2{0,2,4,6,8,9,10};
    vector<int> merged_list;
    int n = list1.size(),m = list2.size();
    int i=0,j=0;
    while( i<n and j<m){
        if(list1[i]<=list2[j]){
            merged_list.push_back(list1[i]);
            i++;
        }
        else{
            merged_list.push_back(list2[j]);
            j++;
        }
    }
    while (i<n)
    {
        merged_list.push_back(list1[i]);
        i++;
    }
    while (j<m)
    {
        merged_list.push_back(list2[j]);
        j++;
    }
   for(auto i:merged_list){
    cout<<i<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void print(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<" ";
    }cout<<endl;
    return ;
}
void selectionSort(vector<int> & arr,int n){

    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; 
            }
        }
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }    return ;                                                                                       
}
int main(){
    vector <int> arr{9,8,7,6,5,4,3,1,2,1};
    print(arr);
    selectionSort(arr,arr.size()-1);
    print(arr);
    return 0;
}
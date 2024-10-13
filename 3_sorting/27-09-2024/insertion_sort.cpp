#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void print(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<" ";
    }cout<<endl;
    return ;
}

void insertionSort(vector<int> arr, int n)
{
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    vector <int> arr{9,8,7,6,5,4,3,1,2,1};
    print(arr);
    insertionSort(arr,arr.size());
    print(arr);
    return 0;
}
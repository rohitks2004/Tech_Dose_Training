#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void print(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<" ";
    }cout<<endl;
    return ;
}
void bubbleSort(vector<int>& arr,int n) {
    
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
      if (!swapped)
            break;
    }
}
int main(){
    vector <int> arr{9,8,7,6,5,4,3,1,2,1};
    print(arr);
    bubbleSort(arr,arr.size()-1);
    print(arr);
    return 0;
}
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void print(vector<int> &arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<" ";
    }cout<<endl;
}
void merge(vector<int> &arr,int start,int mid,int end){
    int n1 = mid - start +1;
    int n2 = end - mid;
    vector<int> left(n1), right(n2);

    for(int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for(int j = 0; j < n2; j++)
        right[j] = arr[mid + 1+ j];

    int i = 0, j=0;
    int k = start;  
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
     while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    
}

void mergeSort(vector<int> &arr,int start,int end){
    if(start>= end)return;

    int mid = start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    vector <int> arr{9,8,7,6,5,4,3,1,2,1};
    print(arr);
    mergeSort(arr,0,arr.size()-1);
    print(arr);
    return 0;
}
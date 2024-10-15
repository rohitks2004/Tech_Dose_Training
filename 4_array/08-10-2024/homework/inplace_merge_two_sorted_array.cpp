#include<bits/stdc++.h>
using namespace std;
 

void print(int arr[],int n){
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main()
{
   int n=5,m=5;
   int arr1[]={1,3,5,7,9};
   int arr2[]={2,4,6,8,10};

   int i = n-1;
   int j = 0;

   while(i>=0 and j<m){
      if(arr1[i] >arr2[j]){
         swap(arr1[i],arr2[j]);
         i--;j++;
      }else{
         break;
      }
   }

   sort(arr1,arr1+n);
   sort(arr2,arr2+m);
   print(arr1,n);
   print(arr2,m);
   return 0;
}
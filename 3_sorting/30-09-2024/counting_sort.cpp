#include <bits/stdc++.h>
using namespace std;

//  T.C = O( N + Range)
//  S.C = O( N + Range + N)
vector<int> countSort(vector<int>& inputArray)
{

    int N = inputArray.size();
    int M = *max_element(inputArray.begin(), inputArray.end());
   

    vector<int> countArray(M + 1, 0);

    for (int i = 0; i < N; i++)
        countArray[inputArray[i]]++;

    for (int i = 1; i <= M; i++)
        countArray[i] += countArray[i - 1];

    vector<int> outputArray(N);

    for (int i = N - 1; i >= 0; i--){   // traversing the original array in reverse makes the sorting as stable sort 
        outputArray[countArray[inputArray[i]] - 1]= inputArray[i];
        countArray[inputArray[i]]--;
    }

    return outputArray;
}

int main()

{

    vector<int> inputArray = {4,3,12,1,5,5,3,9,11,0,0,0};
    vector<int> outputArray = countSort(inputArray);

    for (int i = 0; i < inputArray.size(); i++)
        cout << outputArray[i] << " ";

    return 0;
}

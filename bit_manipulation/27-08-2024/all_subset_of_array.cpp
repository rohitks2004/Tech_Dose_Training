#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generateSubsets(vector<int>& arr) {
    int n = arr.size();
    int totalSubsets = 1 << n;  // 2^n total subsets
    vector<vector<int>> total_subsets;

    for (int i = 0; i < totalSubsets; ++i) {
        vector<int> subset;
        for (int j = 0; j < n; ++j) {
            if (i & (1 << j)) {
                subset.push_back(arr[j]);
            }
        }
        total_subsets.push_back(subset);
    }

    return total_subsets;
}
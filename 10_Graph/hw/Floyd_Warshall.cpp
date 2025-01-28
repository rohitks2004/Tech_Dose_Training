#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> floyd_warshall(int n, vector<vector<int>>& edges){
    vector<vector<int>> adj_mat(n,vector<int>(n,INT_MAX));

    for(int i=0;i<edges.size();i++){
        int src = edges[i][0];
        int des = edges[i][1];
        int w = edges[i][2];

        adj_mat[src][des] = w;
        adj_mat[des][src] = w;
    }

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(adj_mat[i][k]!=INT_MAX and adj_mat[k][j]!=INT_MAX and 
                    adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]){
                        adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
            }
        }
    }
    return adj_mat;
}

// TC = O(v^3) v = number of verices
// SC = O(v^2) for the matrix
// floyd warshall used for finding all point shortest path (APSP)
// matrix where matrix[i][j] = x ; x represents the shorest path between the vertices i,j ;
void print(vector<vector<int>> &result){
    for(auto i:result){
        for(int j:i){
            if(j == INT_MAX){
                cout<<"#"<<" ";
            }else{
                cout<<j<<' ';
            }
        }cout<<endl;
    }
}

int main()
{   
    int n = 4;
    vector<vector<int>> edges = {{0,1,3},{1,2,1},{1,3,4},{2,3,1}};
    vector<vector<int>> apsp = floyd_warshall(n,edges);

    print(apsp);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
 
//  edge list to adjacency matrix
vector<vector<int>>adj_mat;

void print(vector<vector<int>> & mat){
    for(auto i: mat){
        for (int j : i){
            cout<<j<<" ";
        }cout<<endl;
    }
}

void adjacancy_matrix(vector<vector<int>> & graph){
    adj_mat.resize(graph.size(),vector<int>(graph.size(),0));
    for(auto u : graph){
        int i,j,k;
        i = u[0];
        j = u[1];
        k = u[2];
        adj_mat[i][j] = k;
        adj_mat[j][i] = k;
        //if directed graph above is enough -- uni directional
        // if undirected graph both ways should be represented -- bidirectional
    }
}


int main()
{
   vector<vector<int>> graph{
    {0,1,1},
    {0,2,4},
    {1,3,2},
    {2,3,1}
   };

    print(graph);
    adjacancy_matrix(graph);
    cout<<endl;
    print(adj_mat);

   return 0;
}
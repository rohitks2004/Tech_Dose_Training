#include<bits/stdc++.h>
using namespace std;
 
//  edge list to adjacency list;
vector<vector<int>> adj_list;

void print(vector<vector<int>> & mat){
    for(auto i: mat){
        for (auto j : i){
            cout<<j<<" ";
        }cout<<endl;
    }
}

void adjacancy_list(vector<vector<int>> graph){

    adj_list.resize(graph.size(),vector<int>{});

    for(auto e : graph){
        int from = e[0];
        int to = e[1];
        int wt = e[3];
        adj_list[from].push_back(to);
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
    adjacancy_list(graph);
    cout<<endl;
    print(adj_list);

   return 0;
}
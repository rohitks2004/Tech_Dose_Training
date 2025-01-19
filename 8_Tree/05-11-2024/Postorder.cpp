#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


// RECURSION
// TC = O(N) N- no.of nodes
// SC = O(N) - call stack
void postorder(TreeNode *root){
    if(root->left)postorder(root->left);
    if(root->right)postorder(root->right);
    cout<<root->val<<endl;
}



//ITERATIVE
// TC = O(N) N- no.of nodes
// SC = O(N) - stack

void postorderIterative(TreeNode * root){
    TreeNode * curr = root;
    stack<TreeNode*> stk;

    vector<int> result;
    while(curr || ! stk.empty()){
        while(curr){
            result.push_back(curr->val);
            curr = curr->right;
        }
        curr = stk.top();
        stk.pop();
        curr = curr->left;
    }

    reverse(result.begin(),result.end());
    
    for (int val : result) {
        cout << val << endl;
    }
}
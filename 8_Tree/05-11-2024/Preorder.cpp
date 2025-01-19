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
void preorder(TreeNode *root){
    cout<<root->val<<endl;
    if(root->left)preorder(root->left);
    if(root->right)preorder(root->right);
}


//ITERATIVE
// TC = O(N) N- no.of nodes
// SC = O(N) - stack
void preorderIterative(TreeNode* root) {
    TreeNode *curr = root;
    stack<TreeNode*> stk;

    while(curr || !stk.empty()){
        while(curr){
            cout<<curr->val<<endl;
            stk.push(curr);
            curr=curr->left;
        }
        curr = stk.top();
        stk.pop();
        curr = curr->right;

    }
}

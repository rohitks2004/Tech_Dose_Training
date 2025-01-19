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
void inorder(TreeNode *root){
    if(root->left)inorder(root->left);
    cout<<root->val<<endl;
    if(root->right)inorder(root->right);
}


//ITERATIVE
// TC = O(N) N- no.of nodes
// SC = O(N) - stack

void inorderIterative(TreeNode * root){
    TreeNode * curr = root;
    stack<TreeNode*> stk;   

    while(curr || !stk.empty()){
        while(curr){
            stk.push(curr);
            curr = curr->left;
        }
        curr = stk.top();
        stk.pop();
        cout << curr->val<<endl;
        curr = curr->right;
    }
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void solve(TreeNode*root,int &leftsum){
    if(root==NULL)
    return ;
    
    solve(root->left,leftsum);
    if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){
        leftsum+=root->left->val;
    }
solve(root->right,leftsum);

}
    int sumOfLeftLeaves(TreeNode* root) {
        int leftsum=0;
        solve(root,leftsum);
        return leftsum;
    }
};
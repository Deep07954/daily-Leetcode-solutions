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
    int count=0;
    int dfs(TreeNode* root){
        if(!root)
            return 0 ;
        int left= dfs(root->left);
        int right=dfs(root->right);
        int maxm=max(root->val,max(left,right));
        if(maxm==root->val)
            count++;

        return maxm;
    }
    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return count;
    }
};
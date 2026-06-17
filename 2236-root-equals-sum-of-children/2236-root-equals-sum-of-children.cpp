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
int dfs(TreeNode* root){
    if(root==NULL)
    return 0;
    //  int leftsum=dfs(root->left);
    //  int rightsum=dfs(root->right);
    //  return root->val+leftsum+rightsum;
     // directly just write 
     return root->val+dfs(root->left)+dfs(root->right);
}
    bool checkTree(TreeNode* root) {
    //     if(root==NULL)
    //     return false;
     
    //    return  root->val==root->left->val+root->right->val;
    //approach-2 for nore than 3 ndoes
    if(root==NULL)
    return false;
    int leftsum=dfs(root->left);
    int rightsum=dfs(root->right);
    return root->val==leftsum+rightsum;
    }
};
// general case ke liye code likhe hua to 

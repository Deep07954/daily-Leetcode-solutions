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
long long secondmin=LLONG_MAX;
int minvalue;
void dfs(TreeNode* root){
    if(root==NULL)
    return ;
    if(root->val>minvalue){
        secondmin=min(secondmin,(long long)root->val);
    }
    dfs(root->left);
    dfs(root->right);

}
    int findSecondMinimumValue(TreeNode* root) {
        minvalue=root->val;
        dfs(root);
        return secondmin==LLONG_MAX?-1:secondmin;
    }
};
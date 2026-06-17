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
vector<vector<int>>result;
void dfs(TreeNode* root,int & targetSum,int &sum,vector<int>& ans){
    if(root==NULL)
    return ;
     sum+=root->val;
     
     ans.push_back(root->val);
     if(root->left==NULL && root->right==NULL){
        if(sum==targetSum){
            result.push_back(ans);
        }
        
    
     }
     dfs(root->left,targetSum,sum,ans);
     dfs(root->right,targetSum,sum,ans);
sum-=root->val;
      ans.pop_back();

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>ans;
        int sum=0;
        dfs(root,targetSum,sum,ans);
        return result;
    }
};
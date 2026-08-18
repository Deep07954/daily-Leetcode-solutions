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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<TreeNode*>q;
        vector<int>res;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            TreeNode* rightnode=NULL;
            while(n--){
                rightnode=q.front();
                q.pop();
                if(rightnode->left){
                    q.push(rightnode->left);
                }
                if(rightnode->right){
                    q.push(rightnode->right);
                }
            }
            res.push_back(rightnode->val);
        }
return res;
    }
};
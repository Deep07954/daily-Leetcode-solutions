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
void solve(TreeNode* root,unordered_map<int,int>&mp){
    if(root==NULL)
    return;
    solve(root->left,mp);
    
    mp[root->val]++;
    solve(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>mp;
        solve(root,mp);
        vector<int>ans;
        int maxfreq=0;
for(auto & it : mp){
maxfreq=max(maxfreq,it.second);

}
for(auto & it :mp){
    if(it.second==maxfreq){
        ans.push_back(it.first);
    }
}
return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* dfs(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (original == NULL)
            return NULL;
        if (original == target)
            return cloned;
        TreeNode* lefty = dfs(original->left, cloned->left, target);
        if (lefty != NULL)
            return lefty;
        TreeNode* righty = dfs(original->right, cloned->right, target);
        if (righty != NULL)
            return righty;

        return NULL;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned,
                            TreeNode* target) {

        return dfs(original, cloned, target);
    }
};
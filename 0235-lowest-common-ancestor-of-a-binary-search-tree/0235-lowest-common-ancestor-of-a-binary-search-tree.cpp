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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            while (root) {
        // Both nodes in left subtree
        if (p->val < root->val && q->val < root->val) {
            root = root->left;
        }
        // Both nodes in right subtree
        else if (p->val > root->val && q->val > root->val) {
            root = root->right;
        }
        // Nodes in different subtrees or one is root
        else {
            return root;
        }
    }
   
    return nullptr;
    }
};
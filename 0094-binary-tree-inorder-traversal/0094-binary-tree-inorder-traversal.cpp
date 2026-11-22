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
// void inorder(TreeNode* root,vector<int> &result){
//     if(root==NULL)
//     return;
//     inorder(root->left,result);
//     result.push_back(root->val);
//     inorder(root->right,result);
// }
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int>res;
        TreeNode* curr=root;
        while(curr!=nullptr){
            if(curr->left==nullptr){
                res.push_back(curr->val);
                curr=curr->right;
            }else{

    TreeNode* leftchild=curr->left;
    while(leftchild->right!=nullptr){
        leftchild=leftchild->right;
    }
    leftchild->right=curr;
    TreeNode* temp=curr;
    curr=curr->left;
    temp->left=NULL;}
       }
return res;
    }
};
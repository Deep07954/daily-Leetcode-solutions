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
// void solve(TreeNode* root,vector<int>&result){
//     if(root==NULL){
 
//    return;}
//       result.push_back(root->val);
//     solve(root->left,result);
//     solve(root->right,result);


// }
    vector<int> preorderTraversal(TreeNode* root) {
//         vector<int>result;
//   solve(root,result);
//   return result;
   vector<int>res;
           TreeNode* curr=root;
           while(curr!=nullptr){
           
            if(curr->left==nullptr){
                 res.push_back(curr->val);
                curr=curr->right;
            }else {
                TreeNode* leftchild=curr->left;
                while(leftchild->right!=nullptr &&  leftchild->right!=curr){
                    leftchild=leftchild->right;
                }
                if(leftchild->right==nullptr){
                leftchild->right=curr;
                res.push_back(curr->val);
                curr=curr->left;}
                else {
                    leftchild->right=nullptr;
                    curr=curr->right;

                }
                
            }
           }
           return res;
    }
};
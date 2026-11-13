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
TreeNode* markparents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent_track,int start){
    if(!root)return nullptr;
    TreeNode* curr1=nullptr;
    if(root->val==start){
        curr1=root;
    }
    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()){
        int size=q.size();
for(int i=0;i<size;i++){
    TreeNode* curr=q.front();
    q.pop();
    if(curr->left){
        q.push(curr->left);
        parent_track[curr->left]=curr;
        if(curr->left->val==start)curr1=curr->left;
    }
    if(curr->right){
        q.push(curr->right);
        parent_track[curr->right]=curr;
        if(curr->right->val==start)curr1=curr->right;
    }
}
    }
    return curr1;

}
    int amountOfTime(TreeNode* root, int start) {
        if(!root)return 0;
        unordered_map<TreeNode*,TreeNode*>parent_track;
        
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
       TreeNode* target=markparents(root,parent_track,start);
       if(!target)return 0;
        q.push(target);
        visited[target]=true;
        int minute=0;
        while(!q.empty()){
            int size=q.size();
for(int i=0;i<size;i++){
    TreeNode* curr=q.front();
    q.pop();
    if(curr->left && !visited[curr->left]){
        q.push(curr->left);
        visited[curr->left]=true;
    }
     if(curr->right && !visited[curr->right]){
        q.push(curr->right);
        visited[curr->right]=true;
    }
    if(parent_track[curr] && !visited[parent_track[curr]]){
        q.push(parent_track[curr]);
        visited[parent_track[curr]]=true;
    }
}
minute++;
        }
return minute-1;
    }
};
class TrieNode{
public:

    TrieNode* child[2];

    TrieNode(){
        child[0]=NULL;
        child[1]=NULL;
    }
};
class Trie{
public:

    TrieNode* root;

    Trie(){
        root=new TrieNode();
    }
    void insert(int num){

    TrieNode* node=root;

    for(int i=31;i>=0;i--){

        int bit=(num>>i)&1;

        if(node->child[bit]==NULL)
            node->child[bit]=new TrieNode();

        node=node->child[bit];
    }
}
int getMaxXor(int num){

        TrieNode* node=root;

        int ans=0;

        for(int i=31;i>=0;i--){

            int bit=(num>>i)&1;

            int desired=1-bit;

            if(node->child[desired]){

                ans |= (1<<i);

                node=node->child[desired];
            }
            else{

                node=node->child[bit];
            }
        }

        return ans;
    }

};

class Solution {
public:
  bool isStrongPair(int x, int y) {
        return abs(x - y) <= min(x, y);
    }
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) {

            Trie trie;

            for(int j = i; j < n; j++) {

                if(isStrongPair(nums[i], nums[j])) {

                    trie.insert(nums[j]);

                    ans = max(ans, trie.getMaxXor(nums[i]));
                }
            }
        }

        return ans;
    
    }
};
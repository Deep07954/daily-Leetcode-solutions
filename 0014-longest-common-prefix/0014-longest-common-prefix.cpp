class TrieNode {
public:
    TrieNode* children[26];
    bool isEnd;
    int childCount;

    TrieNode() {
        isEnd = false;
        childCount = 0;

        for(int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
    }
};
class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {

        TrieNode* node = root;

        for(char ch : word) {

            int idx = ch - 'a';

            if(node->children[idx] == NULL) {
                node->children[idx] = new TrieNode();
                node->childCount++;
            }

            node = node->children[idx];
        }

        node->isEnd = true;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
        return "";

    Trie trie;

    for(auto &word:strs)
        trie.insert(word);

    string ans="";

    TrieNode* node=trie.root;

    string firstWord=strs[0];

    for(char ch:firstWord){

        if(node->childCount==1 && !node->isEnd){

            ans+=ch;
            node=node->children[ch-'a'];
        }
        else
            break;
    }

    return ans;
    }
};
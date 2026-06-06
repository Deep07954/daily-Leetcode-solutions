struct Node {
    Node* children[26];
    bool flag = false;
    
    Node() {
        for(int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
    }
    
    bool ContainsKey(char ch) {
        return children[ch - 'a'] != NULL;
    }
    
    void put(char ch, Node* node) {
        children[ch - 'a'] = node;
    }
    
    Node* get(char ch) {
        return children[ch - 'a'];
    }
    
    void setEnd() {
        flag = true;
    }
    
    bool isEnd() {
        return flag;
    }
};
 
class Trie {
    private:
        Node* root;
        
    public:
        Trie() {
            root = new Node();
        }
        
        void insert(string word) {
            Node* node = root;
            for(int i = 0; i < word.length(); i++) {
                if(!node->ContainsKey(word[i])) {
                    node->put(word[i], new Node());
                }
                node = node->get(word[i]);
            }
            node->setEnd();
        }
        
        Node* getRoot() {
            return root;
        }
};
 
class Solution {
    private:
        vector<string> result;
        // int DIRS[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
        
        void dfs(vector<vector<char>>& board, 
                 int row, int col, 
                 Node* node, 
                 string& path) {
            
            // Boundary check
            if(row < 0 || row >= board.size() || 
               col < 0 || col >= board[0].size()) {
                return;
            }
            
            char c = board[row][col];
            
            // Already visited ya character Trie mein nahi
            if(c == '#' || !node->ContainsKey(c)) {
                return;
            }
            
            // Move to next Trie node
            node = node->get(c);
            path.push_back(c);
            
            // Word found!
            if(node->isEnd()) {
                result.push_back(path);
                node->flag = false;  // Avoid duplicates
            }
            
            // Mark visited
            board[row][col] = '#';
            
            // // Explore 4 directions
            // for(int i = 0; i < 4; i++) {
            //     dfs(board, row + DIRS[i][0], col + DIRS[i][1], node, path);
            // }
            //without using direc vector
            // UP
dfs(board, row - 1, col, node, path);

// DOWN
dfs(board, row + 1, col, node, path);

// LEFT
dfs(board, row, col - 1, node, path);

// RIGHT
dfs(board, row, col + 1, node, path);
            
            // Backtrack
            board[row][col] = c;
            path.pop_back();
        }
        
    public:
        vector<string> findWords(vector<vector<char>>& board, 
                                 vector<string>& words) {
            Trie* trie = new Trie();
            
            // Build Trie
            for(string word : words) {
                trie->insert(word);
            }
            
            // DFS from each cell
            Node* root = trie->getRoot();
            for(int i = 0; i < board.size(); i++) {
                for(int j = 0; j < board[0].size(); j++) {
                    string path = "";
                    dfs(board, i, j, root, path);
                }
            }
            
            return result;
                                 }
};
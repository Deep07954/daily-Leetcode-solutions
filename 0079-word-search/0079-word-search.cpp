class Solution {
public:
bool dfs(vector<vector<char>>& board,int row,int col, string word,int idx){
    int n=board.size();
    int m=board[0].size();
    if(idx==word.length()){
        return true;
    }
    if(row<0|| row>=n||col<0||col>=m|| board[row][col]!=word[idx]){
        return false;
    }
    // 
    if(board[row][col]=='$')
    return false;
char ch=board[row][col];
board[row][col]='$';
//up direction
if(dfs(board,row-1,col,word,idx+1)||
dfs(board,row+1,col,word,idx+1)||
dfs(board,row,col+1,word,idx+1)
||
dfs(board,row,col-1,word,idx+1))
{return true;}

board[row][col]=ch;
return false;
}
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
    int m=board[0].size();
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            bool found=dfs(board,row,col,word,0);
            if(found){
            return true;
            }
        }
    }
    return false;
    }
};
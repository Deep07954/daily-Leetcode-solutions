class Solution {
public:
// bool solve(vector<vector<char>>&board){
//     for(int i=0;i<9;i++){
//         for(int j=0;j<9;j++){
//             if(board[i][j]=='.'){
//                 for(char c='1';c<='9';c++){
//                     if(isvalid(board,i,j,c)){
//                         board[i][j]=c;
//                         if(solve(board)==true){
//                            return true;
//                         }
//                         else 
//                         {   
//                             board[i][j]='.';
//                         }
//                     }
//                 }
//                 return false;
//             }
//         }
//     }
//     return true;
// }
bool isvalid(vector<vector<char>>& board,int row,int col,char c){

    for(int i=0;i<9;i++){
        if(board[row][i]==c && i!=col)
        return false;
        if(board[i][col]==c && i!=row) return false;

        int boxRow = 3 * (row / 3) + i / 3;
        int boxCol = 3 * (col / 3) + i % 3;
        if (board[boxRow][boxCol] == c && (boxRow != row || boxCol != col)) 
            return false;
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
         for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
                if(!isvalid(board,i,j,board[i][j])){
                    return false;
                }
            }
        }
    }
    return true;
    }
};
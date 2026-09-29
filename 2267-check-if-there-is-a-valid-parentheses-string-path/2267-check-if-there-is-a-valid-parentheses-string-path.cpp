class Solution {
public:
 int n,m;
 int dp[101][101][203];
bool dfs(vector<vector<char>>& grid,int i,int j,int count){


    if(i>=n||j>=m)return false;
    count+=grid[i][j]=='('?1:-1;
    if(count<0)return false;
    if(dp[i][j][count]!=-1)return dp[i][j][count];
    if(i==n-1 && j==m-1){
        return dp[i][j][count]=(count==0);
    }
    //down
    if(i+1<n){
        if(dfs(grid,i+1,j,count))return dp[i][j][count] =true;
    }
    if(j+1<m){
        if(dfs(grid,i,j+1,count))return dp[i][j][count] =true;
    }

    return    dp[i][j][count]=false;




}
    bool hasValidPath(vector<vector<char>>& grid) {
        n=grid.size();
 m=grid[0].size(); 
 if((m+n-1)%2==1)return false;
 if(grid[0][0]==')'|| grid[n-1][m-1]=='(')return false;
 memset(dp,-1,sizeof(dp));
 bool res=dfs(grid,0,0,0);
 return res;

    }
};
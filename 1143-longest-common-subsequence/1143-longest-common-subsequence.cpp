class Solution {
public:
long long dp[1001][1001];
int m,n;
long long solve(string &s1,string& s2,int i,int j){
    if(i>=m||j>=n)
       { return 0;}
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i]==s2[j]){
            return dp[i][j]=1+solve(s1,s2,i+1,j+1);
        }
 return dp[i][j]=max(solve(s1,s2,i+1,j),solve(s1,s2,i,j+1));
    
}
    int longestCommonSubsequence(string s1, string s2) {
        m=s1.length();
        n=s2.length();
        memset(dp,-1,sizeof(dp));
       return (int)solve(s1,s2,0,0);
    }
};
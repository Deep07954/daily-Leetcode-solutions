class Solution {
public:
int m,n;
int dp[502][502];
int solve(string &s1,string &s2,int i,int j){
if(i==m){
    return n-j;
}
else if(j==n){
    return m-i;
}
if(dp[i][j]!=-1){
    return dp[i][j];
}
if(s1[i]==s2[j]){
    return dp[i][j]=solve(s1,s2,i+1,j+1);
}
int ins=1+solve(s1,s2,i,j+1);
int del=1+solve(s1,s2,i+1,j);
int rep=1+solve(s1,s2,i+1,j+1);
return dp[i][j]= min({ins,del,rep});
}
    int minDistance(string word1, string word2) {
        m=word1.length();
        n=word2.length();
        memset(dp,-1,sizeof(dp));
        return solve(word1,word2,0,0);
    }
};
class Solution {
public:
int m,n;
int dp[502][502];
int solve(string &s1,string &s2,int m,int n){
if(m==0||n==0){
    return m+n;
}

if(dp[m][n]!=-1){
    return dp[m][n];
}
if(s1[m-1]==s2[n-1]){
    return dp[m][n]=solve(s1,s2,m-1,n-1);
}else {
int ins=1+solve(s1,s2,m,n-1);
int del=1+solve(s1,s2,m-1,n);
int rep=1+solve(s1,s2,m-1,n-1);
return dp[m][n]= min({ins,del,rep});
}
return -1;
}
    int minDistance(string word1, string word2) {
        m=word1.length();
        n=word2.length();
        memset(dp,-1,sizeof(dp));
        return solve(word1,word2,m,n);
    }
};
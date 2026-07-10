class Solution {
public:
int n;
long long dp[1001][1001];
int solve(vector<vector<int>>& pairs,int curr,int p){
    if(curr==n){
        return 0;
    }
    if(p!=-1 && dp[curr][p]!=-1){
        return dp[curr][p];
    }
    int take=0;
    if(p==-1||pairs[curr][0]>pairs[p][1]){
take=1+solve(pairs,curr+1,curr);
    }
    int skip=solve(pairs,curr+1,p);
    if(p!=-1){
    return dp[curr][p]=max(take,skip);}
    return max(take,skip);
}
    int findLongestChain(vector<vector<int>>& pairs) {
         n=pairs.size();
         sort(pairs.begin(),pairs.end());
         memset(dp,-1,sizeof(dp));
         return solve(pairs,0,-1);

    }
};
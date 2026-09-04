class Solution {
public:
int dp[31][1001];
const int M=1e9+7;
int solve(int n,int k,int target){
    if(target<0){
        return 0;
    }
    if(n==0){
        return dp[n][target]=(target==0);
    }
    if(dp[n][target]!=-1){
        return dp[n][target];
    }
long long ways=0;
for(int face=1;face<=k;face++){
    ways+=solve(n-1,k,target-face)%M;
}
return dp[n][target]=ways%M;

}
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(n,k,target);
    }
};
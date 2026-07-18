class Solution {
public:
long long dp[10001];
long long M=1e9+7;
int solve(int n,int i){
    if(i>=n)
    return 1;
if(dp[i]!=-1)
return dp[i];
    int take=0;
    take=solve(n,i+2)%M;

    int skip=solve(n,i+1)%M;

return dp[i]=(take+skip)%M;

}
    int countHousePlacements(int n) {
      
        memset(dp,-1,sizeof(dp));
      
        long long ans= solve(n,0);
        return (ans*ans)%M;
    }
};
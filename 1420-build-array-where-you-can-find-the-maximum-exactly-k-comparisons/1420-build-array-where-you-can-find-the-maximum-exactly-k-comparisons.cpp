class Solution {
public:
int N,M,K;
long long dp[51][51][101];
 const int MOD = 1e9+7;
int solve(int idx,int cost,int maxm){
    if(idx==N){
        if(cost==K){
            return 1;
        }
        else {
        return 0;}
    }

if(dp[idx][cost][maxm]!=-1){
    return dp[idx][cost][maxm];
}
int result=0;
        for(int i=1;i<=M;i++){
            if(i>maxm){
result=(result+solve(idx+1,cost+1,i))%MOD;
            }
            else 
            {
                result=(result+solve(idx+1,cost,maxm))%MOD;
            }
        }
    return dp[idx][cost][maxm]=result%MOD;
}
    int numOfArrays(int n, int m, int k) {
        N=n;
        M=m;
        K=k;
        memset(dp,-1,sizeof(dp));
        return solve(0,0,0);
        
 }
};
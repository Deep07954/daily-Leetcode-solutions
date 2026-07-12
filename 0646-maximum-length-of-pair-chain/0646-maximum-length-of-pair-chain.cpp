class Solution {
public:
int n;
// long long dp[1001][1001];
// int solve(vector<vector<int>>& pairs,int curr,int p){
//     if(curr==n){
//         return 0;
//     }
//     if(p!=-1 && dp[curr][p]!=-1){
//         return dp[curr][p];
//     }
//     int take=0;
//     if(p==-1||pairs[curr][0]>pairs[p][1]){
// take=1+solve(pairs,curr+1,curr);
//     }
//     int skip=solve(pairs,curr+1,p);
//     if(p!=-1){
//     return dp[curr][p]=max(take,skip);}
//     return max(take,skip);
// }
    int findLongestChain(vector<vector<int>>& pairs) {
         n=pairs.size();
         sort(pairs.begin(),pairs.end());//O(nlogn)
        //  memset(dp,-1,sizeof(dp));
        //  return solve(pairs,0,-1);
vector<int>dp(n,1);
int maxL=1;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){  //j jo h prev element ke bar em btata hai 
        if(pairs[j][1]<pairs[i][0])  //prev element ka 1 element chota hoan chahiye curr element that is i ke pehle element se that is 0;
        {
            dp[i]=max(dp[i],dp[j]+1);
            maxL=max(dp[i],maxL);
        }
    }
}
return maxL;
    }
};
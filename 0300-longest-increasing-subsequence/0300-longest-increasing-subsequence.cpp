class Solution {
public:
int n;
// int dp[2501][2501];
// int solve(vector<int>&nums,int i,int p){
//     if(i>=nums.size()){
//         return 0;
//     }
//     if(p!=-1 && dp[i][p]!=-1){
//         return dp[i][p];
//     }
//     int take=0;
//     if(p==-1||nums[p]<nums[i]){
//         take=1+solve(nums,i+1,i);
//     }
//     int skip=solve(nums,i+1,p);
//     if(p!=-1){
//      dp[i][p]=max(take,skip);}
//      return max(take,skip);
// }
    int lengthOfLIS(vector<int>& nums) {
 n=nums.size();
//  memset(dp,-1,sizeof(dp));
//   return solve(nums,0,-1);
//bottom aproach o(n^2)
vector<int>dp(n,1);
int maxL=1;
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        if(nums[j]<nums[i]){
            dp[i]=max(dp[i],dp[j]+1);
            maxL=max(maxL,dp[i]);
        }
    }
}
return maxL;

    }
};
//t.c- O(nlogn)
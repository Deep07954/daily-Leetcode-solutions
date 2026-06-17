class Solution {
public:
int dp[101];
int solve(vector<int>&nums,int i){
    int n=nums.size();
    if(i>=n){
        return 0;
    }
if(dp[i]!=-1)
return dp[i];
  int take= nums[i]+solve(nums,i+2);
int skip=solve(nums,i+1);
return dp[i]= max(take,skip);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
       int result=solve(nums,0);
       return result;
    }
};
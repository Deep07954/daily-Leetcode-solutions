class Solution {
public:
long long dp[100001][2];
long long solve(vector<int>& nums,int i,bool iseven){
    if(i==nums.size())
    return 0;


    if(dp[i][iseven]!=-1){
        return dp[i][iseven];
    }
long long take=0;
    if(iseven){
take=nums[i]+solve(nums,i+1,0);
    }
    else {
        take=-nums[i]+solve(nums,i+1,1);
    }
    long long skip=solve(nums,i+1,iseven);

    return dp[i][iseven]=max(take,skip);
}
    long long maxAlternatingSum(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
     return solve(nums,0,1);
    }
};
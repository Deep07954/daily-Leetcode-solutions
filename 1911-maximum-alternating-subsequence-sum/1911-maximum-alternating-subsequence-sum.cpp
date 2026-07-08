class Solution {
public:
long long dp[100001][2];
long long solve(vector<int>&nums,int i,bool iseven){
   
    if(i==nums.size())
    {return 0;}
long long take=0;
if(dp[i][iseven]!=-1){
    return dp[i][iseven];
}
long long skip=solve(nums,i+1,iseven);

if(iseven){
    take=nums[i]+solve(nums,i+1,0);
}else
{
    take=-nums[i]+solve(nums,i+1,1);
}
return dp[i][iseven]=max(take,skip);
}
    long long maxAlternatingSum(vector<int>& nums) {
        int i=0;
        memset(dp,-1,sizeof(dp));
       long long ans= solve(nums,i,1);
       return ans;
    }
};
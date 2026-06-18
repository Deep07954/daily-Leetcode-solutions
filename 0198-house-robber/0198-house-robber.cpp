class Solution {
public:
    int dp[101];
    // int solve(vector<int>& nums, int i) {
    //     int n = nums.size();
    //     if (i >= n) {
    //         return 0;
    //     }
    //     if (dp[i] != -1)
    //         return dp[i];
    //     int take = nums[i] + solve(nums, i + 2);
    //     int skip = solve(nums, i + 1);
    //     return dp[i] = max(take, skip);
    // }
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        // memset(dp, -1, sizeof(dp));
        // int result = solve(nums, 0);
        // return result;
        // BOTTOM UP APPRAOCH
          dp[0]=0; // koi hosue nhi no money
          dp[1]=nums[0]; // profit when we have i houses dp[1] k amtlb hai ek hosue hai to uska profit nums[0] hoga 
          for(int i=2;i<=n;i++){
            int take=nums[i-1]+dp[i-2];
            int skip=dp[i-1];
dp[i]=max(take,skip);
          }
          
          return dp[n];
    }
};
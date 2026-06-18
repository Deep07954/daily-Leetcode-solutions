class Solution {
public:
 //bottom up 
 
//top down approach 
// int dp[101];
// int solve(vector<int>&nums,int i,int n){
//     if(i>n){
//         return 0;
//     }
//     if(dp[i] !=-1)
//     return dp[i];
//     int take=nums[i]+ solve(nums,i+2,n);
//     int skip=solve(nums,i+1,n);
//     return dp[i]=max(take,skip);
// }


    int rob(vector<int>& nums) {
    //     int n=nums.size();
    //     if(n==1)
    //     return nums[0];
    //     if(n==2)
    //     return max(nums[0],nums[1]);
    //     memset(dp,-1,sizeof(dp));
    //  int take_oth=  solve(nums,0,n-2);
    //  memset(dp,-1,sizeof(dp));
    //  int skip_oth=solve(nums,1,n-1);
      


    //     return max(take_oth,skip_oth);
    int n=nums.size();
    if(n==1)
    return nums[0];
    vector<int>dp(n+1,0);
dp[0]=0;


// 1 house le liya mtln n wlaa nhi lenge  1 to n-1 tk jayenge 
for(int i=1;i<=n-1;i++){
    int take=nums[i-1]+(i-2>=0?dp[i-2]:0);
    int skip=dp[i-1];
dp[i]=max(take,skip);
}
int result1=dp[n-1];
dp.clear();

//case 2 jsime 1st house yani nums[0] nhi le rhe 
dp[0]=0;
dp[1]=0; // skip kr diya
for(int i=2;i<=n;i++){
    int take_oth=nums[i-1]+(i-2>=0?dp[i-2]:0);
    int skip_oth=dp[i-1];
   dp[i]=max(take_oth,skip_oth);
}
int result2=dp[n];
return max(result1,result2);
    }
};
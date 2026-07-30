class Solution {
public:
int dp[10001];
int solve(vector<int>&points,int i){
    if(i>=points.size())
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    int take=0;
    take=points[i]+solve(points,i+2);
    int skip=solve(points,i+1);

    return dp[i]=max(take,skip);
}
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        int maxm=*max_element(nums.begin(),nums.end());
vector<int>points(maxm+1,0);
          memset(dp,-1,sizeof(dp));
          //duplciates remvoal
      for(auto x:nums){
        points[x]+=x;
      }
        return solve(points,0);
    }
};
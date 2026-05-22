class Solution {
public:
vector<vector<int>>result;
 void solve(vector<int>&nums,vector<int> &ans,int i){
      if(i>=nums.size()){
          result.push_back(ans);
          return;
      }
      // include 
      ans.push_back(nums[i]);
      solve(nums,ans,i+1);
      ans.pop_back();
      //exclude
      solve(nums,ans,i+1);
  }
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int>ans;
        int i=0;
        solve(nums,ans,i);
        sort(result.begin(),result.end());
        return result;
    }
};
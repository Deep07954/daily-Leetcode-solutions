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
      while(i<nums.size()-1 && nums[i]==nums[i+1]){
        i++;
      }

      solve(nums,ans,i+1);
      
     
  }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int i=0;
       
        solve(nums,ans,i);
     
        return result;
    }
};
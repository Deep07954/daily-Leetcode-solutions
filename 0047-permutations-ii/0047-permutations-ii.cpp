class Solution {
public:
vector<vector<int>>result;

void solve(vector<int>& nums,vector<int>& ans,vector<bool> &used){
   

    //base case hoga agr no of permutation aur ans ki length jyda ho gyi us se to 
      int n=nums.size();
    if(ans.size()==n){
        result.push_back(ans);
        return;
    }
    for(int i=0;i<n;i++){
        if(used[i])
        continue;
        if(i>0 && nums[i]==nums[i-1]&& !used[i-1])
        continue;
        used[i]=true;
        ans.push_back(nums[i]);
        solve(nums,ans,used);
        ans.pop_back();
        used[i]=false;

}
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
              vector<int>ans;
              int n=nums.size();
              vector<bool>used(n,false);
        solve(nums,ans,used);
        return result;
    }
};
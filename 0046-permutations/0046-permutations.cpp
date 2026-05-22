class Solution {
public:
vector<vector<int>>result;
unordered_set<int>st;
void solve(vector<int>& nums,vector<int>&ans){
    int n=nums.size();
    if(ans.size()==n){
        result.push_back(ans);
        return;
    }
    for(int i=0;i<n;i++){
        if(st.find(nums[i])==st.end()){
            ans.push_back(nums[i]);
            st.insert(nums[i]);
            solve(nums,ans);
            ans.pop_back();
            st.erase(nums[i]);

        }
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ans;
        solve(nums,ans);
        return result;
    }
};
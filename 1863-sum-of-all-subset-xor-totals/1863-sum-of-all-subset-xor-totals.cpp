class Solution {
public:
    void solve(vector<int>& nums, int idx, int curr, int& ans) {
        if (idx == nums.size()) {
            ans += curr;
            return;
        }
        solve(nums, idx + 1, curr ^ nums[idx], ans);
        solve(nums, idx + 1, curr, ans);
    }
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        solve(nums, 0, 0, ans);
        return ans;
    }
};
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(auto s:nums){
            mp[s]++;
        }
        int elem=nums[n/2];
      
        return mp[elem]==1;
    }
};
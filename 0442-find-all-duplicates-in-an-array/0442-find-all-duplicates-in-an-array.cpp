class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto &p:nums){
            mp[p]++;
        }
        for(auto &p:mp){
if(p.second>1){
    ans.push_back(p.first);
}
        }
        return ans;
    }
};
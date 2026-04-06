class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==2)
        return nums;
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int>result;
        for(auto p:mp){
            if(p.second<=1){
                result.push_back(p.first);
            }
        }
        return result;
    }
};
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &num:nums){
            mp[num]++;
        }
        for(auto &it:mp){
            if(it.second>2){
                return false;
            }
        }
        return true;
    }
};
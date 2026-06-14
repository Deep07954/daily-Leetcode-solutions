class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        for(auto &it:mp){
            if(it.second==1){
                sum+=it.first;
            }
        }
        return sum;
    }
};
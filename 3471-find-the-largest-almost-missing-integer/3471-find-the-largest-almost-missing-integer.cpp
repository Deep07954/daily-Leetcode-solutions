class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n=nums.size();
    for(auto &x:nums){
        mp[x]++;
    }
    if(k==1){
        int ans=-1;
        for(auto &it:mp){
            if(it.second==1){
                ans=max(it.first,ans);
            }
        }
        return ans;
    }
    if(k==n){
     return *max_element(nums.begin(),nums.end());
    }
    int curr=-1;
    if(1<k<n){
        
        if(mp[nums[0]]==1){
            curr=max(curr,nums[0]);
        }
        if(mp[nums[n-1]]==1)curr=max(curr,nums[n-1]);
        }

     
        return curr;
    }
};
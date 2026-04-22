class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        int minm;
        int maxm;
        int len=0;
        unordered_map<int,int>mp;
        for(auto &it:nums){
            mp[it]++;
        }
        for(int i=0;i<n;i++){
  minm=nums[i];
  maxm=minm+1;
  if(mp.count(maxm))
  len=max(len,mp[minm]+mp[maxm]);
        }
        return len;
    }
};
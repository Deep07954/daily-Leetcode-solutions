class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();
       int maxm=*max_element(nums.begin(),nums.end());
       int minm=*min_element(nums.begin(),nums.end());
       int value=maxm-minm;
       return (long long)k*value;
        
    }
};
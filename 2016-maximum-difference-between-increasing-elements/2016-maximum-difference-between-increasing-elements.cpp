class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res=nums[1]-nums[0];
        int minm=nums[0];
        for(int i=1;i<nums.size();i++){
            res=max(res,nums[i]-minm);
            minm=min(minm,nums[i]);
        }
        return res>0?res:-1;
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        if(n==1)return nums[0];
 if(n==2)return min(nums[0],nums[1]);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]==nums[mid]&& nums[mid]==nums[high]){
                ans=min(ans,nums[low]);
                low=low+1;
                high=high-1;
                continue;
            }
            if(nums[low]<=nums[mid]){
                ans=min(ans,nums[low]);
                low=mid+1;
            }else {
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }
};
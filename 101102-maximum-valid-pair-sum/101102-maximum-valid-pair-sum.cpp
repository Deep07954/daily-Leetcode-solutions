class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        int maxsum =INT_MIN;
        int ans=0;
        for(int j=k;j<n;j++){
            maxsum=max(maxsum,nums[j-k]);
            ans=max(ans,maxsum+nums[j]);
        }
        return ans;
        // int i=0;
        // int j=n-1;
        // int maxsum=INT_MIN;
        // while(i<j){
        //     while(j-i>=k){
        //     int sum=nums[i]+nums[j];
        //     maxsum=max(sum,maxsum);
        //         j--;
        //     }
        //     i++;
        //     j=n-1;
            
        // }
        // return maxsum;
    }
};
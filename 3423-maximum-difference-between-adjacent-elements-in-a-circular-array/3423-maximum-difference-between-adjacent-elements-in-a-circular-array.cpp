class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int diff=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
diff=max(diff,abs(nums[i+1]-nums[i]));
        }
        diff=max(diff,abs(nums[n-1]-nums[0]));
       return abs(diff);  
    }
};
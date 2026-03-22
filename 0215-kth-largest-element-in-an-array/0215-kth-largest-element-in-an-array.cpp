class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //nlogn 
//         sort(nums.begin(), nums.end());  // ascending
// return nums[nums.size() - k];    // k-th largest
//T.C O(N)
nth_element(nums.begin(),nums.begin()+k-1,nums.end(),greater<int>());
return nums[k-1];
    }
};
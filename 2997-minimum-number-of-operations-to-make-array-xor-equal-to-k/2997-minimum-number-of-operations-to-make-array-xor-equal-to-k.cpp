class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int xorall=0;
        for(int i=0;i<n;i++){
            xorall^=nums[i];
        }
        int diff_bit=xorall^k;
        return __builtin_popcount(diff_bit);
     
    }
};
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>arr;
        int m=nums.size();
        for(int i=0;i<nums.size()/2;i++){
            arr.push_back(nums[i]);
            arr.push_back(nums[(i+n)%m]);
        }
        return arr;

    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
    nums.insert(nums.end(),nums.begin(),nums.end());
   nums= vector<int>(nums.begin()+n-k,nums.begin()+2*n-k);
    
    }
};
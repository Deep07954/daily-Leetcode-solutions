class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int n=nums.size();
       int maxm=*max_element(nums.begin(),nums.end());
       return k*(2*maxm+k-1)/2 ;
        
    }
};
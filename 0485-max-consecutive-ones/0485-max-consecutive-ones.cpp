class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
   int maxm=INT_MIN;
   int l;
        while( i<n){
             l=0;
            while( i<n  && nums[i]==1){
                l++;
                i++;
            }
            maxm=max(maxm,l);
            i++;
        }
        return maxm;

    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        //O(n)  && space O(1);
         int candidate=nums[0];
         int count=0;
        for(auto x:nums){
        if(x==candidate){
            count++;
        }else {
            count--;
        }
        if(count==0){
            candidate=x;
            count++;
        }
        }
        return candidate;
    }
};
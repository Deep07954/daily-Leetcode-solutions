class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
             int n=nums.size();
        int minlength1=INT_MAX;
        int i=0;
        int j=0;
        int sum=0;
        
        while( j<n){

 
 sum+=nums[j];
 while(sum>=target){
    minlength1=min(minlength1,j-i+1);
    sum-=nums[i];
    i++;
 }
 j++;
        }
        if(minlength1==INT_MAX)
        return 0;

    return minlength1;

    }
};
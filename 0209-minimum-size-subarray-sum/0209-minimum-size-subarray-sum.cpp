class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int sum=0;
        int result=INT_MAX;
        for(int j=0;j<n;j++){
sum+=nums[j];
while(target<=sum){
    result=min(result,j-i+1);
    sum-=nums[i];
    i++;
}

        }
        return result==INT_MAX?0:result;

    }
};
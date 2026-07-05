class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n=nums.size();
       
        
        int diff=INT_MIN;
        int sum=0;
         for(int i=0;i<n;i++){
        string ans=to_string(nums[i]);
             
        int maxm=INT_MIN;
        int small=INT_MAX;
        for(auto ch :ans){
            maxm=max(maxm,ch-'0');
            small=min(small,ch-'0');
        }
             if((maxm-small)>diff){
                 diff=maxm-small;
             sum=nums[i];}
             else
             if(diff==maxm-small){
                 sum+=nums[i];
             }
         }
        return sum;
    }
};
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
        int  n =nums.size();
        int minm=INT_MAX;
        for(int k=l;k<=r;k++){
            int sum=0;
        int i=0;
        int j=0;
        while(j<n){
            sum+=nums[j];
             if(j-i+1==k){
               if(sum>0){
                minm=min(sum,minm);
               }
                sum-=nums[i];
                 i++;
             }
             j++;
        }
        }
return (minm==INT_MAX)?-1:minm;
     
    }
};
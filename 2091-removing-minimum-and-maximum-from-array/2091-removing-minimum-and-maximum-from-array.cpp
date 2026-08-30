class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minelement=*min_element(nums.begin(),nums.end());
        int maxelement=*max_element(nums.begin(),nums.end());
        int minidx=-1;
        int maxidx=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==minelement){
                minidx=i;
            }
            if(nums[i]==maxelement){
                maxidx=i;
            }
        }
        int left=min(minidx,maxidx);
        int right=max(minidx,maxidx);
        return min({left+1+n-right,right+1,n-left});


    }
};
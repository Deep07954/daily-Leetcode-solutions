class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
          int minelem=INT_MAX;
        vector<int>minidx(n);
        for(int i=n-1;i>=0;i--){
            minelem=min(minelem,nums[i]);
            minidx[i]=minelem;
        }
        int maxelem=INT_MIN;
        for(int i=0;i<n;i++){
            maxelem=max(maxelem,nums[i]);
            if(maxelem-minidx[i]<=k){
                return i;
            }
        }
        return -1;
    }
};
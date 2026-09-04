class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        
        // int score=-1;
       
        // for(int i=0;i<n;i++){
        //      int maxelem=INT_MIN;
        // int minelem=INT_MAX;
        //     for(int j=0;j<=i;j++){
        //     maxelem=max(maxelem,nums[j]); }
        //     for(int p=i;p<n;p++){
        //         minelem=min(minelem,nums[p]);
        //     }
        //     score=maxelem-minelem;
        //     if(score<=k){
        //         return i;
        //     }
        // }
        // return -1;

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
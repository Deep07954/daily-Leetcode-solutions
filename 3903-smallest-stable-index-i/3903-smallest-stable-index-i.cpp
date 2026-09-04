class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        
        int score=-1;
       
        for(int i=0;i<n;i++){
             int maxelem=INT_MIN;
        int minelem=INT_MAX;
            for(int j=0;j<=i;j++){
            maxelem=max(maxelem,nums[j]); }
            for(int p=i;p<n;p++){
                minelem=min(minelem,nums[p]);
            }
            score=maxelem-minelem;
            if(score<=k){
                return i;
            }
        }
        return -1;
    }
};
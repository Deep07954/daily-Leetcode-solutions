class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
      
        for(int i=0;i<n;i++){
            int m=nums[i];
            int ans=0;
            while(m!=0){
                int rem=m%10;
                ans+=rem;
                m=m/10;
            }
            nums[i]=ans;
        }
        return *min_element(begin(nums),end(nums));
    }
};
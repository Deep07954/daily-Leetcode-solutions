class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n=nums.size();
       
        int count=0;
        int j=0;
        long long total=0;
        long long prefix=0;
          long long  suffix=0;
        for(int i=0;i<n;i++){
            total+=nums[i];
            if(i<n/2){
                prefix+=nums[i];
            }
        }
        while(j<n){
            suffix=total-prefix;
           
       
     
        
            if(prefix>suffix){
                count++;
            }
           prefix=prefix-nums[j]+nums[(j+n/2)%n];
            j++;
        }
        return count;
    }
};
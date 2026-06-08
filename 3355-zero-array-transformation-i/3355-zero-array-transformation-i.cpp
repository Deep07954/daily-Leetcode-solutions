class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();

        vector<int> diff(n + 1, 0);

        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];

          diff[l] += 1;
            
                diff[r + 1] -= 1;
        }

        vector<int>prefix(n,0);
        prefix[0]=diff[0];

        for (int i = 1; i < diff.size()-1;i++) {
            prefix[i]=prefix[i-1]+diff[i];  
        }
       for(int i=0;i<n;i++){
            if(prefix[i]<nums[i])
            return false;
        }

        return true;  
        
         }
};
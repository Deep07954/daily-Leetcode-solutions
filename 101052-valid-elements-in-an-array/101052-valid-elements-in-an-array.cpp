class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums;
        
        vector<int>result;
        //remove that eleemnt hwich is netiher gretaer for left nor for right
        //left ka max elemnt
        vector<int>left(n);
        left[0]=nums[0];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],nums[i]);
        }
        vector<int>right(n);
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i]=max(right[i+1],nums[i]);
        }
         result.push_back(nums[0]);
        for(int i=1;i<n-1;i++){
           
           if(nums[i]>left[i-1]||nums[i]>right[i+1] ){
               result.push_back(nums[i]);
           }
        
            
        }
            result.push_back(nums[n-1]);
        return result;
        
    }
};
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0;
        long long sum=0;
        int result=0;
        sort(nums.begin(),nums.end());
        // we are using sliding window here hum kya kr rhe yha ki ek window le rhe aur usme sbhi vlaeus ko kya ek target valeu ke equal kr paa rhe ya nhi agr kr paa rhe then uska sizxe hi most frequent elemnt hoga 
        for(int r=0;r<n;r++){
            sum+=nums[r];
            //agr window invalid hua to nums[r] value htao shrink kro mwinodw size aur ya keh skt ehai l ko bdhao aage nya window dkeho 
    
            
            while(1LL*nums[r]*(r-l+1)>sum+k){
                sum-=nums[l];
                l++;
            }
           result=max(result,r-l+1); 
        }
        return result;
    }
};
//t.c -O(nlogn)
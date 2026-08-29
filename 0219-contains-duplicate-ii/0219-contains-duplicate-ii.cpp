class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        //value ke aage uska index stor ekrdo latest
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){
                if(abs(i-mp[nums[i]])<=k){
                    return true;
                }
            }
            // store krdo index value ke aage  jaise ki mp[nums[0]]=0;  nums[o]=1 -->1-0
            mp[nums[i]]=i;
        }
   
//    int i=0;
//    int j=n-1;
//    while(i<=j){
   
//     while(j>i){
//     if(nums[i]==nums[j]&& abs(i-j)<=k){
//         return true;
//     }
//     j--;
//     }
//      j=n-1;
//     i++;
//    }
//    return false;
return false;
    }
};
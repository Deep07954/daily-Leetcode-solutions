class Solution {
public:
int ATMOST(vector<int>& nums, int k){
       int i=0;
        int j=0;
         int n=nums.size();
        int count=0;
        unordered_map<int,int>mp;
        while(j<n){
            mp[nums[j]]++;
    
// if(mp.size()==k){
//     {
//     count+=j-i+1;
//     }
//shrink jab size>k
while(mp.size()>k){
    mp[nums[i]]--;
   
    if(mp[nums[i]]==0){
        mp.erase(nums[i]);
    }
     i++;
}
count+=j-i+1;
j++;
        }
return count;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // int n=nums.size();
        // int count=0;
        // //brute force
        // for(int i=0;i<n;i++){
        //     unordered_map<int,int>mp;
        //     for(int j=i;j<n;j++){
        //         mp[nums[j]]++;
        //         if(mp.size()==k){
        //             count++;
        //         }
        //         else
        //         if(mp.size()>k){
        //             break;
        //         }
        //     }
        // }
        // return count;
        //optima solution
        // EXACTLY K =ATMOST(K)-ATMOST(K-1)
      return ATMOST(nums,k)-ATMOST(nums,k-1);
    }
};
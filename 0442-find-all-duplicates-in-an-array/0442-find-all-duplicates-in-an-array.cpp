class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // unordered_map<int,int>mp;
        vector<int>ans;
//         for(auto &p:nums){
//             mp[p]++;
//         }
//         for(auto &p:mp){
// if(p.second>1){
//     ans.push_back(p.first);
// }
//         }
//         return ans;
for(int i=0;i<nums.size();i++){
    int num=abs(nums[i]);
    int idx=num-1;
    if(nums[idx]<0){
        ans.push_back(num);
    }
    else
    {
        nums[idx]*=-1;
    
    }
}
return ans;
    }
};
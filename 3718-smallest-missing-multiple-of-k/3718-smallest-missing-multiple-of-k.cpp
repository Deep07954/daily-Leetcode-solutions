class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();

sort(nums.begin(),nums.end());
int curr=k;
for(auto x:nums){
    if(x==curr){
curr+=k;
    }
}
return curr;
        // unordered_set<int>st(nums.begin(),nums.end());
        // int curr=k;
        // while(st.count(curr)){
        //     curr+=k;
        // }
        // return curr;
//         vector<bool>freq(105,false);
//         for(auto x:nums){
//             freq[x]=true;
//         }
//         int current=k;
//         while(current<=101){
// if(freq[current]==false){
//     return current;
// }
// current+=k;
//         }
//         return current;
    }
};
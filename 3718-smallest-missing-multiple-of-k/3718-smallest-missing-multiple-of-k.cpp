class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        vector<bool>freq(105,false);
        for(auto x:nums){
            freq[x]=true;
        }
        int current=k;
        while(current<=101){
if(freq[current]==false){
    return current;
}
current+=k;
        }
        return current;
    }
};
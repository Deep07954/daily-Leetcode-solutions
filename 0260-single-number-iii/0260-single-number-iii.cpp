class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==2)
        return nums;
        // unordered_map<int,int>mp;
        // for(auto x:nums){
        //     mp[x]++;
        // }
        // vector<int>result;
        // for(auto p:mp){
        //     if(p.second<=1){
        //         result.push_back(p.first);
        //     }
        // }
        // return result;
        //TIME COMPELXITY : O(n)
        //space complexity : o(n)
        int xorall=0;
        for(auto x:nums){
            xorall^=x;
        }
        int b1=0;
        int b2=0;
        int rightmost_bit=(xorall&(xorall-1))^xorall;
        for(auto x:nums){
            if(x&rightmost_bit){
                b1=b1^x;
            }
            else
            b2=b2^x;
        }
        return {b1,b2};
    }
};
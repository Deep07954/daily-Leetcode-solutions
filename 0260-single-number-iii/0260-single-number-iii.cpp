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
        long long xorall=0;
        for(auto x:nums){
            xorall^=x;
        }
      int b1=0;
    int b2=0;
        long long rightmost_bit=(xorall&(xorall-1))^xorall;
        for(auto x:nums){
            if(x&rightmost_bit){
                b1=b1^x;
            }
            else
            b2=b2^x;
        }
        return {b1,b2};
        // runtim eerror ayay kyunki int ka range hai -2^31 se lekr 2^31-1 ab agr xor krne pe xor ki value -2^31 aa gyi suppose to jo rightmost_bit ka formula hai jisme humne xor-a kiya hai wo overflow ho jayega xor smallest number hai aur uska minus out of range chla jayeg aye hai edge case iske liye hum long lenge
    }
};
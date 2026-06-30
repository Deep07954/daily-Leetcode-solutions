class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto & c:s){
            mp[c]++;
        }
        int ans=0;
        bool oddcount=false;;
        for(auto &it:mp){
            if(it.second%2==0){
                ans+=it.second;
            }else {
           
           ans+=it.second-1;
           oddcount=true;
        }
        }
        if(oddcount)
         {ans++;}
        return ans;
    }
};
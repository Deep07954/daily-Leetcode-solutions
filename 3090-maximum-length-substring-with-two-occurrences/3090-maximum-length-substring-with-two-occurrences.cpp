class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        
         int i=0;
         int j=0;
         int res=0;
         while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>2){
mp[s[i]]--;
i++;
            }
          
           res=max(res,j-i+1);
           j++;
         }
         return res;
    }
};
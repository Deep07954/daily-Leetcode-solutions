class Solution {
public:
    int minimizedStringLength(string s) {
         int n=s.length();
        unordered_set<char>st(s.begin(),s.end());
return st.size();
    }
};
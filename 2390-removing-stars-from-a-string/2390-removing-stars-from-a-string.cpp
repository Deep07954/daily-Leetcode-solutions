class Solution {
public:
    string removeStars(string s) {
        string res="";
        int n=s.length();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(!st.empty() && s[i]=='*'){
                st.pop();
            }else {
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
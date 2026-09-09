class Solution {
public:
    string clearDigits(string s) {
        int n=s.length();
        stack<char>st;
        string res="";
        for(int i=0;i<n;i++){
            if( s[i]<='9' && s[i]>='0' ){
                if(!st.empty()){
                st.pop();}
            } else {
            st.push(s[i]);}
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
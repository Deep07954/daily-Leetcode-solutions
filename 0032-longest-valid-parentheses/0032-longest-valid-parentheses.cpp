class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length();
        stack<int>st;
        st.push(-1);
        int len=INT_MIN;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='('){
                st.push(i);
            }
            else {
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else {
                    len=max(len,i-st.top());
                }
            }
        }
        return len==INT_MIN?0:len;
    }
};
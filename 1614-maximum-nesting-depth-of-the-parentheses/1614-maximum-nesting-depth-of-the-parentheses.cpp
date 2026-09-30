class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int result=0;
        stack<char>st;
        for(auto ch:s){
            if(ch=='('){
                st.push(ch);
            }else if(ch==')'){
                st.pop();
            }
            result=max(result,(int)st.size());
        }
        return result;
    }
};
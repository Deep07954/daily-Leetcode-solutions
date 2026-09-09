class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        stack<char>st;
        st.push(s[0]);
        int i=1;
        while(i<n){
            if(st.empty()|| st.top()!=s[i]){
    st.push(s[i]);
  
}else {
    st.pop();
}
i++;


        }
        string res="";
        while(!st.empty()){
res+=st.top();
st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
            }
};
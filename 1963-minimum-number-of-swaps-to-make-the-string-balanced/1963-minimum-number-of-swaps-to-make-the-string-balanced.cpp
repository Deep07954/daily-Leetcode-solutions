class Solution {
public:
    int minSwaps(string s) {
            int n=s.length();
        if(n%2!=0)return -1;
        stack<char>st;
        for(int i=0;i<n;i++){
           char ch=s[i];
            if(ch=='['){
                st.push(ch);
            }else if(!st.empty() && st.top()=='['){
                //ch==')'
                st.pop();
            }else{
                st.push(ch);
            }
        }
        int count=0;
        while(!st.empty()){
            if(st.top()=='['){
                count++;

            }
            st.pop();
        }
        return (count+1)/2;
    }
};
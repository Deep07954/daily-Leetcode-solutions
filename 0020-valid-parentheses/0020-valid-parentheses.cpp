class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<int>st;
        for(auto ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }else {
                //stack main koi opening bracket hi na ho 
                if(st.empty()){
                    return false;
                }
                //closing bracket
                if(ch==')'&& st.top()!='('){
                    return false;
                }
                 if(ch=='}'&& st.top() !='{'){
                    return false;
                }
                 if(ch==']'&& st.top() !='['){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
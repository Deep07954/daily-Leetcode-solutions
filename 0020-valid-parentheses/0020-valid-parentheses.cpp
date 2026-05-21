class Solution {
public:
    bool isValid(string s) {

        stack<char> st;

        for(auto ch : s) {

            // opening brackets
            if(ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }

            // closing brackets
            else {

                // stack empty
                if(st.empty()) {
                    return false;
                }

                // matching check
                if(ch == ')' && st.top() != '(') {
                    return false;
                }

                if(ch == ']' && st.top() != '[') {
                    return false;
                }

                if(ch == '}' && st.top() != '{') {
                    return false;
                }

                st.pop();
            }
        }

        // stack empty hona chahiye
        return st.empty();
//       int count=0;
//     for(auto &ch:s){
//         if(ch=='('){
//             count++;
//         }
//         else
//         if(ch==')')                
//         {count--;
//        }
//        else
//        if(ch=='['){
//         count+=2;
//        }else if(ch==']'){
//         count-=2;
//        }
//        else if(ch=='{'){count+=3;}
//        else if(ch=='}'){count-=3;}
//     }
//    return count==0;
    }
};
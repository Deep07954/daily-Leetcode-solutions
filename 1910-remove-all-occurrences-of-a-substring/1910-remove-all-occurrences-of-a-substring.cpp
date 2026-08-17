class Solution {
public:
bool check(string part,stack<char>&st,int m){
    stack<char>temp=st;
    for(int i=m-1;i>=0;i--){
        if(temp.top()!=part[i]){
            return false;
        }
        temp.pop();
    }
    return true;
}
    string removeOccurrences(string s, string part) {
        int n=s.length();
        int m=part.length();
//brute force
// while(true){
// int idx=s.find(part);
// if(idx==string::npos){
//     break;
// }
// s.erase(idx,m);
// }
// return s;

        // string res="";
        // for(int i=0;i<n;i++){
        //     res.push_back(s[i]);
        //     if(res.size()>=m){
        //         if(res.substr(res.size()-m)==part){
        //             res.erase(res.size()-m);
        //         }
        //     }
        // }
        // return res;
        stack<char>st;
        for(int i=0;i<n;i++){
            st.push(s[i]);
            if(st.size()>=m && check(part,st,m)==true){
                for(int j=0;j<m;j++){
                    st.pop();
                }
            }
        }
        string res="";
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
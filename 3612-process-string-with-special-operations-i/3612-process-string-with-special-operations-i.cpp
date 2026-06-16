class Solution {
public:
    string processStr(string s) {
        string result="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&& s[i]<='z'){
                result.push_back(s[i]);
            }
            else 
            if(s[i]=='#'){
                result+=result;
            }
            else if(s[i]=='%'){
                reverse(result.begin(),result.end());
            }
            else if(s[i]=='*' && result.length()>0){
                result.pop_back();
            }
        }
        return result;
    }
};
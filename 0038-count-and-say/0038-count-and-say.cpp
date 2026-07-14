class Solution {
public:
 string getnext(string &s){
    string res="";
    int i=0;
    while(i<s.length()){
    char curr_char=s[i];
    int count=0;
    while(i<s.length() && curr_char==s[i]){
        count++;
        i++;
    }
    res+=to_string(count);
    res+=curr_char;
    }
    return res;
 }
    string countAndSay(int n) {
        if(n==1) return "1";
        string s="1";
        for(int i=1;i<n;i++){
s=getnext(s);
        }
        return s;
    }
};
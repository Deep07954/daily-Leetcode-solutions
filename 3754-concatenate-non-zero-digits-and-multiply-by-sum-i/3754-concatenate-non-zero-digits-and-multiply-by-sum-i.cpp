class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        string x="";
        long long sum=0;
        if(n==0)
        return 0;
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                x.push_back(s[i]);
            }
        }
        for(int i=0;i<x.length();i++){
            sum+=x[i]-'0';
        }
        long long m=stoi(x);
        return m*sum;
    }
};
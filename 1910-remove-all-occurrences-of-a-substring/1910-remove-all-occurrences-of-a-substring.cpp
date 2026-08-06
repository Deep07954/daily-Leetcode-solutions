class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=s.length();
        int m=part.length();
        string res="";
        for(int i=0;i<n;i++){
            res.push_back(s[i]);
            if(res.size()>=m){
                if(res.substr(res.size()-m)==part){
                    res.erase(res.size()-m);
                }
            }
        }
        return res;
    }
};
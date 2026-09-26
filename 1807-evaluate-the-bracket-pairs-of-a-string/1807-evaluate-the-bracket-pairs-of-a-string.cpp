class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n=s.length();
        unordered_map<string,string>mp;
        for(auto x: knowledge){
            mp[x[0]]=x[1];
        }
        string result="";
        bool isbracket=false;
        string temp="";
     int i=0;
     while(i<n){
        if(s[i]=='('){
            isbracket=true;
        }else if(s[i]==')'){
            isbracket=false;
            result+=mp.count(temp)?mp[temp]:"?";
            temp="";
        }else if(isbracket==true){
            temp+=s[i];
            
        }else{
            result+=s[i];
        }
        i++;
     }
     return result;
    }
};
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(auto &c:chars){
            mp[c]++;
        }
        int len=0;
        for(auto & c:words){
            unordered_map<char,int>mp2;
bool canform=true;
            for(auto & s:c){
                mp2[s]++;
                if(mp2[s]>mp[s]){
                    canform=false;
                    break;
                }
            }
            if(canform){
            len+=c.length();
            }
        }
        return len;
    }
};
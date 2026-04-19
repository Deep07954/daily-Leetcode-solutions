class Solution {
public:
bool anagrams(string s1,string s2){
    unordered_map<char,int>mp;
    for(auto c:s1){
      
        mp[c]++;
    }
    for(auto ch:s2){
        mp[ch]--;
    }
    for(auto it:mp){
        if(it.second!=0){
            return false;
        }
    }
    return true;
}
    vector<string> removeAnagrams(vector<string>& words) {
        int n=words.size();
        vector<string>result;
        result.push_back(words[0]);
        for(int i=1;i<n;i++){

if(!anagrams(words[i],result.back())){
    result.push_back(words[i]);
}
        }
        return result;
    }
};
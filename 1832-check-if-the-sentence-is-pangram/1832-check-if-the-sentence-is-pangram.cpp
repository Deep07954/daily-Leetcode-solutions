class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>freq(26,0);
        for(auto c:sentence){
            freq[c-'a']++;
        }
        for(auto num:freq){
            if(num==0){
                return false;
            }
        }
        return true;
    }
};
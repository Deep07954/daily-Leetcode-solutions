class Solution {
public:
    int titleToNumber(string columnTitle) {
    int ans=0;

        for(auto &s:columnTitle){
            int value= s-'A'+1;
            ans=ans *26+value;
        }
        return ans;
            }
};
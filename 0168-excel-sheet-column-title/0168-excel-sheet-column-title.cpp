class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n=columnNumber;
        string ans="";
        while(n>0){
            n--;
            int r=n%26;
            
            ans+='A'+r;
            n=n/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
            }
};
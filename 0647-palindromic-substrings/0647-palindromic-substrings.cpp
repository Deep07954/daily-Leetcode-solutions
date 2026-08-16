class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                bool ispalindrome=true;
                int l=i;
                int r=j;
                while(l<r){
                    if(s[l]!=s[r]){
                        ispalindrome=false;
                        break;
                    }
                    l++;
                    r--;
                }
                if(ispalindrome){
                    count++;
                }
            }
        }
        return count;
    }
};
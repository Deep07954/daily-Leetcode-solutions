class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length();
       int total=0;
     for(int i=0;i<n;i++){
        char c=s[i];
        int rev_String=26-(c-'a');
        int string_idx=i+1;
        total+=rev_String*string_idx;
     }
     return total;
    }
};
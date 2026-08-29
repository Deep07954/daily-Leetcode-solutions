class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        int i=0;
        int j=0;
        int count=0;
        int maxv=0;
        auto isvowel=[&](char ch){
            return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
        };
        while(j<n){
            if(isvowel(s[j])){
                count++;
            }
            if(j-i+1==k){
                maxv=max(count,maxv);
                if(isvowel(s[i])){
                    count--;
                }
                i++;
            }
            j++;

        }
        return maxv;

    }
};
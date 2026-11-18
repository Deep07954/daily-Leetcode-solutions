class Solution {
public:
    int beautifulSubstrings(string s, int k) {
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++){
            int cons=0;
            int vowel=0;
            for(int j=i;j<n;j++){
if(s[j]=='a'|| s[j]=='e'|| s[j]=='i'|| s[j]=='o'||s[j]=='u'){
    vowel++;
}else{
    cons++;
}
if(vowel==cons  && (cons*vowel)%k==0){
count++;
}
            }
        }
        return count;
    }
};
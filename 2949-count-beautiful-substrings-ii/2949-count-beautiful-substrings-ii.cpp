class Solution {
public:
typedef long long ll;
bool isvowel(char &c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
    long long beautifulSubstrings(string s, int k) {
        int n=s.length();
        ll vowel=0;
        ll cons=0;
        long long result=0;
        unordered_map<long long,unordered_map<long,long>>mp;
  
        mp[0][0]=1;

        for(auto ch:s){
             if(isvowel(ch)){
                vowel++;
             }else{
                cons++;
             }
      long long psum=(vowel-cons);
      for(auto [past_vowel,count]:mp[psum]){
        //current substring main vowel count vowel-past vowel count
        if(( (vowel%k)-past_vowel)*( (vowel%k)-past_vowel)%k==0){
            result+=count;
        }
      }
      mp[psum][vowel%k]++;
        }
       return result; 
    }
};
class Solution {
public:
    bool allZero(vector<int>&counter){
        for(int &i:counter){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        vector<int>counter(26,0);
        int k=p.length();
        for(int i=0;i<k;i++){
            char ch=p[i];
            counter[ch-'a']++; 
        }
        vector<int>result;
        int i=0;
        int j=0;
        while(j<n){
            counter[s[j]-'a']--;
            if(j-i+1==k){
                if(allZero(counter)==true){
                    result.push_back(i);
                }
                counter[s[i]-'a']++;
                i++;
            }
            j++;
        }
        return result;
    }
};
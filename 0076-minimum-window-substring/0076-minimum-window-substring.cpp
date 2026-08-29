class Solution {
public:
    string minWindow(string s, string t) {
        int m=s.length();int n=t.length();
        int i=0,j=0;
        vector<int>hash(256,0);
        int count=n;
        int sindex=-1;
        int minL=INT_MAX;
        for(auto &c:t){
            hash[c]++;
        }
        while(j<m){
if(hash[s[j]]>0){
    count--;
}
hash[s[j]]--;
while(count==0){
    if(j-i+1<minL){
        minL=j-i+1;
        sindex=i;
    }
    hash[s[i]]++;
    if(hash[s[i]]>0){
        count++;
    }
    i++;
}
j++;
        }
        return sindex==-1?"":s.substr(sindex,minL);
    }
};
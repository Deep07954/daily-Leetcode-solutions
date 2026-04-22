class Solution {
public:
    string minWindow(string s, string t) {
        // brute force
        // int m = s.length();
        // int n = t.length();
        // int minlen = INT_MAX;
        // int sindex = -1;
        
        // for (int i = 0; i < m; i++) {
        //     vector<int> hash(256, 0);
        // for (auto& c : t) {
        //     hash[c]++;
        // }
        // int count = n;
        //     for (int j = i; j < m; j++) {
        //         if (hash[s[j]] > 0) {
        //             count--;
        //         }
        //         hash[s[j]]--;
        //         if (count == 0) {
        //             if (j - i + 1 < minlen) 
        //                 {minlen = j - i + 1;
        //                 sindex = i;
                        
        //                 }
        //                 break;
        //         }
        //     }
        // }
        // return sindex==-1?"": s.substr(sindex, minlen);
        //t.c O(n^2)
        // s.c:O(1) hash function is cosntant;
        //optimal solution
        int i=0;
        int j=0;
        int m = s.length();
        int n = t.length();
        int minlen = INT_MAX;
        int sindex = -1;
        int count=n;
     vector<int> hash(256, 0);
        for (auto& c : t) {
            hash[c]++;
        }
        while(j<m){
            //expand window
 if (hash[s[j]] > 0) {
                    count--;
                }
                hash[s[j]]--;
                //if tb use krenge jab ek answer exist kr rha ho pure substring main aur while tab jab multiple answer exist kr rha ho mtlb min aur max diya ho tb to while use krenge kyunki tab hume min dusra window bhi  mil skta hai 
              while (count == 0) {
                    if (j - i + 1 < minlen) 
                        {minlen = j - i + 1;
                        sindex = i;
                        }
        
        //shrink window
        hash[s[i]]++;
        if(hash[s[i]]>0){
            count++;
        }
        i++;
                }
                j++;
        }
        return sindex==-1?"": s.substr(sindex, minlen);
    }
};
class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int n=s.length();
        vector<int>ans;
        vector<int>barIndex;
        int i=0;
        for(auto ch:s){
            if(ch=='|'){
                barIndex.push_back(i);
            }
            i++;
        }
        for(auto it:queries){
            int l=it[0];
            int r=it[1];
            int idx1=lower_bound(barIndex.begin(),barIndex.end(),l)-barIndex.begin();
            int idx2=upper_bound(barIndex.begin(),barIndex.end(),r)-barIndex.begin()-1;
            if(idx1>=idx2){ ans.push_back(0);}
            else {
                ans.push_back(barIndex[idx2]-barIndex[idx1]-(idx2-idx1));
            }
        }
      return ans;
    }
};
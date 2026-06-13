class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       
        string ans="";
        for(auto s:words){
        int sum=0;
            for(auto c:s){
                sum+=weights[c-'a'];
          
            }
            sum=sum%26;
            ans.push_back('z'-sum);
            
        }
        
       
return ans;
    }
};
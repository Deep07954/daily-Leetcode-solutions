class Solution {
public:
  int  dp[101][101][101][2][2];
   const int M=1e9+7;
    long long solve(int w1_idx,int w2_idx,int t_idx,bool used1,bool used2,string &w1,string &w2,string &t){
        if(t_idx==t.length()){
            if(used1==true && used2==true){
                return 1;}
          else { return 0;}
        }
        if(dp[w1_idx][w2_idx][t_idx][used1][used2]!=-1)
            return dp[w1_idx][w2_idx][t_idx][used1][used2];
        long long totalways=0;
        for(int j=w1_idx;j<w1.length();j++){
            if(w1[j]==t[t_idx]){
                totalways+=solve(j+1,w2_idx,t_idx+1,true,used2,w1,w2,t);
                totalways%=M;
            }
        }
         for(int j=w2_idx;j<w2.length();j++){
            if(w2[j]==t[t_idx]){
                totalways+=solve(w1_idx,j+1,t_idx+1,used1,true,w1,w2,t);
                totalways%=M;
            }
        }
        return dp[w1_idx][w2_idx][t_idx][used1][used2]=totalways;
    }
    int interleaveCharacters(string word1, string word2, string target) {
        memset(dp,-1,sizeof(dp));
        return (int)solve(0,0,0,0,0,word1,word2,target);
    }
};
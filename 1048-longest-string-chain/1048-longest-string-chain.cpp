class Solution {
public:
long long dp[1001][1001];
int n;
bool checkP(string &i,string &p){
    int m=i.length();
    int k=p.length();
    if(m-k!=1){
        return false;
    }
    int ptr1=0; //curr string i ko jo point kre
    int ptr2=0;//prev string p ko jo point kre
    bool inserted=false;
    while(ptr1<m && ptr2<k){
        if(i[ptr1]==p[ptr2]){
            ptr1++;
            ptr2++;
        } else {
            if(inserted) return false ;// already ek elemnt isme inserted hai
            inserted=true;
            ptr1++;
        }
    }
    return true;
   
}
int solve(vector<string>&w,int i,int p){
    if(i>=w.size())
    return 0;
    if(p!=-1 && dp[i][p]!=-1 ){
        return dp[i][p];
    }
    int take=0;
    if(p==-1|| checkP(w[i],w[p])){
        take=1+solve(w,i+1,i);
    }
    int skip=solve(w,i+1,p);
    if(p!=-1)
    return dp[i][p]=max(take,skip);

return max(take,skip);
}
    int longestStrChain(vector<string>& words) {
        n=words.size();
        memset(dp,-1,sizeof(dp));
        sort(words.begin(),words.end(),[](const string &a,const string &b){
            return a.length()<b.length();
        }); //length ke basisi pe sorting 
        return solve(words,0,-1);
    }
};
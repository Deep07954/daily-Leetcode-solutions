class Solution {
public:
int dp[2001][2001];
int n,m;
bool solve(string &s,string & p,int i,int j){
//base case
if(i==n && j==m){
    return true;
}
if(i==n && j<m){
    while(j<m){
        if(p[j]!='*') return false;
        j++;
    }
    return true;
}


if(dp[i][j]!=-1){
    return dp[i][j];
}
if(s[i]==p[j]||p[j]=='?'){
    return dp[i][j]=solve(s,p,i+1,j+1);
}
if(p[j]=='*'){
    bool caseA=solve(s,p,i,j+1);

    bool caseB=solve(s,p,i+1,j);
    return dp[i][j]=caseA||caseB;
}
//char doesnt match then
return false;
}
    bool isMatch(string s, string p) {
n=s.length();
m=p.length();
memset(dp,-1,sizeof(dp));
return solve(s,p,0,0);
        
    }
};
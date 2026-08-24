class Solution {
public:
int dp[21][21];
int n,m;
bool solve(string &s,string & p,int i,int j){
if( j==m){
    return i==n;
}


bool match=(i<n)&& (s[i]==p[j]||p[j]=='.');
if(dp[i][j] !=-1){
    return dp[i][j];
}
if(j+1<m && p[j+1]=='*'){
 bool caseA=solve(s,p,i,j+2);

    bool caseB=match && solve(s,p,i+1,j);
    return dp[i][j]=caseA||caseB;
}




if(match){
    return dp[i][j]=solve(s,p,i+1,j+1);
}

//char doesnt match then
return dp[i][j]=false;
}
    bool isMatch(string s, string p) {
        n=s.length();
m=p.length();
memset(dp,-1,sizeof(dp));
return solve(s,p,0,0);
// int si=0;
// int pi=0;
// int n=s.size();
// int m=p.size();
// int match=0;
// int star=-1;
// while(si <n)
// {

// if(pi<m&&(s[si]==p[pi]||p[pi]=='.'))
// {   
// si++;
// pi++;   }

// else if(pi<m &&p[pi]=='*')
// {   match=si;
//     star=pi;
//  pi++;
// }
// else if(star!=-1)
// {
//     match++;
// si= match;
// pi=star+1;
// }
// else
// {
//     return false;
// }

// }

//  while (pi < m && p[pi] == '*')
//             pi++;

//         return pi == m;    
    }
};
   
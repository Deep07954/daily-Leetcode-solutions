class Solution {
public:
    long long t[17][11][2];
    int n;
    long long solve2(int currindex,int prev,bool flag,string &s){
        if(currindex==s.size())
            return 1;

        if(!flag && t[currindex][prev+1][0]!=-1)
            return t[currindex][prev+1][0];

        int range=flag?s[currindex]-'0':9;
        long long ans=0;
        for(int i=0;i<=range;i++){
            int prev2=prev;
            if(prev==-1 && i==0){
                ans+=solve2(currindex+1,-1,flag &&(i==range),s);
            }
            else if(prev==-1){
                ans+=solve2(currindex+1,i,flag &&(i==range),s);
            }
            else {
                if(abs(i-prev)<=n){
                    ans+=solve2(currindex+1,i,flag&&(i==range),s);
                }
            }
        }
        if(!flag)
            t[currindex][prev+1][0]=ans;
    return ans;
    }
    long long solve(long long num){
        if(num<0)
            return 0;
           //to access the index digit ek ek krke digit index ke through access krenge 
         string s=to_string(num);
        memset(t,-1,sizeof(t));
        return solve2(0,-1,true,s);
        
        
    }
    
    long long goodIntegers(long long l, long long r, int k) {
        n=k;
        return solve(r)-solve(l-1);
    }
};